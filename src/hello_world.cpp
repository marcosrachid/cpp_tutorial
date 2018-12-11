#include <iostream>
#include "my_math.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Insert a number: ";
    cin >> num;
    cout << "Factorial: " << factorial(num) << endl;
    return 0;
}
