#include "sql_connection.h"

// CONSTRUCTOR ----------------------------------------------------------------------
sql_connection::sql_connection()
: HOST_NAME("localhost"), DATABASE_NAME("stefan_db"), USERNAME("root"), PASSWORD("root")
{
    db = QSqlDatabase::addDatabase("QMYSQL"); // driver to connect with database
    db.setHostName(HOST_NAME);
    db.setDatabaseName(DATABASE_NAME);
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);

    if (!db.open())
    {
        throw my_exception("CONNECTION FAILED: " + db.lastError().text(), QDateTime(QDate::currentDate(), QTime::currentTime()));
    }

    qDebug() << "MYSQL DATABASE CONNECTED\n";
    create_tables();
}
// GET INSTANCE --------------------------------------------------------------------
sql_connection* sql_connection::get_instance()
{
    if (instance == nullptr)
    {
        instance = new sql_connection();
    }
    return instance;
}

sql_connection* sql_connection::instance = nullptr;

// CREATE TABLES -------------------------------------------------------------------
void sql_connection::create_tables()
{
    try {
        QSqlQuery query;

        // creating table doctor -------------------------------------------------
        QString sqlDoctor = "create table if not exists doctor ( "
                            "id integer primary key auto_increment,"
                            "name varchar(50) not null,"
                            "surname varchar(50) not null,"
                            "specialization varchar(50) not null "
                            ");";
        query.prepare(sqlDoctor);
        if (query.exec()) {
            qDebug() << "Table doctor created successfully\n";
        } else {
            qDebug() << "Error while creating doctor table\n";
        }

        // creating tabele patient ------------------------------------------------
        QString sql_patient = "create table if not exists patient ( "
                              "id integer primary key auto_increment,"
                              "first_name varchar(50) not null, "
                              "last_name varchar(50) not null, "
                              "age integer not null,"
                              "symptoms varchar(250) not null,"
                              "diagnose varchar(250) not null "
                              ");"; // ile znakow dla varchar ???
        query.prepare(sql_patient);
        if(query.exec())
        {
            qDebug() << "Table patient created successfully\n";
        }
        else
        {
            qDebug() << "Error while creating patient table\n";
        }

        // creating tabele visit --------------------------------------------------
        QString sql_visit = "create table if not exists visit ( "
                            "id integer primary key auto_increment, "
                            "visit_date_time timestamp, "
                            "cost decimal(5,2) not null, "
                            "doctor_id integer not null, "
                            "patient_id integer not null, "
                            "foreign key (doctor_id) references doctor(id) on delete "
                            "cascade on update cascade, "
                            "foreign key (patient_id) references patient(id) on delete "
                            "cascade on update cascade);";

        query.prepare(sql_visit);
        if(query.exec())
        {
            qDebug() << "Table visit created successfully\n";
        }
        else
        {
            qDebug() << "Error while creating visit table\n";
        }


    } catch (const my_exception& e) {
        throw new my_exception(e.what(), QDateTime(QDate::currentDate(), QTime::currentTime()));
    }
}

// GETTER ---------------------------------------
QSqlDatabase sql_connection::get_db()
{
    return db;
}

// SETTER ---------------------------------------
void sql_connection::close_connection()
{
    db.close();
}
