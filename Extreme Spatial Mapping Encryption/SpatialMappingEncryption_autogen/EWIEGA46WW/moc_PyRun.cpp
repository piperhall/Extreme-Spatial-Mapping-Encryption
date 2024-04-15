/****************************************************************************
** Meta object code from reading C++ file 'PyRun.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SpatialMappingEncryption/PyRun.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PyRun.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPyRunENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPyRunENDCLASS = QtMocHelpers::stringData(
    "PyRun",
    "outputReceived",
    "",
    "output",
    "scriptFinished",
    "exitCode",
    "QProcess::ExitStatus",
    "exitStatus",
    "handleScriptOutput",
    "handleScriptFinished",
    "handleScriptError",
    "QProcess::ProcessError",
    "error"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPyRunENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[6];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[15];
    char stringdata5[9];
    char stringdata6[21];
    char stringdata7[11];
    char stringdata8[19];
    char stringdata9[21];
    char stringdata10[18];
    char stringdata11[23];
    char stringdata12[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPyRunENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPyRunENDCLASS_t qt_meta_stringdata_CLASSPyRunENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "PyRun"
        QT_MOC_LITERAL(6, 14),  // "outputReceived"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 6),  // "output"
        QT_MOC_LITERAL(29, 14),  // "scriptFinished"
        QT_MOC_LITERAL(44, 8),  // "exitCode"
        QT_MOC_LITERAL(53, 20),  // "QProcess::ExitStatus"
        QT_MOC_LITERAL(74, 10),  // "exitStatus"
        QT_MOC_LITERAL(85, 18),  // "handleScriptOutput"
        QT_MOC_LITERAL(104, 20),  // "handleScriptFinished"
        QT_MOC_LITERAL(125, 17),  // "handleScriptError"
        QT_MOC_LITERAL(143, 22),  // "QProcess::ProcessError"
        QT_MOC_LITERAL(166, 5)   // "error"
    },
    "PyRun",
    "outputReceived",
    "",
    "output",
    "scriptFinished",
    "exitCode",
    "QProcess::ExitStatus",
    "exitStatus",
    "handleScriptOutput",
    "handleScriptFinished",
    "handleScriptError",
    "QProcess::ProcessError",
    "error"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPyRunENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    2,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   52,    2, 0x08,    6 /* Private */,
       9,    2,   53,    2, 0x08,    7 /* Private */,
      10,    1,   58,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject PyRun::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPyRunENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPyRunENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPyRunENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PyRun, std::true_type>,
        // method 'outputReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'scriptFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>,
        // method 'handleScriptOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleScriptFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>,
        // method 'handleScriptError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ProcessError, std::false_type>
    >,
    nullptr
} };

void PyRun::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PyRun *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->outputReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->scriptFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 2: _t->handleScriptOutput(); break;
        case 3: _t->handleScriptFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 4: _t->handleScriptError((*reinterpret_cast< std::add_pointer_t<QProcess::ProcessError>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PyRun::*)(const QByteArray & );
            if (_t _q_method = &PyRun::outputReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PyRun::*)(int , QProcess::ExitStatus );
            if (_t _q_method = &PyRun::scriptFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *PyRun::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PyRun::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPyRunENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PyRun::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PyRun::outputReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PyRun::scriptFinished(int _t1, QProcess::ExitStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
