/****************************************************************************
** Meta object code from reading C++ file 'panel_patient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HelloQt/panel_patient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panel_patient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_panel_patient_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_panel_patient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_panel_patient_t qt_meta_stringdata_panel_patient = {
    {
QT_MOC_LITERAL(0, 0, 13), // "panel_patient"
QT_MOC_LITERAL(1, 14, 11), // "add_patient"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "update_patient"
QT_MOC_LITERAL(4, 42, 14), // "delete_patient"
QT_MOC_LITERAL(5, 57, 11), // "get_patient"
QT_MOC_LITERAL(6, 69, 3) // "idx"

    },
    "panel_patient\0add_patient\0\0update_patient\0"
    "delete_patient\0get_patient\0idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_panel_patient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void panel_patient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        panel_patient *_t = static_cast<panel_patient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add_patient(); break;
        case 1: _t->update_patient(); break;
        case 2: _t->delete_patient(); break;
        case 3: _t->get_patient((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject panel_patient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_panel_patient.data,
      qt_meta_data_panel_patient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *panel_patient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *panel_patient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_panel_patient.stringdata0))
        return static_cast<void*>(const_cast< panel_patient*>(this));
    return QWidget::qt_metacast(_clname);
}

int panel_patient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
