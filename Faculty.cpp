#include "Faculty.h"

using namespace std;


Faculty::Faculty() : department("NONE"), office("NONE"), email("NONE"), officePhone("NONE") {}

Faculty::Faculty(string fname, string lname, string street, string city, string st, string zip, string ph, int ag,
                 string dept, string off, string em, string offPh)
        : Person(fname, lname, street, city, st, zip, ph, ag), department(dept), office(off), email(em), officePhone(offPh) {}

Faculty::Faculty(string dept, string off, string em, string offPh)
        : department(dept), office(off), email(em), officePhone(offPh) {}

void Faculty::printPersonalInfo() {
    Person::printPersonalInfo();
    printFacultyInfo();
}

void Faculty::printFacultyInfo() {
    cout << email << endl;
    cout << department << endl;
    cout << "Office : " << office << "  Office Phone : " << officePhone << endl;
}
