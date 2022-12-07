//
// Created by Sherwin on 12/4/2022.
//

#ifndef HOME_EXERCISE_1_PROBLEMA_H
#define HOME_EXERCISE_1_PROBLEMA_H

#include "math.h"

// Given inputs

// Problem a (x**2 - 2, x0 =1)
class ProblemA : public Function
{
public:
    double f_of_x(double _x)
    {
        return _x*_x - 2;
    }

    double ff_of_x(double _x)
    {
        return _x*2;
    }

};

// Problem b (x**2 + 2, x0 =1)
class ProblemB : public Function
{
public:
    double f_of_x(double _x)
    {
        return _x*_x + 2;
    }

    double ff_of_x(double _x)
    {
        return _x*2;
    }

};

// Problem b (sin(x) - x/2, x0 =1, x0=2, x0=0.5)
class ProblemC : public Function
{
public:
    double f_of_x(double _x)
    {
        return sin(_x) - _x/2.0;
    }

    double ff_of_x(double _x)
    {
        return cos(_x) - 0.5;
    }

};




#endif //HOME_EXERCISE_1_PROBLEMA_H
