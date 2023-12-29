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
void LinkedList<T>::deleteNode (T data) {
    Node *cur, *prev;
    cur = head;
    prev = NULL;

    if (cur != NULL && cur->data.getID() == data.getID()) {
        head = cur->next;
        delete cur;
        return;
    }

    while (cur != NULL) {
        if (cur->data.getID() == data.getID()) {
            prev->next = cur->next;
            delete cur;
            return;
        }
        prev = cur;
        cur = cur->next;
    };
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
    this->ID = studentID;
    this->studentName = studentName;
    this->coursesCount =0;
    for (int i=0; i<10; i++) {
        this->RegisteredCourses[i] = -1;
    }
};

Student::~Student() {

};

void Student::display() {
    cout << "Student ID: " << this->ID << endl;
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

int Student::getID() {
    return this->ID;
}

Course::Course(int courseID, string courseName) {
    this->ID = courseID;
    this->courseName = courseName;
};

Course::~Course() {

};

void Course::display() {
    cout << "Course ID: " << this->ID << endl;
    cout << "Course Name: " << this->courseName << endl;
}

int Course::getID() {
    return this->ID;
}