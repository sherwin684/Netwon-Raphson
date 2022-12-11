//
// Created by Sherwin on 12/4/2022.
// Submitted by Sherwin Rajkumar - Matr. no. 3509113
//

#ifndef HOME_EXERCISE_1_NEWTON_H
#define HOME_EXERCISE_1_NEWTON_H

#include "Function.h"

class Newton
{
protected:
    double initial_root;
    double tolerance;
    double solution;
    bool flag;
    Function* funct;

public:
    Newton(Function *_f, double _a)
    {
        initial_root = _a;
        tolerance    = 1e-8;
        flag      = false;
        solution     = 0;
        funct      = _f;
    }

    void root();
    void output();


};

#endif //HOME_EXERCISE_1_NEWTON_H
