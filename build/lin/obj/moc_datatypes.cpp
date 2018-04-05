/****************************************************************************
** Meta object code from reading C++ file 'datatypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../datatypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datatypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MC_VALUES_t {
    QByteArrayData data[20];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MC_VALUES_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MC_VALUES_t qt_meta_stringdata_MC_VALUES = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MC_VALUES"
QT_MOC_LITERAL(1, 10, 4), // "v_in"
QT_MOC_LITERAL(2, 15, 8), // "temp_mos"
QT_MOC_LITERAL(3, 24, 10), // "temp_motor"
QT_MOC_LITERAL(4, 35, 13), // "current_motor"
QT_MOC_LITERAL(5, 49, 10), // "current_in"
QT_MOC_LITERAL(6, 60, 2), // "id"
QT_MOC_LITERAL(7, 63, 2), // "iq"
QT_MOC_LITERAL(8, 66, 3), // "rpm"
QT_MOC_LITERAL(9, 70, 8), // "duty_now"
QT_MOC_LITERAL(10, 79, 9), // "amp_hours"
QT_MOC_LITERAL(11, 89, 17), // "amp_hours_charged"
QT_MOC_LITERAL(12, 107, 10), // "watt_hours"
QT_MOC_LITERAL(13, 118, 18), // "watt_hours_charged"
QT_MOC_LITERAL(14, 137, 10), // "tachometer"
QT_MOC_LITERAL(15, 148, 14), // "tachometer_abs"
QT_MOC_LITERAL(16, 163, 8), // "position"
QT_MOC_LITERAL(17, 172, 10), // "fault_code"
QT_MOC_LITERAL(18, 183, 13), // "mc_fault_code"
QT_MOC_LITERAL(19, 197, 9) // "fault_str"

    },
    "MC_VALUES\0v_in\0temp_mos\0temp_motor\0"
    "current_motor\0current_in\0id\0iq\0rpm\0"
    "duty_now\0amp_hours\0amp_hours_charged\0"
    "watt_hours\0watt_hours_charged\0tachometer\0"
    "tachometer_abs\0position\0fault_code\0"
    "mc_fault_code\0fault_str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MC_VALUES[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      18,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00095003,
       2, QMetaType::Double, 0x00095003,
       3, QMetaType::Double, 0x00095003,
       4, QMetaType::Double, 0x00095003,
       5, QMetaType::Double, 0x00095003,
       6, QMetaType::Double, 0x00095003,
       7, QMetaType::Double, 0x00095003,
       8, QMetaType::Double, 0x00095003,
       9, QMetaType::Double, 0x00095003,
      10, QMetaType::Double, 0x00095003,
      11, QMetaType::Double, 0x00095003,
      12, QMetaType::Double, 0x00095003,
      13, QMetaType::Double, 0x00095003,
      14, QMetaType::Int, 0x00095003,
      15, QMetaType::Int, 0x00095003,
      16, QMetaType::Double, 0x00095003,
      17, 0x80000000 | 18, 0x0009500b,
      19, QMetaType::QString, 0x00095003,

       0        // eod
};

void MC_VALUES::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        MC_VALUES *_t = reinterpret_cast<MC_VALUES *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->v_in; break;
        case 1: *reinterpret_cast< double*>(_v) = _t->temp_mos; break;
        case 2: *reinterpret_cast< double*>(_v) = _t->temp_motor; break;
        case 3: *reinterpret_cast< double*>(_v) = _t->current_motor; break;
        case 4: *reinterpret_cast< double*>(_v) = _t->current_in; break;
        case 5: *reinterpret_cast< double*>(_v) = _t->id; break;
        case 6: *reinterpret_cast< double*>(_v) = _t->iq; break;
        case 7: *reinterpret_cast< double*>(_v) = _t->rpm; break;
        case 8: *reinterpret_cast< double*>(_v) = _t->duty_now; break;
        case 9: *reinterpret_cast< double*>(_v) = _t->amp_hours; break;
        case 10: *reinterpret_cast< double*>(_v) = _t->amp_hours_charged; break;
        case 11: *reinterpret_cast< double*>(_v) = _t->watt_hours; break;
        case 12: *reinterpret_cast< double*>(_v) = _t->watt_hours_charged; break;
        case 13: *reinterpret_cast< int*>(_v) = _t->tachometer; break;
        case 14: *reinterpret_cast< int*>(_v) = _t->tachometer_abs; break;
        case 15: *reinterpret_cast< double*>(_v) = _t->position; break;
        case 16: *reinterpret_cast< mc_fault_code*>(_v) = _t->fault_code; break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->fault_str; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MC_VALUES *_t = reinterpret_cast<MC_VALUES *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->v_in != *reinterpret_cast< double*>(_v)) {
                _t->v_in = *reinterpret_cast< double*>(_v);
            }
            break;
        case 1:
            if (_t->temp_mos != *reinterpret_cast< double*>(_v)) {
                _t->temp_mos = *reinterpret_cast< double*>(_v);
            }
            break;
        case 2:
            if (_t->temp_motor != *reinterpret_cast< double*>(_v)) {
                _t->temp_motor = *reinterpret_cast< double*>(_v);
            }
            break;
        case 3:
            if (_t->current_motor != *reinterpret_cast< double*>(_v)) {
                _t->current_motor = *reinterpret_cast< double*>(_v);
            }
            break;
        case 4:
            if (_t->current_in != *reinterpret_cast< double*>(_v)) {
                _t->current_in = *reinterpret_cast< double*>(_v);
            }
            break;
        case 5:
            if (_t->id != *reinterpret_cast< double*>(_v)) {
                _t->id = *reinterpret_cast< double*>(_v);
            }
            break;
        case 6:
            if (_t->iq != *reinterpret_cast< double*>(_v)) {
                _t->iq = *reinterpret_cast< double*>(_v);
            }
            break;
        case 7:
            if (_t->rpm != *reinterpret_cast< double*>(_v)) {
                _t->rpm = *reinterpret_cast< double*>(_v);
            }
            break;
        case 8:
            if (_t->duty_now != *reinterpret_cast< double*>(_v)) {
                _t->duty_now = *reinterpret_cast< double*>(_v);
            }
            break;
        case 9:
            if (_t->amp_hours != *reinterpret_cast< double*>(_v)) {
                _t->amp_hours = *reinterpret_cast< double*>(_v);
            }
            break;
        case 10:
            if (_t->amp_hours_charged != *reinterpret_cast< double*>(_v)) {
                _t->amp_hours_charged = *reinterpret_cast< double*>(_v);
            }
            break;
        case 11:
            if (_t->watt_hours != *reinterpret_cast< double*>(_v)) {
                _t->watt_hours = *reinterpret_cast< double*>(_v);
            }
            break;
        case 12:
            if (_t->watt_hours_charged != *reinterpret_cast< double*>(_v)) {
                _t->watt_hours_charged = *reinterpret_cast< double*>(_v);
            }
            break;
        case 13:
            if (_t->tachometer != *reinterpret_cast< int*>(_v)) {
                _t->tachometer = *reinterpret_cast< int*>(_v);
            }
            break;
        case 14:
            if (_t->tachometer_abs != *reinterpret_cast< int*>(_v)) {
                _t->tachometer_abs = *reinterpret_cast< int*>(_v);
            }
            break;
        case 15:
            if (_t->position != *reinterpret_cast< double*>(_v)) {
                _t->position = *reinterpret_cast< double*>(_v);
            }
            break;
        case 16:
            if (_t->fault_code != *reinterpret_cast< mc_fault_code*>(_v)) {
                _t->fault_code = *reinterpret_cast< mc_fault_code*>(_v);
            }
            break;
        case 17:
            if (_t->fault_str != *reinterpret_cast< QString*>(_v)) {
                _t->fault_str = *reinterpret_cast< QString*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MC_VALUES::staticMetaObject = {
    { nullptr, qt_meta_stringdata_MC_VALUES.data,
      qt_meta_data_MC_VALUES,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
