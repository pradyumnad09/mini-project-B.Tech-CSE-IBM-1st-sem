/*Question Title: “The College Topper in Every Subject”

Story:
At Assam Down Town University, the results for the semester exams have just been announced.
The marks of 5 students in 3 subjects — Mathematics, Physics, and Computer Science — are stored in a 2D array.

Each row of the array represents one student, and each column represents one subject.
The class teacher wants to identify the highest marks in each subject so that those students can receive academic excellence awards.

Write a program that reads the marks of 5 students in 3 subjects and prints the highest marks in each subject.

Enter marks of 5 students in 3 subjects:

Student 1: 70 80 90
Student 2: 85 60 75
Student 3: 88 92 70
Student 4: 65 89 95
Student 5: 78 85 88

Highest marks in Mathematics: 88
Highest marks in Physics: 92
Highest marks in Computer Science: 95*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    int marks[5][3]; 
    string subjects[3] = {"Mathematics", "Physics", "Computer Science"};

    cout << "Enter marks of 5 students in 3 subjects (Mathematics, Physics, Computer Science):\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < 3; j++) {
            cin >> marks[i][j]; 
        }
    }


    cout << "\nMarks Entered (in order: Mathematics, Physics, Computer Science):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < 3; j++) {
            cout << marks[i][j] << "\t";
        }
        cout << endl;
    }

    for (int j = 0; j < 3; j++) {   
        int highest_mark = 0;       
        int topper_index = -1;      

        for (int i = 0; i < 5; i++) {
            if (marks[i][j] > highest_mark) {
                highest_mark = marks[i][j];
                topper_index = i;
            }
        }

        
        cout << "\nHighest marks in " << subjects[j] << ": " << highest_mark << endl;
        cout << "Topper in " << subjects[j] << ": Student " << topper_index + 1 << endl;
    }

    cout << "Congratulations to all subject toppers!" << endl;

    return 0;
}
