// Created by stefan on 5/22/18.
#include "doctor_repository.h"
#include "sql_connection.h"

// ADD DOCTOR -------------------------------------------------------------------------
void doctor_repository::add_doctor(const doctor& d)
{
    QString sql = "insert into doctor "
                  "(name, specialization) "
                  "values (:name, :specialization);";
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":name", d.get_name());
    query.bindValue(":specialization", d.get_specialization());

    if (query.exec()) {
        qDebug() << "New row into doctor table inserted!\n";
    } else {
        qDebug() << sql_connection::get_instance()->get_db().lastError().text() << "\n";
        qDebug() << "Error while inserting in doctor table\n";
    }
}

// UPDATE DOCTOR ----------------------------------------------------------------------
void doctor_repository::update_doctor(const doctor& d)
{
    QString sql = "update doctor "
                  "set name = :name, specialization = :specialization "
                  "where id = :id;";
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":name", d.get_name());
    query.bindValue(":specialization", d.get_specialization());
    query.bindValue(":id", d.get_id());

    if (query.exec()) {
        qDebug() << "Row with id = " << d.get_id() <<  " successfully updated!\n";
    } else {
        qDebug() << sql_connection::get_instance()->get_db().lastError().text() << "\n";
        qDebug() << "Error while updating in doctor table\n";
    }
}

// DELETE DOCTOR ----------------------------------------------------------------------
void doctor_repository::delete_doctor(const int id)
{
    QString sql = "delete from doctor where id = :id";
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":id", id);

    if (query.exec()) {
        qDebug() << "Row with id = " << id <<  " successfully deleted!\n";
    } else {
        qDebug() << sql_connection::get_instance()->get_db().lastError().text() << "\n";
        qDebug() << "Error while deleting in doctor table\n";
    }
}

// FIND ALL DOCTORS ------------------------------------------------------------------
QVector<doctor> doctor_repository::find_all_doctors()
{
    QVector<doctor> doctors;
    QString sql = "select id, name, specialization from doctor";
    QSqlQuery query;
    query.exec(sql);

    while (query.next()) {
        doctors.push_back(doctor{
            query.value(0).toInt(),
            query.value(1).toString(),
            query.value(2).toString()
        });
    }
    return doctors;
}

// FIND ONE DOCTOR BY ID -------------------------------------------------------------
boost::optional<doctor> doctor_repository::find_one_doctor_by_id(const int id)
{
    QString sql = "select id, name, specialization from doctor where id = :id";
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":id", id);

    if (query.exec()) {
        if (query.next()) {
            return boost::optional<doctor>{
            doctor{
            query.value(0).toInt(),
            query.value(1).toString(),
            query.value(2).toString()
            }
            };
        }
    } else {
        qDebug() << "Error while selecting one doctor from table\n";
    }


    return boost::optional<doctor>{};
};