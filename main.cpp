#include "header.h"

#include <iostream>
using namespace std;

int main()
{
    // Welcome
    cout << "\x1B[31m Welcome to student registration system :)\033[0m\t\t" << endl << endl;

    // Create courses
    Course cs500(500, "Introduction to Computer Science");
    Course cs503(503, "Introduction to Programming");
    Course cs504(504, "Digital Logic and Computer Organisation");
    Course cs505(505, "Data Structures & Algorithms");

    // List of courses
    cout << "\x1B[34m List of courses :)\033[0m\t\t" << endl << endl;

    LinkedList<Course> *courses = new LinkedList<Course>;
    courses->insert(cs500);
    courses->insert(cs503);
    courses->insert(cs504);
    courses->insert(cs505);
    courses->traverse();

    // Student registration
    LinkedList<Student> *students = new LinkedList<Student>;
    
    while (true) {
        cout << "\n\x1B[33mStudent Registration:\033[0m\n";

        string studentName;
        int studentId, courseId;
        char choice;
        
        cout << "Enter student name: ";
        cin >> studentName;

        cout << "Enter student ID: ";
        cin >> studentId;

        Student newStudent(studentId, studentName);

        // Register courses for the new student
        cout << "\n\x1B[33mCourse Registration:\033[0m\n";
        
        do {
            cout << "Enter course ID to register (0 to finish): ";
            cin >> courseId;

            if (courseId != 0) {
                newStudent.registerCourse(courseId);
            }
        } while (courseId != 0);

        // Add the new student to the list
        students->insert(newStudent);

        // List of students
        cout << "\n\x1B[34m Updated list of students :)\033[0m\t\t" << endl << endl;
        students->traverse();

        cout << "Do you want to register another student? (y/n): ";
        cin >> choice;

        if (choice == 'n') break;
    }
    return 0;
};
