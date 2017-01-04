#ifndef SUBTRACTION_H
#define SUBTRACTION_H
#include "operator.h"

class Subtraction : public Operator
{
public:
  Subtraction();
  double execute( double value1 , double value2 );
};

#endif // SUBTRACTION_H
