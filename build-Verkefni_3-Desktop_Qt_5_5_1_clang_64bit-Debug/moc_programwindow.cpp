/****************************************************************************
** Meta object code from reading C++ file 'programwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Verkefni_3/programwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProgramWindow_t {
    QByteArrayData data[11];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProgramWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProgramWindow_t qt_meta_stringdata_ProgramWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProgramWindow"
QT_MOC_LITERAL(1, 14, 37), // "on_input_filter_scientist_tex..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 36), // "on_input_filter_computer_text..."
QT_MOC_LITERAL(4, 90, 30), // "on_add_computer_button_clicked"
QT_MOC_LITERAL(5, 121, 31), // "on_add_scientist_button_clicked"
QT_MOC_LITERAL(6, 153, 34), // "on_button_remove_scientist_cl..."
QT_MOC_LITERAL(7, 188, 33), // "on_button_remove_computer_cli..."
QT_MOC_LITERAL(8, 222, 26), // "on_button_add_link_clicked"
QT_MOC_LITERAL(9, 249, 32), // "on_edit_scientist_button_clicked"
QT_MOC_LITERAL(10, 282, 31) // "on_edit_computer_button_clicked"

    },
    "ProgramWindow\0on_input_filter_scientist_textChanged\0"
    "\0on_input_filter_computer_textChanged\0"
    "on_add_computer_button_clicked\0"
    "on_add_scientist_button_clicked\0"
    "on_button_remove_scientist_clicked\0"
    "on_button_remove_computer_clicked\0"
    "on_button_add_link_clicked\0"
    "on_edit_scientist_button_clicked\0"
    "on_edit_computer_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProgramWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProgramWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProgramWindow *_t = static_cast<ProgramWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_input_filter_scientist_textChanged(); break;
        case 1: _t->on_input_filter_computer_textChanged(); break;
        case 2: _t->on_add_computer_button_clicked(); break;
        case 3: _t->on_add_scientist_button_clicked(); break;
        case 4: _t->on_button_remove_scientist_clicked(); break;
        case 5: _t->on_button_remove_computer_clicked(); break;
        case 6: _t->on_button_add_link_clicked(); break;
        case 7: _t->on_edit_scientist_button_clicked(); break;
        case 8: _t->on_edit_computer_button_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ProgramWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProgramWindow.data,
      qt_meta_data_ProgramWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProgramWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgramWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProgramWindow.stringdata0))
        return static_cast<void*>(const_cast< ProgramWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int ProgramWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
