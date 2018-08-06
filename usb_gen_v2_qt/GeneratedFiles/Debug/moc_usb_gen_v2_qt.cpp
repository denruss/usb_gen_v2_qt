/****************************************************************************
** Meta object code from reading C++ file 'usb_gen_v2_qt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../usb_gen_v2_qt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usb_gen_v2_qt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_usb_gen_v2_qt_t {
    QByteArrayData data[10];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_usb_gen_v2_qt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_usb_gen_v2_qt_t qt_meta_stringdata_usb_gen_v2_qt = {
    {
QT_MOC_LITERAL(0, 0, 13), // "usb_gen_v2_qt"
QT_MOC_LITERAL(1, 14, 13), // "doubleSpinBox"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "doubleSpinBox_2"
QT_MOC_LITERAL(4, 45, 2), // "en"
QT_MOC_LITERAL(5, 48, 4), // "save"
QT_MOC_LITERAL(6, 53, 6), // "update"
QT_MOC_LITERAL(7, 60, 7), // "SetMode"
QT_MOC_LITERAL(8, 68, 8), // "SetParam"
QT_MOC_LITERAL(9, 77, 15) // "firmware_update"

    },
    "usb_gen_v2_qt\0doubleSpinBox\0\0"
    "doubleSpinBox_2\0en\0save\0update\0SetMode\0"
    "SetParam\0firmware_update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_usb_gen_v2_qt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       3,    1,   57,    2, 0x08 /* Private */,
       4,    0,   60,    2, 0x08 /* Private */,
       5,    0,   61,    2, 0x08 /* Private */,
       6,    0,   62,    2, 0x08 /* Private */,
       7,    0,   63,    2, 0x08 /* Private */,
       8,    0,   64,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void usb_gen_v2_qt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        usb_gen_v2_qt *_t = static_cast<usb_gen_v2_qt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleSpinBox((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->doubleSpinBox_2((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->en(); break;
        case 3: _t->save(); break;
        case 4: _t->update(); break;
        case 5: _t->SetMode(); break;
        case 6: _t->SetParam(); break;
        case 7: _t->firmware_update(); break;
        default: ;
        }
    }
}

const QMetaObject usb_gen_v2_qt::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_usb_gen_v2_qt.data,
      qt_meta_data_usb_gen_v2_qt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *usb_gen_v2_qt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *usb_gen_v2_qt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_usb_gen_v2_qt.stringdata0))
        return static_cast<void*>(const_cast< usb_gen_v2_qt*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int usb_gen_v2_qt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
