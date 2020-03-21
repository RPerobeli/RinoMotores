/****************************************************************************
** Meta object code from reading C++ file 'motoreswindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../RinoMotoresV3/motoreswindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'motoreswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MotoresWindow_t {
    QByteArrayData data[11];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MotoresWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MotoresWindow_t qt_meta_stringdata_MotoresWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MotoresWindow"
QT_MOC_LITERAL(1, 14, 21), // "on_Btn_Fechar_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "on_Btn_Adicionar_clicked"
QT_MOC_LITERAL(4, 62, 24), // "on_Btn_Consultar_clicked"
QT_MOC_LITERAL(5, 87, 22), // "on_Btn_Excluir_clicked"
QT_MOC_LITERAL(6, 110, 24), // "on_Btn_Atualizar_clicked"
QT_MOC_LITERAL(7, 135, 22), // "on_Btn_Alterar_clicked"
QT_MOC_LITERAL(8, 158, 26), // "on_tableWidget_cellClicked"
QT_MOC_LITERAL(9, 185, 3), // "row"
QT_MOC_LITERAL(10, 189, 6) // "column"

    },
    "MotoresWindow\0on_Btn_Fechar_clicked\0"
    "\0on_Btn_Adicionar_clicked\0"
    "on_Btn_Consultar_clicked\0"
    "on_Btn_Excluir_clicked\0on_Btn_Atualizar_clicked\0"
    "on_Btn_Alterar_clicked\0"
    "on_tableWidget_cellClicked\0row\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MotoresWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    2,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

       0        // eod
};

void MotoresWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotoresWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Btn_Fechar_clicked(); break;
        case 1: _t->on_Btn_Adicionar_clicked(); break;
        case 2: _t->on_Btn_Consultar_clicked(); break;
        case 3: _t->on_Btn_Excluir_clicked(); break;
        case 4: _t->on_Btn_Atualizar_clicked(); break;
        case 5: _t->on_Btn_Alterar_clicked(); break;
        case 6: _t->on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MotoresWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MotoresWindow.data,
    qt_meta_data_MotoresWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MotoresWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MotoresWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MotoresWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MotoresWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
