//
// Created by Sherwin on 12/4/2022.
//

#ifndef HOME_EXERCISE_1_FUNCTION_H
#define HOME_EXERCISE_1_FUNCTION_H

class Function
{
public:
    virtual double f_of_x(double x) = 0;
    virtual double ff_of_x(double x) = 0;
};

#include "Function1.h"
#include "Function2.h"
#include "Sinx.h"


#endif //HOME_EXERCISE_1_FUNCTION_H
