#include "Person.h"

Person::Person() : firstname("FIRST"), lastname("LAST"), streetaddress("NONE"), city("NONE"), state("NONE"), zipcode("00000"), phone("000-000-0000"), age(0) {}

Person::Person(string fname, string lname, string street, string city, string st, string zip, string ph, int ag)
        : firstname(fname), lastname(lname), streetaddress(street), city(city), state(st), zipcode(zip), phone(ph), age(ag) {}

void Person::printPersonalInfo() {
    cout << lastname << ", " << firstname << endl;
    cout << streetaddress << endl;
    cout << city << ", " << state << "  " << zipcode << endl;
    cout << phone << "   AGE: " << age << endl;
}
