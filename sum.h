#ifndef SUM_H
#define SUM_H
#include "operator.h"

class Sum : public Operator
{

public:
    Sum();
    double execute( double value1 , double value2 );
};

#endif // SUM_H
