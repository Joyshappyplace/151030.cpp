#include <iostream>
#include <string>

int main() {
    std::string fullName, course;
    int score;

    // input the users information
    std::cout << "Enter full name of the student: ";
    std::getline(std::cin, fullName);
    std::cout << "Enter course: ";
    std::getline(std::cin, course);
    std::cout << "Enter score: ";
    std::cin >> score;

    // Calculate the respective grades
    char grade;
    if (score >= 70) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    } else if (score >= 50) {
        grade = 'C';
    } else if (score >= 40) {
        grade = 'D';
    } else if (score >= 0 && score < 40) {
        grade = 'F';
    } else {
        grade = 'I'; // Invalid score
    }

    // Output the result
    if (grade == 'I') {
        std::cout << "Invalid score entered. Please enter a valid score between 0 and 100." << std::endl;
    } else {
        std::cout << "Full Name: " << fullName << std::endl;
        std::cout << "Course: " << course << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }

    return 0;
}
