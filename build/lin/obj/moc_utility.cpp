/****************************************************************************
** Meta object code from reading C++ file 'utility.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../utility.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'utility.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Utility_t {
    QByteArrayData data[12];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Utility_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Utility_t qt_meta_stringdata_Utility = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Utility"
QT_MOC_LITERAL(1, 8, 12), // "checkVersion"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "VescInterface*"
QT_MOC_LITERAL(4, 37, 4), // "vesc"
QT_MOC_LITERAL(5, 42, 11), // "fwChangeLog"
QT_MOC_LITERAL(6, 54, 17), // "vescToolChangeLog"
QT_MOC_LITERAL(7, 72, 9), // "aboutText"
QT_MOC_LITERAL(8, 82, 8), // "uuid2Str"
QT_MOC_LITERAL(9, 91, 4), // "uuid"
QT_MOC_LITERAL(10, 96, 5), // "space"
QT_MOC_LITERAL(11, 102, 21) // "requestFilePermission"

    },
    "Utility\0checkVersion\0\0VescInterface*\0"
    "vesc\0fwChangeLog\0vescToolChangeLog\0"
    "aboutText\0uuid2Str\0uuid\0space\0"
    "requestFilePermission"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Utility[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x02 /* Public */,
       1,    0,   52,    2, 0x22 /* Public | MethodCloned */,
       5,    0,   53,    2, 0x02 /* Public */,
       6,    0,   54,    2, 0x02 /* Public */,
       7,    0,   55,    2, 0x02 /* Public */,
       8,    2,   56,    2, 0x02 /* Public */,
      11,    0,   61,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QByteArray, QMetaType::Bool,    9,   10,
    QMetaType::Bool,

       0        // eod
};

void Utility::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Utility *_t = static_cast<Utility *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkVersion((*reinterpret_cast< VescInterface*(*)>(_a[1]))); break;
        case 1: _t->checkVersion(); break;
        case 2: { QString _r = _t->fwChangeLog();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->vescToolChangeLog();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->aboutText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->uuid2Str((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->requestFilePermission();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VescInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Utility::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Utility.data,
      qt_meta_data_Utility,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Utility::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utility::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Utility.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Utility::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
