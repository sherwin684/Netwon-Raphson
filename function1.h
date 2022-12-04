//
// Created by Sherwin on 12/4/2022.
//

#ifndef HOME_EXERCISE_1_FUNCTION1_H
#define HOME_EXERCISE_1_FUNCTION1_H

class Function1 : public Function
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

#endif //HOME_EXERCISE_1_FUNCTION1_H
