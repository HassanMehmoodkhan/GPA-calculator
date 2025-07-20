#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numCourses;
    cout << "Enter number of courses: ";
    cin >> numCourses;

    vector<float> grades(numCourses), creditHours(numCourses);
    float totalCredits = 0, totalGradePoints = 0;

    for (int i = 0; i < numCourses; ++i) {
        cout << "\nCourse " << i + 1 << ":\n";
        
        // Input validation for grade
        while (true) {
            cout << "Enter grade (0.0 - 4.0): ";
            cin >> grades[i];
            if (grades[i] >= 0.0 && grades[i] <= 4.0) {
                break;
            } else {
                cout << "Invalid grade. Please enter a value between 0.0 and 4.0.\n";
            }
        }

        cout << "Enter credit hours: ";
        cin >> creditHours[i];

        totalCredits += creditHours[i];
        totalGradePoints += grades[i] * creditHours[i];
    }

    float gpa = totalGradePoints / totalCredits;
    cout << "\n--- Semester Summary ---\n";
    for (int i = 0; i < numCourses; ++i) {
        cout << "Course " << i + 1 << ": Grade = " << grades[i]
             << ", Credit Hours = " << creditHours[i] << endl;
    }

    cout << "\nYour GPA for this semester is: " << gpa << endl;
    cout << "Your CGPA is: " << gpa << endl; // assuming one semester
    return 0;
}
