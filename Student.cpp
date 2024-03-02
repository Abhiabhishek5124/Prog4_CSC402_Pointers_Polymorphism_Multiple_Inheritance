#include "Student.h"
using namespace std;

// Constructors :

Student::Student() : classRank("None"), gpa(0.0), major("NONE"), minor("NONE"), credits(0) {}

Student::Student(string fname, string lname, string street, string city, string state, string zipcode, string phone, int age,
                 string classRank, float gpa, string major, string minor, int credits)
        : Person(fname, lname, street, city, state, zipcode, phone, age), classRank(classRank), gpa(gpa), major(major), minor(minor), credits(credits) {}

Student::Student(string classRank, float gpa, string major, string minor, int credits)
        : classRank(classRank), gpa(gpa), major(major), minor(minor), credits(credits) {}

void Student::printPersonalInfo() {
    Person::printPersonalInfo();
    printStudentInfo();
}

void Student::printStudentInfo() {
    cout << classRank << "  GPA: " << gpa << endl;
    cout << major << "  " << minor << endl;
    cout << "Total Credits : " << credits << endl;
}
