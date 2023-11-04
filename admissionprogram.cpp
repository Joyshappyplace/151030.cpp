#include <iostream>
using namespace std;

int main()
 {
    int age;
    cout<<"Please enter the age";
    cin>>age;
    if (age>=7){
        cout<<"Admitted! Proceed to Registration"<<endl;
    }
    else if (age>=5&&age<6){
        cout<<"Admit to Kindergarten"<<endl;
    }
    else if (age>=3&&age<4){
        cout<<"Admit to Pre-school"<<endl;
    }
    else if (age>=1&&age>22){
        cout<<"Admit to Play Group"<<endl;
    }
    else if (age<1){
        cout<<"Reject"<<endl;
    }
}