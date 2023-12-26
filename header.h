#ifndef HEADER_H
#define HEADER_H

#include <string>
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
    };
    
    Node *head;
public:
    LinkedList();
    ~LinkedList();

    void traverse();
    void insert(const T&);
    
};


class Student 
{
    private:
        int studentID;
        string studentName;
        LinkedList<int> RegisteredCourses;

    public:
        Student();
        ~Student();    
        void registerCourse(int courseCode);
    
};

class Course 
{
    private:
        int courseID;
        string coursName;
        LinkedList<int> RegisteredCourses;

    public:
        Course();
        ~Course();    
    
};
#endif