#include <iostream>
using namespace std;

int main() {
    //Declaire variables
    int num1, num2;
    //Enter two numbers
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    //Use switch case statement to input maximum number
    switch (num1>num2){
        case 1:
        cout<<"The maximum number is:"<<num1<<endl;
        break;
        case 0:
        cout<<"The maximum number is:"<<num2<<endl;
        break;
    }
return 0;
}

