#include <iostream>
#include <string>

#define max 40

class Course {
public:
    std::string course_code;
    std::string course_name;
};

class Grade {
public:
    int mark;
    char the_grade;
};

class Student {
public:
    std::string registration_number;
    std::string name;
    int age;
    Course course;
    Grade grade;
};

// Function prototypes
void addStudent(Student students[], int &number_of_students);
void editStudent(Student students[], int number_of_students);
void addMarks(Student students[], int number_of_students);
void calculateGrades(Student students[], int number_of_students);

int main() {
    Student students[max];
    int number_of_students = 0;

    // Calling the functions
    addStudent(students, number_of_students);
    editStudent(students, number_of_students);
    addMarks(students, number_of_students);
    calculateGrades(students, number_of_students);

    return 0;
}

void addStudent(Student students[], int &number_of_students) {
    if (number_of_students < max) {
        std::cout << "Enter registration number:";
        std::cin >> students[number_of_students].registration_number;

        std::cout << "Enter name: ";
        std::cin >> students[number_of_students].name;

        std::cout << "Enter age: ";
        std::cin >> students[number_of_students].age;

        std::cout << "Enter course code: ";
        std::cin >> students[number_of_students].course.course_code;

        std::cout << "Enter course name: ";
        std::cin >> students[number_of_students].course.course_name;

        // Initialize grade and marks_added
        students[number_of_students].grade.mark = 0;
        students[number_of_students].grade.the_grade = '\0';

        number_of_students++;
        std::cout << "Successfully added\n";
    } else {
        std::cout << "Failed to add\n";
    }
}

void editStudent(Student students[], int number_of_students) {
    if (number_of_students > 0) {
        std::string regNumber;
        std::cout << "Enter registration number to edit: ";
        std::cin >> regNumber;

        int found = 0;
        for (int i = 0; i < number_of_students; i++) {
            if (students[i].registration_number == regNumber) {
                std::cout << "Enter new age: ";
                std::cin >> students[i].age;

                std::cout << "Enter new course code: ";
                std::cin >> students[i].course.course_code;

                std::cout << "Enter new course name: ";
                std::cin >> students[i].course.course_name;

                std::cout << "Student details updated successfully.\n";
                found = 1;
                break;
            }
        }

        if (!found) {
            std::cout << "Student not found.\n";
        }
    } else {
        std::cout << "No students available.\n";
    }
}

void addMarks(Student students[], int numStudents) {
    if (numStudents > 0) {
        std::string regNumber;
        std::cout << "Enter registration number to add marks: ";
        std::cin >> regNumber;

        int found = 0;
        for (int i = 0; i < numStudents; i++) {
            if (students[i].registration_number == regNumber) {
                std::cout << "Enter marks: ";
                std::cin >> students[i].grade.mark;
                std::cout << "Marks added successfully.\n";
                found = 1;
                break;
            }
        }

        if (!found) {
            std::cout << "Student not found.\n";
        }
    } else {
        std::cout << "No students available.\n";
    }
}

void setGrade(Grade &grade, int score) {
    if (score > 69) {
        grade.the_grade = 'A';
    } else if (score > 59) {
        grade.the_grade = 'B';
    } else if (score > 49) {
        grade.the_grade = 'C';
    } else if (score > 39) {
        grade.the_grade = 'D';
    } else {
        grade.the_grade = 'E';
    }
}

void calculateGrades(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].grade.the_grade == '\0') {
            setGrade(students[i].grade, students[i].grade.mark);
            std::cout << "Grade calculated for " << students[i].name << ": " << students[i].grade.the_grade << std::endl;
        }
    }
}
