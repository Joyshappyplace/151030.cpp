#include <iostream>
using namespace std;

int main(){
    int age;
    string interest;
    cout<<"Please enter the child's age:";
    cin>>age;
if (age>=4&&age<=10){//begin primary if
    cin>>interest;
    if (interest=="soccer"){//Begin nested if
    cout<<"Admit and assign to Soccer Play Group";
    }
    else if (interest=="art"){
        cout<<"Admit and assign to Art group";
    }else {
        cout<<"Admit to other group";
    }//End of nested if 
}
else{
    cout<<"Admission Unsuccessful.Age is invalid";
}//end of primary if
}
