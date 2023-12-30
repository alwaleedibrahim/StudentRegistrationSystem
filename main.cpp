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

    // Create students
    Student Ahmed(1843, "Ahmed");
    Ahmed.registerCourse(500);
    Ahmed.registerCourse(503);

    Student Hassan(4872, "Hassan");
    Hassan.registerCourse(504);

    Student Ali(2187, "Ali");
    Ali.registerCourse(505);

    // List of students
    cout << "\x1B[34m List of students :)\033[0m\t\t" << endl << endl;

    LinkedList<Student> *students = new LinkedList<Student>;
    students->insert(Ahmed);
    students->insert(Hassan);
    students->insert(Ali);

    students->traverse();

    return 0;
};
