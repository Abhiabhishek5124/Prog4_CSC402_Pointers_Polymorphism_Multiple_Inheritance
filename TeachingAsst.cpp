#include "TeachingAsst.h"

// Default constructor
TeachingAsst::TeachingAsst() : courseLoad(0) {}

// Constructor with parameters
TeachingAsst::TeachingAsst(string fname, string lname, string street, string city, string state,
                           string zipcode, string phone, int age, string classRank, float gpa,
                           string major, string minor, int credits, string department,
                           string office, string email, string officePhone, int courseLoad):
        Person(fname, lname, street, city, state, zipcode, phone, age),
        Student(classRank, gpa, major, minor, credits),
        Faculty(department, office, email, officePhone),
        courseLoad(courseLoad) {}

// Override printPersonalInfo method
void TeachingAsst::printPersonalInfo() {
    Student::printPersonalInfo();
    Faculty::printFacultyInfo();
    cout << "Course Load : " << courseLoad << endl;
}
