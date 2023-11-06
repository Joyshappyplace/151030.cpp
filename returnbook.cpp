#include <iostream>
#include <string>
using namespace std;

int main(){

    string bookType;
    int dayslate;
    double fine = 0.0;
    //Enter the type of book
    cout<<"Enter the number of days late:";
    cin>>dayslate;
    //Calculate the amount for late fee based on the type of book and the days delayed
    if (bookType == "Mathematics"){
        if (dayslate<=30){
            fine= dayslate * 10.00; //ksh.10.00 per day for Mathematics books, upto 30 days
        }else {
        fine= 30*10.00 + (dayslate - 30) * 15.00; //Ksh.15.00 per day for further delay
        }
    }else if (bookType=="Spanish"){
        if(dayslate<=30){
            fine=dayslate*5.00; //ksh. 5.00 per day for Spanish books, upto 30 days
        } else {
            fine=30*5.00 + (dayslate -30)*5.00; //ksh. 10.00 per day for further delay
        }
    } else if (bookType=="Mathematics"){
        fine=dayslate*5.00; //ksh.5.00 per day for Mathematics book
    } else{
        cout<<"Invalid book type inputed."<<endl;
    }  
    return 0;
}
    
