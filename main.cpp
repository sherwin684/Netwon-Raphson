//
// Created by Sherwin on 12/4/2022.
// Submitted by Sherwin Rajkumar - Matr. no. 3509113
//

#include <iostream>
using namespace std;
#include "Newton.h"
#include "input.h"


int main() {

    cout << "x**2 -2 " << endl;
    ProblemA function;
    Newton obj1 (&function, 1);
    obj1.Root();
    obj1.output();
    string stuff(25,'-');
    cout << stuff<< endl;

    cout << "x**2 +2 " << endl;
    ProblemB function1;
    Newton obj2 (&function1, 1);
    obj2.Root();
    obj2.output();
    cout << stuff<< endl;

    cout << "sin(x) - x/2" << endl;
    ProblemC function2;
    Newton obj3 (&function2, 1);
    obj3.Root();
    obj3.output();


    return 0;
}
