#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
using namespace std;

class Student : virtual public Person {
protected:
    string classRank;
    float gpa;
    string major;
    string minor;
    int credits;
public:
    Student();
    Student(string fname, string lname, string street, string city, string state, string zipcode, string phone, int age,
            string classRank, float gpa, string major, string minor, int credits);
    Student(string classRank, float gpa, string major, string minor, int credits);

    virtual void printPersonalInfo();
    void printStudentInfo();
};

#endif // STUDENT_H
