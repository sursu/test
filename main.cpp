#include <iostream>

#include "add.hpp"

using namespace std;

int main()
{
    cout << "Hello!" << endl;

    double a = 2.71, b = 3.14;
    cout << "Sum: "<< a << " + " << b << " = " << add(a, b) << endl;
    cout << "Happy go lucky!!!!" << endl;

    return 0;
}