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
};

Student::~Student() {

};

void Student::display() {
    cout << "Student ID: " << this->studentID << endl;
    cout << "Student Name: " << this->studentName << endl;
}

void Student::registerCourse(int courseCode) {

};


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