/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created: Sat Jun 18 21:39:07 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "main_window.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_main_window[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      36,   30,   12,   12, 0x08,
      54,   12,   12,   12, 0x08,
      73,   12,   12,   12, 0x08,
      93,   12,   12,   12, 0x08,
     115,  112,   12,   12, 0x08,
     144,  139,   12,   12, 0x08,
     175,  170,   12,   12, 0x08,
     209,  201,   12,   12, 0x08,
     247,  238,   12,   12, 0x08,
     283,  275,   12,   12, 0x08,
     312,   12,   12,   12, 0x08,
     327,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_main_window[] = {
    "main_window\0\0start_flooding()\0value\0"
    "change_speed(int)\0set_target_by_IP()\0"
    "set_target_by_URL()\0activate_synapse()\0"
    "ip\0synapse_set_ip(QString)\0host\0"
    "synapse_set_host(QString)\0port\0"
    "synapse_set_port(quint32)\0message\0"
    "synapse_set_message(QString)\0protocol\0"
    "synapse_set_method(QString)\0subsite\0"
    "synapse_set_subsite(QString)\0"
    "synapse_obey()\0synapse_abort()\0"
};

const QMetaObject main_window::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_main_window,
      qt_meta_data_main_window, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &main_window::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *main_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *main_window::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_main_window))
        return static_cast<void*>(const_cast< main_window*>(this));
    if (!strcmp(_clname, "Ui_LOIQ"))
        return static_cast< Ui_LOIQ*>(const_cast< main_window*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int main_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: start_flooding(); break;
        case 1: change_speed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: set_target_by_IP(); break;
        case 3: set_target_by_URL(); break;
        case 4: activate_synapse(); break;
        case 5: synapse_set_ip((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: synapse_set_host((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: synapse_set_port((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: synapse_set_message((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: synapse_set_method((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: synapse_set_subsite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: synapse_obey(); break;
        case 12: synapse_abort(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
