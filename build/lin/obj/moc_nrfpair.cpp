/****************************************************************************
** Meta object code from reading C++ file 'nrfpair.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/nrfpair.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nrfpair.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NrfPair_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NrfPair_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NrfPair_t qt_meta_stringdata_NrfPair = {
    {
QT_MOC_LITERAL(0, 0, 7), // "NrfPair"
QT_MOC_LITERAL(1, 8, 13), // "nrfPairingRes"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "NRF_PAIR_RES"
QT_MOC_LITERAL(4, 36, 3), // "res"
QT_MOC_LITERAL(5, 40, 9), // "timerSlot"
QT_MOC_LITERAL(6, 50, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(7, 73, 21) // "on_helpButton_clicked"

    },
    "NrfPair\0nrfPairingRes\0\0NRF_PAIR_RES\0"
    "res\0timerSlot\0on_startButton_clicked\0"
    "on_helpButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NrfPair[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NrfPair::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NrfPair *_t = static_cast<NrfPair *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nrfPairingRes((*reinterpret_cast< NRF_PAIR_RES(*)>(_a[1]))); break;
        case 1: _t->timerSlot(); break;
        case 2: _t->on_startButton_clicked(); break;
        case 3: _t->on_helpButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject NrfPair::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NrfPair.data,
      qt_meta_data_NrfPair,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NrfPair::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NrfPair::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NrfPair.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NrfPair::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
