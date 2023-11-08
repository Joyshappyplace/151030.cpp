#include<iostream>
using namespace std;
int main()
{
    int age, ticket_price;
    string movie_type;
    cout<<"Movie types: Regular, 3D.";
    cout<<"Enter movie type: ";
   getline(cin,movie_type);
    if(movie_type == "Regular"){
        cout<<"Enter age: ";
        cin>>age;
        if (age>=8&&age<=14){
            ticket_price = 600;
            cout<<"The ticket price is Ksh: "<<ticket_price<<endl;
        }
        if (age>=15&&age<=17){
            ticket_price = 800;
            cout<<"The ticket price is Ksh: "<<ticket_price<<endl;
        }
        if (age>=18){
            ticket_price = 1000;
            cout<<"The ticket price is Ksh: "<<ticket_price<<endl;
        }
        else{
            cout<<"Enter correct details.";
        }
        }
else if(movie_type == "3D"){
    cout<<"Enter age: ";
    cin>>age;
    if(age>=8&&age<=14){
        ticket_price = 800;
        cout<<"The ticket price is Ksh: "<<ticket_price<<endl;
    }
    if(age>=15&&age<=26){
        ticket_price = 1000;
        cout<<"The ticket price is Ksh: "<<ticket_price<<endl;
    }
    if(age>=18){
        ticket_price = 1200;
        cout<<"The ticket price is Ksh: "<<ticket_price<<endl;
    }
    else{
        cout<<"Kindly pay that amount.";
    }
}
else{
    cout<<"Kindly pay that amount.";
}
}
