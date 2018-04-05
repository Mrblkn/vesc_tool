/****************************************************************************
** Meta object code from reading C++ file 'vescinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../vescinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vescinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VescInterface_t {
    QByteArrayData data[70];
    char stringdata0[908];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VescInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VescInterface_t qt_meta_stringdata_VescInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VescInterface"
QT_MOC_LITERAL(1, 14, 13), // "statusMessage"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "msg"
QT_MOC_LITERAL(4, 33, 6), // "isGood"
QT_MOC_LITERAL(5, 40, 13), // "messageDialog"
QT_MOC_LITERAL(6, 54, 5), // "title"
QT_MOC_LITERAL(7, 60, 8), // "richText"
QT_MOC_LITERAL(8, 69, 14), // "fwUploadStatus"
QT_MOC_LITERAL(9, 84, 6), // "status"
QT_MOC_LITERAL(10, 91, 8), // "progress"
QT_MOC_LITERAL(11, 100, 9), // "isOngoing"
QT_MOC_LITERAL(12, 110, 21), // "serialPortNotWritable"
QT_MOC_LITERAL(13, 132, 4), // "port"
QT_MOC_LITERAL(14, 137, 11), // "fwRxChanged"
QT_MOC_LITERAL(15, 149, 2), // "rx"
QT_MOC_LITERAL(16, 152, 7), // "limited"
QT_MOC_LITERAL(17, 160, 20), // "portConnectedChanged"
QT_MOC_LITERAL(18, 181, 26), // "autoConnectProgressUpdated"
QT_MOC_LITERAL(19, 208, 19), // "autoConnectFinished"
QT_MOC_LITERAL(20, 228, 19), // "serialDataAvailable"
QT_MOC_LITERAL(21, 248, 15), // "serialPortError"
QT_MOC_LITERAL(22, 264, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(23, 293, 5), // "error"
QT_MOC_LITERAL(24, 299, 17), // "tcpInputConnected"
QT_MOC_LITERAL(25, 317, 20), // "tcpInputDisconnected"
QT_MOC_LITERAL(26, 338, 21), // "tcpInputDataAvailable"
QT_MOC_LITERAL(27, 360, 13), // "tcpInputError"
QT_MOC_LITERAL(28, 374, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(29, 403, 11), // "socketError"
QT_MOC_LITERAL(30, 415, 9), // "bleDataRx"
QT_MOC_LITERAL(31, 425, 4), // "data"
QT_MOC_LITERAL(32, 430, 9), // "timerSlot"
QT_MOC_LITERAL(33, 440, 16), // "packetDataToSend"
QT_MOC_LITERAL(34, 457, 11), // "QByteArray&"
QT_MOC_LITERAL(35, 469, 14), // "packetReceived"
QT_MOC_LITERAL(36, 484, 13), // "cmdDataToSend"
QT_MOC_LITERAL(37, 498, 17), // "fwVersionReceived"
QT_MOC_LITERAL(38, 516, 5), // "major"
QT_MOC_LITERAL(39, 522, 5), // "minor"
QT_MOC_LITERAL(40, 528, 2), // "hw"
QT_MOC_LITERAL(41, 531, 4), // "uuid"
QT_MOC_LITERAL(42, 536, 14), // "appconfUpdated"
QT_MOC_LITERAL(43, 551, 13), // "mcconfUpdated"
QT_MOC_LITERAL(44, 565, 11), // "ackReceived"
QT_MOC_LITERAL(45, 577, 7), // "ackType"
QT_MOC_LITERAL(46, 585, 8), // "commands"
QT_MOC_LITERAL(47, 594, 9), // "Commands*"
QT_MOC_LITERAL(48, 604, 8), // "mcConfig"
QT_MOC_LITERAL(49, 613, 13), // "ConfigParams*"
QT_MOC_LITERAL(50, 627, 9), // "appConfig"
QT_MOC_LITERAL(51, 637, 10), // "infoConfig"
QT_MOC_LITERAL(52, 648, 21), // "getSupportedFirmwares"
QT_MOC_LITERAL(53, 670, 14), // "getFirmwareNow"
QT_MOC_LITERAL(54, 685, 17), // "emitStatusMessage"
QT_MOC_LITERAL(55, 703, 17), // "emitMessageDialog"
QT_MOC_LITERAL(56, 721, 4), // "fwRx"
QT_MOC_LITERAL(57, 726, 9), // "bleDevice"
QT_MOC_LITERAL(58, 736, 8), // "BleUart*"
QT_MOC_LITERAL(59, 745, 15), // "isPortConnected"
QT_MOC_LITERAL(60, 761, 14), // "disconnectPort"
QT_MOC_LITERAL(61, 776, 17), // "reconnectLastPort"
QT_MOC_LITERAL(62, 794, 11), // "autoconnect"
QT_MOC_LITERAL(63, 806, 20), // "getConnectedPortName"
QT_MOC_LITERAL(64, 827, 10), // "connectTcp"
QT_MOC_LITERAL(65, 838, 6), // "server"
QT_MOC_LITERAL(66, 845, 10), // "connectBle"
QT_MOC_LITERAL(67, 856, 7), // "address"
QT_MOC_LITERAL(68, 864, 20), // "isAutoconnectOngoing"
QT_MOC_LITERAL(69, 885, 22) // "getAutoconnectProgress"

    },
    "VescInterface\0statusMessage\0\0msg\0"
    "isGood\0messageDialog\0title\0richText\0"
    "fwUploadStatus\0status\0progress\0isOngoing\0"
    "serialPortNotWritable\0port\0fwRxChanged\0"
    "rx\0limited\0portConnectedChanged\0"
    "autoConnectProgressUpdated\0"
    "autoConnectFinished\0serialDataAvailable\0"
    "serialPortError\0QSerialPort::SerialPortError\0"
    "error\0tcpInputConnected\0tcpInputDisconnected\0"
    "tcpInputDataAvailable\0tcpInputError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "bleDataRx\0data\0timerSlot\0packetDataToSend\0"
    "QByteArray&\0packetReceived\0cmdDataToSend\0"
    "fwVersionReceived\0major\0minor\0hw\0uuid\0"
    "appconfUpdated\0mcconfUpdated\0ackReceived\0"
    "ackType\0commands\0Commands*\0mcConfig\0"
    "ConfigParams*\0appConfig\0infoConfig\0"
    "getSupportedFirmwares\0getFirmwareNow\0"
    "emitStatusMessage\0emitMessageDialog\0"
    "fwRx\0bleDevice\0BleUart*\0isPortConnected\0"
    "disconnectPort\0reconnectLastPort\0"
    "autoconnect\0getConnectedPortName\0"
    "connectTcp\0server\0connectBle\0address\0"
    "isAutoconnectOngoing\0getAutoconnectProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VescInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  229,    2, 0x06 /* Public */,
       5,    4,  234,    2, 0x06 /* Public */,
       8,    3,  243,    2, 0x06 /* Public */,
      12,    1,  250,    2, 0x06 /* Public */,
      14,    2,  253,    2, 0x06 /* Public */,
      17,    0,  258,    2, 0x06 /* Public */,
      18,    2,  259,    2, 0x06 /* Public */,
      19,    0,  264,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,  265,    2, 0x08 /* Private */,
      21,    1,  266,    2, 0x08 /* Private */,
      24,    0,  269,    2, 0x08 /* Private */,
      25,    0,  270,    2, 0x08 /* Private */,
      26,    0,  271,    2, 0x08 /* Private */,
      27,    1,  272,    2, 0x08 /* Private */,
      30,    1,  275,    2, 0x08 /* Private */,
      32,    0,  278,    2, 0x08 /* Private */,
      33,    1,  279,    2, 0x08 /* Private */,
      35,    1,  282,    2, 0x08 /* Private */,
      36,    1,  285,    2, 0x08 /* Private */,
      37,    4,  288,    2, 0x08 /* Private */,
      42,    0,  297,    2, 0x08 /* Private */,
      43,    0,  298,    2, 0x08 /* Private */,
      44,    1,  299,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      46,    0,  302,    2, 0x02 /* Public */,
      48,    0,  303,    2, 0x02 /* Public */,
      50,    0,  304,    2, 0x02 /* Public */,
      51,    0,  305,    2, 0x02 /* Public */,
      52,    0,  306,    2, 0x02 /* Public */,
      53,    0,  307,    2, 0x02 /* Public */,
      54,    2,  308,    2, 0x02 /* Public */,
      55,    4,  313,    2, 0x02 /* Public */,
      55,    3,  322,    2, 0x22 /* Public | MethodCloned */,
      56,    0,  329,    2, 0x02 /* Public */,
      57,    0,  330,    2, 0x02 /* Public */,
      59,    0,  331,    2, 0x02 /* Public */,
      60,    0,  332,    2, 0x02 /* Public */,
      61,    0,  333,    2, 0x02 /* Public */,
      62,    0,  334,    2, 0x02 /* Public */,
      63,    0,  335,    2, 0x02 /* Public */,
      64,    2,  336,    2, 0x02 /* Public */,
      66,    1,  341,    2, 0x02 /* Public */,
      68,    0,  344,    2, 0x02 /* Public */,
      69,    0,  345,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    6,    3,    4,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Bool,    9,   10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   10,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::QByteArray,   31,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   31,
    QMetaType::Void, 0x80000000 | 34,   31,
    QMetaType::Void, 0x80000000 | 34,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QByteArray,   38,   39,   40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   45,

 // methods: parameters
    0x80000000 | 47,
    0x80000000 | 49,
    0x80000000 | 49,
    0x80000000 | 49,
    QMetaType::QStringList,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    6,    3,    4,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    6,    3,    4,
    QMetaType::Bool,
    0x80000000 | 58,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   65,   13,
    QMetaType::Void, QMetaType::QString,   67,
    QMetaType::Bool,
    QMetaType::Double,

       0        // eod
};

void VescInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VescInterface *_t = static_cast<VescInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->messageDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->fwUploadStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->serialPortNotWritable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->fwRxChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->portConnectedChanged(); break;
        case 6: _t->autoConnectProgressUpdated((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->autoConnectFinished(); break;
        case 8: _t->serialDataAvailable(); break;
        case 9: _t->serialPortError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 10: _t->tcpInputConnected(); break;
        case 11: _t->tcpInputDisconnected(); break;
        case 12: _t->tcpInputDataAvailable(); break;
        case 13: _t->tcpInputError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 14: _t->bleDataRx((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 15: _t->timerSlot(); break;
        case 16: _t->packetDataToSend((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 17: _t->packetReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 18: _t->cmdDataToSend((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 19: _t->fwVersionReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 20: _t->appconfUpdated(); break;
        case 21: _t->mcconfUpdated(); break;
        case 22: _t->ackReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: { Commands* _r = _t->commands();
            if (_a[0]) *reinterpret_cast< Commands**>(_a[0]) = std::move(_r); }  break;
        case 24: { ConfigParams* _r = _t->mcConfig();
            if (_a[0]) *reinterpret_cast< ConfigParams**>(_a[0]) = std::move(_r); }  break;
        case 25: { ConfigParams* _r = _t->appConfig();
            if (_a[0]) *reinterpret_cast< ConfigParams**>(_a[0]) = std::move(_r); }  break;
        case 26: { ConfigParams* _r = _t->infoConfig();
            if (_a[0]) *reinterpret_cast< ConfigParams**>(_a[0]) = std::move(_r); }  break;
        case 27: { QStringList _r = _t->getSupportedFirmwares();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 28: { QString _r = _t->getFirmwareNow();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->emitStatusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->emitMessageDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 31: _t->emitMessageDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 32: { bool _r = _t->fwRx();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { BleUart* _r = _t->bleDevice();
            if (_a[0]) *reinterpret_cast< BleUart**>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->isPortConnected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->disconnectPort(); break;
        case 36: { bool _r = _t->reconnectLastPort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->autoconnect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { QString _r = _t->getConnectedPortName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 39: _t->connectTcp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 40: _t->connectBle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: { bool _r = _t->isAutoconnectOngoing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { double _r = _t->getAutoconnectProgress();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (VescInterface::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VescInterface::statusMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VescInterface::*_t)(const QString & , const QString & , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VescInterface::messageDialog)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VescInterface::*_t)(const QString & , double , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VescInterface::fwUploadStatus)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (VescInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VescInterface::serialPortNotWritable)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (VescInterface::*_t)(bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VescInterface::fwRxChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (VescInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VescInterface::portConnectedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (VescInterface::*_t)(double , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VescInterface::autoConnectProgressUpdated)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (VescInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VescInterface::autoConnectFinished)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject VescInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VescInterface.data,
      qt_meta_data_VescInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VescInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VescInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VescInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VescInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void VescInterface::statusMessage(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VescInterface::messageDialog(const QString & _t1, const QString & _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VescInterface::fwUploadStatus(const QString & _t1, double _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VescInterface::serialPortNotWritable(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VescInterface::fwRxChanged(bool _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VescInterface::portConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void VescInterface::autoConnectProgressUpdated(double _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void VescInterface::autoConnectFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
