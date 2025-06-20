#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    int numCourses;
    float grade, creditHour;
    float totalGradePoints = 0;
    float totalCredits = 0;

    cout << "Enter number of courses taken: ";
    cin >> numCourses;

    cout << "\n--- Course-wise Grade Points ---\n";

    for (int i = 1; i <= numCourses; i++) {
        cout << "\nCourse " << i << ":\n";
        cout << "Enter grade (on 4.0 scale): ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> creditHour;
        float courseGradePoints = grade * creditHour;
        cout << "Grade * Credit Hour = " << courseGradePoints << endl;
        totalGradePoints += courseGradePoints;
        totalCredits += creditHour;
    }
    cout << "\n-------------------------------";
    cout << "\nTotal Grade Points (GPA × CH): " << totalGradePoints;
    cout << "\nTotal Credit Hours: " << totalCredits;
    if (totalCredits > 0) {
        float cgpa = totalGradePoints / totalCredits;
        cout << fixed << setprecision(2);  
        cout << "\n\nYour Final CGPA is: " << cgpa << endl;
    }
    else {
        cout << "\nCannot compute CGPA (total credits is zero)." << endl;
    }

    return 0;
}
