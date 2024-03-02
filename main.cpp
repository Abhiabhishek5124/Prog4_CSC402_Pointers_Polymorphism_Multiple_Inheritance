/*
  Author: Abhishek Shrestha
  CSC 402 - Program #4
  Pointers, Polymorphism, Multiple Inheritance

  Program Description:
  This program implements multiple inheritance and polymorphic operations to manage information for individuals in an educational setting. It consists of four classes: Person, Student, Faculty, and TeachingAsst, forming a hierarchical structure. The program reads input data from a file, creates objects based on the type specified in the file, and stores them in a vector. It then prints out the information of each object, showcasing polymorphism. Each class has constructors to initialize its data members and methods to print out relevant information. The main program prompts the user for a file path, reads the data, processes it, and prints out the information of each object in a formatted manner.

  Date: 03/01/2024
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Faculty.h"
#include "TeachingAsst.h"

using namespace std;

int main() {
    vector<Person*> people;
    Person* P; // Declare a pointer P to type Person
    Student* S; // Declare a pointer S to Student
    Faculty* F; // Declare a pointer F to Faculty
    TeachingAsst* T; // Declare a pointer T to TeachingAsst

    ifstream inf;
    string filepath;
    cout << "Please enter a path to a data file : ";
    cin >> filepath;

    // Open the file for input
    inf.open(filepath);
    if (!inf) {
        cerr << "Error: Unable to open the file!" << endl;
        return 1; // Exit program if unable to open file
    }

    string type; // String to hold the type of the next record in data file
    while (inf >> type) {
        // Declare variables to hold data read from file
        string fname, lname, street, city, state, zip, phone, department, office, email, officePhone, classRank, major, minor;
        int age, credits, courseLoad;
        float gpa;

        // Read common Person data (7 strings and 1 int)
        inf >> fname >> lname >> street >> city >> state >> zip >> phone >> age;

        if (type == "S" || type == "T") {
            // Read Student data items
            inf >> classRank >> gpa >> major >> minor >> credits;
            if (type == "S") {
                // Create new Student object and assign to pointer S
                S = new Student(fname, lname, street, city, state, zip, phone, age, classRank, gpa, major, minor,
                                credits);
                P = S; // Assign S to P
            }
        }
        if (type== "F" || type == "T") {
            // Read Faculty data items
            inf >> department >> office >> email >> officePhone;
            if (type == "F") {
                F = new Faculty(fname, lname, street, city, state, zip, phone, age, department, office, email,
                                officePhone);
                P = F; // Assign F to P
            }
        }
        if (type=="T"){
            inf >> courseLoad;
                // Create new TeachingAsst object and assign to pointer T
                T = new TeachingAsst(fname, lname, street, city, state, zip, phone, age, classRank, gpa, major, minor, credits, department, office, email, officePhone, courseLoad);
                P = T; // Assign T to P
            }

        // Insert P into the vector
        people.push_back(P);
    } // End input while loop

    // Close the input file
    inf.close();

    // Loop through the vector and call printPersonalInfo() on all objects
    for (auto it = people.begin(); it != people.end(); ++it) {
        (*it)->printPersonalInfo();
        cout << endl << endl;
    }

    return 0;
}
