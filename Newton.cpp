//
// Created by Sherwin on 12/4/2022.
// Submitted by Sherwin Rajkumar - Matr. no. 3509113
//

#include "Newton.h"
#include <iostream>
using namespace std;


void Newton::Root()
{
    double x0, fx0, ffx0, x1;

    // Step 1:
    x0 = initial_root;

    cout << "Initial guess = " << x0 << endl;

    for (int counter = 0; counter < 10000; counter++)
    {
        // Step 2:
        fx0 = myfunct->f_of_x(x0);


        // Step 3:
        ffx0 = myfunct->ff_of_x(x0);


        // Step 4:
        x1 = x0 - (fx0/ffx0);


        // Step 5:
        if (fabs(x1-x0) < tolerance)
        {
            cout << "Number of iterations: " << counter << endl;
            flag = true;
            solution = x1;
            return;
        }
        else
            x0 = x1;

        // Checking if a root exists
        if (counter == 9999)
        {
            cout << "Solver did not converge!" << endl;
            flag = false;
            return;
        }
    }
}


void Newton::output()
{
    if (flag)
        cout << "x0 = " << solution << endl;
    else
        cout << "No root!" << endl;
}

