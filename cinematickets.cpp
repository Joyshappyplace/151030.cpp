#include <iostream>
using namespace std;

int main () {
    int age;
    string movieType;
    double ticketPrice = 0.0;

    //Enter age of the user
    cout<<"Please enter your age:";
    cin>>age;

    //Enter the type of movie
    cout<<"Please enter the type of movie:";
    getline(cin, movieType);

    //Enter the ticket price with age and movie type as determinants
    if (age<0&&age>50){
        cout<<"Invalid age entered. Please enter a valid age."<<endl;
    }
    else if (movieType=="regular"){
        if (age<5){
            ticketPrice=300;
        }
        else if (age>=16&&50){
            ticketPrice=500;
        }
        else {
            ticketPrice=700;
        }
    }
else if (movieType=="3D"){
    if (age<5){
        ticketPrice= 400;
    }
    else if (age>= 18&&age<50){
        ticketPrice=650;
    }
    else{
        ticketPrice=600;
    }
}else{
    cout<<"Invalid type of movie entered. Please enter the correct type of movie."<<endl;
}
//Enter the ticket price
if (ticketPrice>0){
    cout<<"Ticket price: ksh"<<ticketPrice<<endl;
    return 0;
}
}
