#include <iostream>
#include "functions.h"

using namespace std;

int main(){

    print_hello();
    cout << endl;
    auto_ptrs();
    cout << endl;

    cout << "The factorial of 5 is " << factorial(5) << endl;

    cout << "Press any key";
    cin.get();

    return 0;
}
