#include <iostream>
#include <string>
using namespace std;

int main(){
    std::string customerName;
    int age;
    double bankBalance;
    std::string crbStatus;
    int customerPeriod;
    //Enter the customer's information
    std::cout<<"Loan Qualification\n";
    std::cout<<"Enter your full name:";
    std::getline(std::cin, customerName);
    std::cout<<"Enter age";
    std::cin>>age;
    std::cout<<"Enter your bank balance:";
    std::cin>>bankBalance;
    std::cin.ignore();
    std::cout<<"Enter your crb status (good/bad):";
    std::getline(std::cin, crbStatus);
    std:cout<<"Enter the period of being a customer:";
    std::cin>>customerPeriod;
    //Check loan qualification
    if (age > 22 && bankBalance>50000 &&crbStatus== "good" && customerPeriod>6){
        std::cout<<"There is good news for you,"<<customerName<<"You have qualified for the loan.\n";
    }else{
        std::cout<<"I have sad news for you,"<<customerName<<"You have not met the requirements for a loan\n";
    }
    return 0;
    }