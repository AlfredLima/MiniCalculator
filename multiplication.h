#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H
#include "operator.h"

class Multiplication : public Operator
{
public:
  Multiplication();
  double execute( double value1 , double value2 );
};

#endif // MULTIPLICATION_H
