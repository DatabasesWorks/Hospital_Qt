/****************************************************************************
** Meta object code from reading C++ file 'panel_table_visit_by_date.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HelloQt/panel_table_visit_by_date.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panel_table_visit_by_date.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_panel_table_visit_by_date_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_panel_table_visit_by_date_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_panel_table_visit_by_date_t qt_meta_stringdata_panel_table_visit_by_date = {
    {
QT_MOC_LITERAL(0, 0, 25), // "panel_table_visit_by_date"
QT_MOC_LITERAL(1, 26, 9), // "show_date"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "date"
QT_MOC_LITERAL(4, 42, 25) // "show_visits_between_dates"

    },
    "panel_table_visit_by_date\0show_date\0"
    "\0date\0show_visits_between_dates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_panel_table_visit_by_date[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void,

       0        // eod
};

void panel_table_visit_by_date::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        panel_table_visit_by_date *_t = static_cast<panel_table_visit_by_date *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_date((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 1: _t->show_visits_between_dates(); break;
        default: ;
        }
    }
}

const QMetaObject panel_table_visit_by_date::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_panel_table_visit_by_date.data,
      qt_meta_data_panel_table_visit_by_date,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *panel_table_visit_by_date::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *panel_table_visit_by_date::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_panel_table_visit_by_date.stringdata0))
        return static_cast<void*>(const_cast< panel_table_visit_by_date*>(this));
    return QWidget::qt_metacast(_clname);
}

int panel_table_visit_by_date::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE