//A C++ program to compute a basic calculator that adds, multipies, subtracts and divides 2 numbers
#include <iostream>

using namespace std;

int main()
{
   //declare variables
    int multiply, divide, add, subtract, num1, num2;
//input first number;
    cout << "Enter first number?";
    cin >> num1;
//input second number;
    cout << "Enter second number?";
    cin >> num2;
//input formulas;
    multiply = num1 * num2;
    divide = num1 / num2;
    add = num1 + num2;
    subtract = num1 - num2;
//input results;
    cout << "multiplication is: " << multiply << endl;
    cout << "divide is: " << divide << endl;
    cout << "add: " << add << endl;
    cout << "subtract: " << subtract << endl;

    return 0;

}