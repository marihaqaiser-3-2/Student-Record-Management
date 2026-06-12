#include <iostream>
using namespace std;

// Defining a structure to group student and course related data
struct student {
    int studentID;
    char studentName[20];
    char courseCode[10];
    char courseName[30];
    int courseMarks;
};

int main() {
    // Initializing the structure variable with compile-time values
    student s1 = {20, "Ahmed", "CS-02", "OOP", 97};

    // Displaying the records using the structure member access operator (.)
    cout << "Student ID: " << s1.studentID << endl;
    cout << "Student Name: " << s1.studentName << endl;
    cout << "Course code: " << s1.courseCode << endl;
    cout << "Course Name: " << s1.courseName << endl;
    cout << "Course Marks: " << s1.courseMarks << endl;

    return 0;
}
