#include "header.h"

#include <iostream>
using namespace std;

int main () {
    // Create courses
    Course cs500(500, "Introduction to Computer Science");
    Course cs503(503, "Introduction to Programming");
    Course cs504(504, "Digital Logic and Computer Organisation");
    Course cs505(505, "Data Structures & Algorithms");

    // Create list of availabe courses
    LinkedList<Course> *courses = new LinkedList<Course>;
    courses->insert(cs500);
    courses->insert(cs503);
    courses->insert(cs504);
    courses->insert(cs505);
    courses->traverse();

    Student s1(1843, "Ahmed");
    Student s2(4872, "Ali");
    Student s3(2187, "Sara");

    LinkedList<Student> *students = new LinkedList<Student>;
    students->insert(s1);
    students->insert(s2);
    students->insert(s3);

    students->traverse();

    return 0;
};
