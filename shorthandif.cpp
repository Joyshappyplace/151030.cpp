#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Please enter age";
    cin>>age;
    string message=(age>=4)?"If admitted proceed to registration":"Decline mminimum age not reached";
    cout<<message;

}