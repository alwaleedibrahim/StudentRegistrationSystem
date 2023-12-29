#include "header.h"
#include <string>
#include <iostream>
using namespace std;

template <class T>
LinkedList<T>::LinkedList () {
    head = NULL;
};

template <class T>
LinkedList<T>::~LinkedList () {
    while (head!= NULL) {
        Node *temp = head;
        head = temp->next;
        delete temp;
    }
};

template <class T>
void LinkedList<T>::insert(T data) {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
};

template <class T>
void LinkedList<T>::traverse() {
    Node *cur;
    cur = head;
    while (cur != NULL) {
        cur->data.display();
        cur = cur->next;
    }
};


Student::Student(int studentID, string studentName) {
    this->studentID = studentID;
    this->studentName = studentName;
    this->coursesCount =0;
    for (int i=0; i<10; i++) {
        this->RegisteredCourses[i] = -1;
    }
};

Student::~Student() {

};

void Student::display() {
    cout << "Student ID: " << this->studentID << endl;
    cout << "Student Name: " << this->studentName << endl;
    cout << "Registered Courses: " << endl;
    for (int i=0; i<10; i++) {
        if (this->RegisteredCourses[i] != -1) {
                cout << this->RegisteredCourses[i] << " ";
        }
    }
    cout << endl;
}

void Student::registerCourse(int courseCode) {
    for (int i=0; i<10; i++) {
        if (this->RegisteredCourses[i] == courseCode) {
            cout << "Course is already registered\n";
            return;
        };
    };
    if (this->coursesCount > 10) {
        cout << "Maximum registered courses is 10\n";
    }
    else {
        this->RegisteredCourses[this->coursesCount] = courseCode;
        this->coursesCount++;
    }
};

void Student::dropCourse(int courseCode) {
    for (int i=0; i<10; i++) {
        if (this->RegisteredCourses[i] == courseCode) {
            this->RegisteredCourses[i] = -1;
            this->coursesCount--;
            return;
        };
    };
    cout << "Course not found!" << endl;
}

Course::Course(int courseID, string courseName) {
    this->courseID = courseID;
    this->courseName = courseName;
};

Course::~Course() {

};

void Course::display() {
    cout << "Course ID: " << this->courseID << endl;
    cout << "Course Name: " << this->courseName << endl;
}