 /*A simple user profile using a C++*/ 
 #include <iostream>
using namespace std;

int main()
{
    string firstname, secondname, fullName, favoriteMeal, favoriteMovie;

    // cout<<"Enter your first name";
    // //input first name
    // getline(cin, firstName);
    // cout<<"first name:"<<firstName;nfde

    //input your second name
    cout<<"your second name is:";
    getline(cin, secondname);
    cout<<"second name: " <<secondname;

    cout<<"your full name is:"<<firstname <<secondname <<endl;

    //Input your last name
    cout<<"your favorite meal is:"<<favoriteMeal <<endl;
    getline(cin, favoriteMeal);
    cout<<"your favorite meal is:"<<favoriteMeal <<endl;

    //Input your favorite movie
    cout<<"enter favorite movie:";

    getline(cin, favoriteMovie);
    cout<<"your favorite movie is:"<<favoriteMovie <<endl;


    return 0;

}