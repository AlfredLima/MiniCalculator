#ifndef DIVISION_H
#define DIVISION_H
#include "operator.h"

class Division : public Operator
{
public:
  Division();
  double execute( double value1 , double value2 );
};

#endif // DIVISION_H
