//
// Created by Sherwin on 12/4/2022.
//

#ifndef HOME_EXERCISE_1_SINX_H
#define HOME_EXERCISE_1_SINX_H
#include "cmath"

class Sinx : public Function
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


#endif //HOME_EXERCISE_1_SINX_H
