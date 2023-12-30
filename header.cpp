#ifdef HEADER_H
#include "header.h"

// LinkedList
template <class T>
LinkedList<T>::LinkedList()
{
    head = NULL;
};

template <class T>
LinkedList<T>::~LinkedList()
{
    while (head != NULL)
    {
        Node *temp = head;
        head = temp->next;
        delete temp;
    }
};

template <class T>
void LinkedList<T>::insert(T data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
};

template <class T>
void LinkedList<T>::traverse()
{
    Node *cur;
    cur = head;
    while (cur != NULL)
    {
        cur->data.display();
        cur = cur->next;
    }
};

// Student
Student::~Student(){};

Student::Student(int studentID, string studentName)
{
    this->studentID = studentID;
    this->studentName = studentName;
    this->coursesCount = 0;

    for (int i = 0; i < 5; i++)
    {
        this->registeredCourses[i] = -1;
    }
};

void Student::display()
{
    cout << "--> Student:- " << endl;
    cout << "--> ID: " << this->studentID << endl;
    cout << "--> Name: " << this->studentName << endl;
    cout << "--> Courses:- " << endl;

    for (int i = 0; i < 5; i++)
    {
        if (this->registeredCourses[i] != -1)
        {
            cout << "  > " << this->registeredCourses[i] << endl;
        }
    }
    cout << endl;
}

void Student::registerCourse(int courseCode)
{
    for (int i = 0; i < 5; i++)
    {
        if (this->registeredCourses[i] == courseCode)
        {
            cout << "Course is already registered\n";
            return;
        };
    };

    if (this->coursesCount > 5)
    {
        cout << "Maximum registered courses is 5\n";
    }
    else
    {
        this->registeredCourses[this->coursesCount] = courseCode;
        this->coursesCount++;
    }
};

void Student::unregisterCourse(int courseCode)
{
    for (int i = 0; i < 5; i++)
    {
        if (this->registeredCourses[i] == courseCode)
        {
            this->registeredCourses[i] = -1;
            this->coursesCount--;
            return;
        };
    };

    cout << "Course not found!" << endl;
}

// Course
Course::~Course(){};

Course::Course(int courseID, string courseName)
{
    this->courseID = courseID;
    this->courseName = courseName;
};

void Course::display()
{
    cout << "--> Course:- " << endl;
    cout << "--> ID: " << this->courseID << endl;
    cout << "--> Name: " << this->courseName << endl;
    cout << endl;
}
#endif
