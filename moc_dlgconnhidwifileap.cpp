/****************************************************************************
** Meta object code from reading C++ file 'dlgconnhidwifileap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dlgconnhidwifileap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgconnhidwifileap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DlgConnHidWifiLeap_t {
    QByteArrayData data[10];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DlgConnHidWifiLeap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DlgConnHidWifiLeap_t qt_meta_stringdata_DlgConnHidWifiLeap = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DlgConnHidWifiLeap"
QT_MOC_LITERAL(1, 19, 12), // "changeDialog"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(4, 54, 21), // "on_btnConnect_clicked"
QT_MOC_LITERAL(5, 76, 27), // "on_checkBoxPwd_stateChanged"
QT_MOC_LITERAL(6, 104, 4), // "arg1"
QT_MOC_LITERAL(7, 109, 23), // "on_leNetName_textEdited"
QT_MOC_LITERAL(8, 133, 24), // "on_leUserName_textEdited"
QT_MOC_LITERAL(9, 158, 24) // "on_lePassword_textEdited"

    },
    "DlgConnHidWifiLeap\0changeDialog\0\0"
    "on_btnCancel_clicked\0on_btnConnect_clicked\0"
    "on_checkBoxPwd_stateChanged\0arg1\0"
    "on_leNetName_textEdited\0"
    "on_leUserName_textEdited\0"
    "on_lePassword_textEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgConnHidWifiLeap[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void DlgConnHidWifiLeap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DlgConnHidWifiLeap *_t = static_cast<DlgConnHidWifiLeap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeDialog(); break;
        case 1: _t->on_btnCancel_clicked(); break;
        case 2: _t->on_btnConnect_clicked(); break;
        case 3: _t->on_checkBoxPwd_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_leNetName_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_leUserName_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_lePassword_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DlgConnHidWifiLeap::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DlgConnHidWifiLeap.data,
      qt_meta_data_DlgConnHidWifiLeap,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DlgConnHidWifiLeap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgConnHidWifiLeap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DlgConnHidWifiLeap.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DlgConnHidWifiLeap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
