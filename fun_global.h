///ВНИМАНИЕ СТРУКТУРУ ФАЙЛА МЕНЯТЬ НЕЛЬЗЯ!!!
///Note the file structure can not be changed!!!!
///Author: Vardanyan Andranik Eduardovich, vard-94@mail.ru
#ifndef FUN_GLOBAL_H
#define FUN_GLOBAL_H
#include <QtCore/qglobal.h>
#if defined(FUN_LIBRARY)
#  define FUNSHARED_EXPORT Q_DECL_EXPORT
#else
#  define FUNSHARED_EXPORT Q_DECL_IMPORT
#endif
#endif // FUN_GLOBAL_H
