#include <iostream>
using namespace std;

int main() {
    string name;
    int grade = 0;
    char agg = ' ';
    cout << "Enter the name of the student: ";
    cin >> name;
    cout << "Enter the score scored by the student: ";
    cin >> grade;

    switch (grade / 10) {
        case 7:
            agg = 'A';
            break;
        case 6:
            agg = 'B';
            break;
        case 5:
            agg = 'C';
            break;
        case 4:
            agg = 'F';
            break;
        default:
            cout << "Invalid grade." << endl;
            return 1; // Exit with an error code
    }

    cout << "The student by the name " << name << " scored " << grade << " and has an " << agg << endl;
    return 0;
}