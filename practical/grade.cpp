#include <iostream>
using namespace std;

int main() {
    int marks;

    // Input
    cout << "Enter student's marks (0-100): ";
    cin >> marks;

    // Validate input
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Please enter a value between 0 and 100." << endl;
    }else {
        // Grade calculation
        if (marks >= 90) {
            cout << "Grade: A+" << endl;
        }
        else if (marks >= 80) {
            cout << "Grade: A" << endl;
        }
        else if (marks >= 70) {
            cout << "Grade: B" << endl;
        }
        else if (marks >= 60) {
            cout << "Grade: C" << endl;
        }
        else if (marks >= 50) {
            cout << "Grade: D" << endl;
        }
        else {
            cout << "Grade: F (Fail)" << endl;
        }
    }

    return 0;
}
