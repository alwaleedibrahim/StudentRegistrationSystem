#ifndef HEADER_H
#define HEADER_H

#include <string>
#include <iostream>
using namespace std;

template <class T>
class LinkedList
{
private:
    class Node
    {
    public:
        T data;
        Node *next;

        Node(T newData) : data(newData), next(NULL){};
    };

    Node *head;

public:
    LinkedList();
    ~LinkedList();

    void insert(T data);
    void traverse();
};

class Student
{
private:
    int studentID;
    string studentName;
    int registeredCourses[5];
    int coursesCount;

public:
    Student(int studentID, string studentName);
    ~Student();

    void display();
    void registerCourse(int courseCode);
    void unregisterCourse(int courseCode);
};

class Course
{
private:
    int courseID;
    string courseName;

public:
    Course(int courseID, string courseName);
    ~Course();
    
    void display();
};

#include "header.cpp"
#endif
