# Multiple Inheritance and Polymorphism in C++

This project demonstrates the implementation of multiple inheritance and polymorphism in C++. It defines a class hierarchy comprising four classes: Person, Student, Faculty, and TeachingAsst. The program prompts the user for a file containing records of individuals (students, faculty, and teaching assistants), reads the data from the file, creates objects based on the type specified, and prints out the information of all objects.

## Class Structure

1. **Person:**
   - Base class containing common personal information.
   - Two constructors to initialize data members.
   - Member function `printPersonalInfo()` to print personal information.

2. **Student:**
   - Inherits from Person.
   - Additional data members related to student information.
   - Three constructors to initialize data members.
   - Overrides `printPersonalInfo()` to print student-specific information.

3. **Faculty:**
   - Inherits from Person.
   - Contains faculty-related data members.
   - Three constructors for initialization.
   - Overrides `printPersonalInfo()` to print faculty-specific information.

4. **TeachingAsst:**
   - Inherits from both Student and Faculty.
   - Additional data member for course load.
   - Two constructors to initialize data members.
   - Overrides `printPersonalInfo()` to print TA-specific information.

## Execution

To run the program, follow these steps:
1. Clone the repository to your local machine.
2. Compile the source files using a C++ compiler.
3. Execute the compiled program.
4. Follow the prompts to input the file path containing the records of individuals.

## File Structure

- **main.cpp**: Contains the main program logic.
- **Person.h, Person.cpp**: Definition and implementation of the Person class.
- **Student.h, Student.cpp**: Definition and implementation of the Student class.
- **Faculty.h, Faculty.cpp**: Definition and implementation of the Faculty class.
- **TeachingAsst.h, TeachingAsst.cpp**: Definition and implementation of the TeachingAsst class.

## Contribution

Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or create a pull request.

