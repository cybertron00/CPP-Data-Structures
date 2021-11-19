#include <stdio.h>
# include <iostream>
# include "Arrays.h"

using namespace std;

int main() {

    string module, number, func_name;

    cout << "Running C++ Data Structures..." << endl;
    cout << "Enter module name: ";
    cin >> module;
    cout << "Enter question number: " ;
    cin >> number;
    func_name = module + '_' + number;
    array_map[func_name]();
}