#include <iostream>
using namespace std;
#include "Newton.h"
#include "Function1.h"
#include "Sinx.h"
#include "Function2.h"

int main() {

    cout << "x^2 -2 " << endl;
    Function1 myfunction;
    Newton findroot (&myfunction, 1);
    findroot.Root();
    findroot.output();
    string stuff(25,'-');
    cout << stuff<< endl;

    cout << "x^2 -2 " << endl;
    Function2 myfunction1;
    Newton findroot1 (&myfunction1, 1);
    findroot1.Root();
    findroot1.output();
    cout << stuff<< endl;

    cout << "sin(x) - x/2" << endl;
    Sinx myfunction2;
    Newton findroot2 (&myfunction2, 1);
    findroot2.Root();
    findroot2.output();


    return 0;
}
