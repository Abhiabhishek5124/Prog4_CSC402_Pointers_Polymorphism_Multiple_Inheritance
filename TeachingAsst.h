#ifndef TEACHINGASST_H
#define TEACHINGASST_H

#include "Student.h"
#include "Faculty.h"
using namespace std;

class TeachingAsst : public Student, public Faculty {
protected:
    int courseLoad;

public:
    // Constructors
    TeachingAsst();
    TeachingAsst(string fname, string lname, string street, string city, string state,
                 string zipcode, string phone, int age, string classRank, float gpa,
                 string major, string minor, int credits, string department,
                 string office, string email, string officePhone, int courseLoad);

    // Override printPersonalInfo method
    virtual void printPersonalInfo() override;
};

#endif // TEACHINGASST_H
