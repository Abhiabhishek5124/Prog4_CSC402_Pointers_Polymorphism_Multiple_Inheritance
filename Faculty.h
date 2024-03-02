#ifndef FACULTY_H
#define FACULTY_H

#include "Person.h"
using namespace std;

class Faculty : virtual public Person {
protected:
    string department;
    string office;
    string email;
    string officePhone;
public:
    Faculty();
    Faculty(string fname, string lname, string street, string city, string st, string zip, string ph, int ag,
            string dept, string off, string em, string offPh);
    Faculty(string dept, string off, string em, string offPh);

    virtual void printPersonalInfo() override;
    void printFacultyInfo();
};

#endif // FACULTY_H
