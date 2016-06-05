///ВНИМАНИЕ СТРУКТУРУ ФАЙЛА МЕНЯТЬ НЕЛЬЗЯ!!!
///Note the file structure can not be changed!!!!
///Author: Vardanyan Andranik Eduardovich, vard-94@mail.ru
#ifndef FUN_H
#define FUN_H
#include "fun_global.h"
#include <QVector>
#include "math.h"
class FUNSHARED_EXPORT Fun
{
public:
    Fun();
    long double fun(QVector<double>);
};
#endif // FUN_H
