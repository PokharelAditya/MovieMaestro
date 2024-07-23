/****************************************************************************
** Meta object code from reading C++ file 'usersetting.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../usersetting.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usersetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
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
struct qt_meta_stringdata_CLASSUserSettingENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSUserSettingENDCLASS = QtMocHelpers::stringData(
    "UserSetting",
    "on_changepwbtn_clicked",
    "",
    "on_updategenrebtn_clicked",
    "on_updateppbtn_clicked",
    "on_changegenrebtn_clicked",
    "on_updategenrebtn_2_clicked",
    "on_updatebtn_clicked",
    "on_updateprofilepicbtn_clicked",
    "on_profilepicbtn_clicked",
    "on_updateprofilepicbtn_2_clicked",
    "on_backpw_clicked",
    "on_backgenre_clicked",
    "on_gobackbtn_clicked",
    "on_backpp_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUserSettingENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    0,   97,    2, 0x08,    6 /* Private */,
       8,    0,   98,    2, 0x08,    7 /* Private */,
       9,    0,   99,    2, 0x08,    8 /* Private */,
      10,    0,  100,    2, 0x08,    9 /* Private */,
      11,    0,  101,    2, 0x08,   10 /* Private */,
      12,    0,  102,    2, 0x08,   11 /* Private */,
      13,    0,  103,    2, 0x08,   12 /* Private */,
      14,    0,  104,    2, 0x08,   13 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject UserSetting::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSUserSettingENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUserSettingENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUserSettingENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserSetting, std::true_type>,
        // method 'on_changepwbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updategenrebtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateppbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changegenrebtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updategenrebtn_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updatebtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateprofilepicbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_profilepicbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateprofilepicbtn_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backpw_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backgenre_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_gobackbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backpp_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void UserSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserSetting *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_changepwbtn_clicked(); break;
        case 1: _t->on_updategenrebtn_clicked(); break;
        case 2: _t->on_updateppbtn_clicked(); break;
        case 3: _t->on_changegenrebtn_clicked(); break;
        case 4: _t->on_updategenrebtn_2_clicked(); break;
        case 5: _t->on_updatebtn_clicked(); break;
        case 6: _t->on_updateprofilepicbtn_clicked(); break;
        case 7: _t->on_profilepicbtn_clicked(); break;
        case 8: _t->on_updateprofilepicbtn_2_clicked(); break;
        case 9: _t->on_backpw_clicked(); break;
        case 10: _t->on_backgenre_clicked(); break;
        case 11: _t->on_gobackbtn_clicked(); break;
        case 12: _t->on_backpp_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *UserSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUserSettingENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UserSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
