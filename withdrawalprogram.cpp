#include <iostream>
using namespace std;

int main(){
    //Enter the user's Account balance and Transaction Cost
    double accountBalance=20000.00; //Initial Account balance
    double transactionLimit=500.00; //Maximum withdrawal limit per transaction
    double dayLimit=2000.00; //Maximum withdrawal limit per day
    //Withdrawal amount from the user's account
    double withdrawalAmount;
    cout<<"Enter withdrawal amount: ksh";
    cin>>withdrawalAmount;
    //Verifivation if withdrawal amount that exceeds transaction limit
    if (withdrawalAmount>transactionLimit){
        cout<<"Error: Withdrawal amount exceeds transaction limit:";
    }else{
        //Verification if withdrawal amount exceeds daily limit
        if (withdrawalAmount > dayLimit){
            cout<<"Error: Withdrawal amount exceeds daily limit:";
    }else{
        //Verification if there are insufficient funds in the user's account
        if (withdrawalAmount > accountBalance){
            cout<<"Error: Insufficient funds."<<endl;
        }else{
            //Proceed with the money withdrawal process
            accountBalance -=withdrawalAmount;
            cout<<"Withdrawal successful. This is your remaining balance:"<<endl;
        }
    }

 }
    return 0;
}