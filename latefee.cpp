#include <iostream>
#include <string>
using namespace std;

int main() {
    string bookType;
    int dayslate;
    double fine = 0.0;

    // Enter the type of book
    cout << "Enter the type of book (Mathematics or Spanish): ";
    getline(cin, bookType);

    // Check the type of book and calculate the late fee
    if (bookType == "Mathematics") {
        cout << "Enter the number of days late: ";
        cin >> dayslate;

        if (dayslate <= 30) {
            fine = dayslate * 10.00; // Ksh.10.00 per day for Mathematics books, up to 30 days
        } else {
            fine = 30 * 10.00 + (dayslate - 30) * 15.00; // Ksh.15.00 per day for further delay
        }
    } else if (bookType == "Spanish") {
        cout << "Enter the number of days late: ";
        cin >> dayslate;

        if (dayslate <= 30) {
            fine = dayslate * 5.00; // Ksh.5.00 per day for Spanish books, up to 30 days
        } else {
            fine = 30 * 5.00 + (dayslate - 30) * 10.00; // Ksh.10.00 per day for further delay
        }
    } else {
        cout << "Invalid book type input." << endl;
    }

    cout << "Fine for the book: " << fine << " Ksh." << endl;

    return 0;
}