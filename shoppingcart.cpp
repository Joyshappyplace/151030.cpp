#include <iostream>
#include <string>
using namespace std;

int main() {
    double purchaseAmount, totalCost;
    string userInput;
    cout<<"Enter the total purchase amount:";
    getline(cin, userInput);

    //Convert user input to double
    purchaseAmount = stod(userInput);

    if(purchaseAmount >=1,000){
        totalCost= purchaseAmount*100; //given a 10% for goods purchased above ksh. 1,000
    } else if (purchaseAmount >=500){
        totalCost= purchaseAmount*25; //given a 5% for goods above ksh.500
    } else {
        totalCost=purchaseAmount; //No discount given for goods below ksh.500
    }
    cout<<"Calculate the total cost after the discounts given on goods: ksh."<<totalCost<<endl;
    return 0;

}