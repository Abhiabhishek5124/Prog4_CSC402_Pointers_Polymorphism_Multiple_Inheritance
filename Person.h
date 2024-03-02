#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string firstname;
    string lastname;
    string streetaddress;
    string city;
    string state;
    string zipcode;
    string phone;
    int age;
public:
    Person();
    Person(string fname, string lname, string street, string city, string st, string zip, string ph, int ag);

    virtual void printPersonalInfo();
};

#endif // PERSON_H
