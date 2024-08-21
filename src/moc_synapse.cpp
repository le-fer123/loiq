/****************************************************************************
** Meta object code from reading C++ file 'synapse.h'
**
** Created: Sat Dec 11 02:37:04 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "synapse.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'synapse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_synapse[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      12,    9,    8,    8, 0x05,
      44,   39,    8,    8, 0x05,
      81,   73,    8,    8, 0x05,
     117,  113,    8,    8, 0x05,
     154,  149,    8,    8, 0x05,
     192,  183,    8,    8, 0x05,
     223,    8,    8,    8, 0x05,
     252,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     268,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_synapse[] = {
    "synapse\0\0ip\0synapse_adjust_ip(QString)\0"
    "host\0synapse_adjust_host(QString)\0"
    "subsite\0synapse_adjust_subsite(QString)\0"
    "msg\0synapse_adjust_message(QString)\0"
    "port\0synapse_adjust_port(quint32)\0"
    "protocol\0synapse_adjust_method(QString)\0"
    "synapse_adjusting_complete()\0"
    "synapse_abort()\0receiving_transmission()\0"
};

const QMetaObject synapse::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_synapse,
      qt_meta_data_synapse, 0 }
};

const QMetaObject *synapse::metaObject() const
{
    return &staticMetaObject;
}

void *synapse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_synapse))
        return static_cast<void*>(const_cast< synapse*>(this));
    return QThread::qt_metacast(_clname);
}

int synapse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: synapse_adjust_ip((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: synapse_adjust_host((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: synapse_adjust_subsite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: synapse_adjust_message((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: synapse_adjust_port((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: synapse_adjust_method((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: synapse_adjusting_complete(); break;
        case 7: synapse_abort(); break;
        case 8: receiving_transmission(); break;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void synapse::synapse_adjust_ip(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void synapse::synapse_adjust_host(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void synapse::synapse_adjust_subsite(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void synapse::synapse_adjust_message(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void synapse::synapse_adjust_port(quint32 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void synapse::synapse_adjust_method(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void synapse::synapse_adjusting_complete()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void synapse::synapse_abort()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
