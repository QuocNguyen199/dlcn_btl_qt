/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LM35/inc/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "saveFile_Sen1",
    "",
    "saveFile_Sen2",
    "show_notice",
    "mess",
    "Qt::GlobalColor",
    "textColor",
    "received_data_from_STM32",
    "on_btn_Connect_clicked",
    "on_btn_Close_clicked",
    "init_window",
    "on_btn_ReadTemp1_clicked",
    "on_btn_ClearData_clicked",
    "on_btn_ClearNoti_clicked",
    "on_btn_ReadTemp2_clicked",
    "on_btn_Refresh_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[12];
    char stringdata5[5];
    char stringdata6[16];
    char stringdata7[10];
    char stringdata8[25];
    char stringdata9[23];
    char stringdata10[21];
    char stringdata11[12];
    char stringdata12[25];
    char stringdata13[25];
    char stringdata14[25];
    char stringdata15[25];
    char stringdata16[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 13),  // "saveFile_Sen1"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 13),  // "saveFile_Sen2"
        QT_MOC_LITERAL(40, 11),  // "show_notice"
        QT_MOC_LITERAL(52, 4),  // "mess"
        QT_MOC_LITERAL(57, 15),  // "Qt::GlobalColor"
        QT_MOC_LITERAL(73, 9),  // "textColor"
        QT_MOC_LITERAL(83, 24),  // "received_data_from_STM32"
        QT_MOC_LITERAL(108, 22),  // "on_btn_Connect_clicked"
        QT_MOC_LITERAL(131, 20),  // "on_btn_Close_clicked"
        QT_MOC_LITERAL(152, 11),  // "init_window"
        QT_MOC_LITERAL(164, 24),  // "on_btn_ReadTemp1_clicked"
        QT_MOC_LITERAL(189, 24),  // "on_btn_ClearData_clicked"
        QT_MOC_LITERAL(214, 24),  // "on_btn_ClearNoti_clicked"
        QT_MOC_LITERAL(239, 24),  // "on_btn_ReadTemp2_clicked"
        QT_MOC_LITERAL(264, 22)   // "on_btn_Refresh_clicked"
    },
    "MainWindow",
    "saveFile_Sen1",
    "",
    "saveFile_Sen2",
    "show_notice",
    "mess",
    "Qt::GlobalColor",
    "textColor",
    "received_data_from_STM32",
    "on_btn_Connect_clicked",
    "on_btn_Close_clicked",
    "init_window",
    "on_btn_ReadTemp1_clicked",
    "on_btn_ClearData_clicked",
    "on_btn_ClearNoti_clicked",
    "on_btn_ReadTemp2_clicked",
    "on_btn_Refresh_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    2,   88,    2, 0x08,    3 /* Private */,
       8,    0,   93,    2, 0x08,    6 /* Private */,
       9,    0,   94,    2, 0x08,    7 /* Private */,
      10,    0,   95,    2, 0x08,    8 /* Private */,
      11,    0,   96,    2, 0x08,    9 /* Private */,
      12,    0,   97,    2, 0x08,   10 /* Private */,
      13,    0,   98,    2, 0x08,   11 /* Private */,
      14,    0,   99,    2, 0x08,   12 /* Private */,
      15,    0,  100,    2, 0x08,   13 /* Private */,
      16,    0,  101,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
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

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'saveFile_Sen1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveFile_Sen2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_notice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Qt::GlobalColor, std::false_type>,
        // method 'received_data_from_STM32'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_Connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_Close_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init_window'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_ReadTemp1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_ClearData_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_ClearNoti_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_ReadTemp2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_Refresh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->saveFile_Sen1(); break;
        case 1: _t->saveFile_Sen2(); break;
        case 2: _t->show_notice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::GlobalColor>>(_a[2]))); break;
        case 3: _t->received_data_from_STM32(); break;
        case 4: _t->on_btn_Connect_clicked(); break;
        case 5: _t->on_btn_Close_clicked(); break;
        case 6: _t->init_window(); break;
        case 7: _t->on_btn_ReadTemp1_clicked(); break;
        case 8: _t->on_btn_ClearData_clicked(); break;
        case 9: _t->on_btn_ClearNoti_clicked(); break;
        case 10: _t->on_btn_ReadTemp2_clicked(); break;
        case 11: _t->on_btn_Refresh_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
