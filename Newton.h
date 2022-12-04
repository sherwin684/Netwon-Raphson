//
// Created by Sherwin on 12/4/2022.
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
    Function* myfunct;

public:
    Newton(Function *_mf, double _a)
    {
        initial_root = _a;
        tolerance    = 1e-8;
        flag      = false;
        solution     = 0;
        myfunct      = _mf;
    }

    void Root();
    void output();


};

#endif //HOME_EXERCISE_1_NEWTON_H
