#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "QMap"
#include "queue"
#include "QDebug"
#include "subtraction.h"
#include "sum.h"
#include "multiplication.h"
#include "division.h"
using namespace std;

class Calculator
{
    QMap < QChar , Operator * > operators;
public:
    Calculator();
    QString getResult( QString line );
};

#endif // CALCULATOR_H
