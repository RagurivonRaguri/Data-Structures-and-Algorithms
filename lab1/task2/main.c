#include <stdio.h>
#define max 40

struct Course
{
    char course_code[100];
    char course_name[100];
};

struct Grade
{
    int mark;
    char the_grade;
};

struct Student
{
    char registration_number[20];
    char name[50];
    int age;
    struct Course course;
    struct Grade grade;
};

// Function prototypes
void addStudent(struct Student students[], int *number_of_students);
void editStudent(struct Student students[], int number_of_students);
void addMarks(struct Student students[], int number_of_students);
void calculateGrades(struct Student students[], int number_of_students);

int main() {
    struct Student students[max];
    int number_of_students = 0;
    
    //Calling the functions
    addStudent(students, &number_of_students);
    editStudent(students, number_of_students);
    addMarks(students, number_of_students);
    calculateGrades(students, number_of_students);

    return 0;
}

void addStudent(struct Student students[], int *number_of_students)
{
    if (*number_of_students < max)
    {
        printf("Enter registration number:");
        scanf("%s", &students[*number_of_students].registration_number);

        printf("Enter name: ");
        scanf("%s", students[*number_of_students].name);

        printf("Enter age: ");
        scanf("%d", &students[*number_of_students].age);

        printf("Enter course code: ");
        scanf("%s", students[*number_of_students].course.course_code);

        printf("Enter course name: ");
        scanf("%s", students[*number_of_students].course.course_name);

        // Initialize grade and marks_added
        students[*number_of_students].grade.mark = 0;
        students[*number_of_students].grade.the_grade = '\0';
        
        (number_of_students)++;
        printf("Successfully added\n");
    }else
    {
        printf("Failed to add\n");
    }
       
}

void editStudent(struct Student students[], int number_of_students) {
    if (number_of_students > 0) {
        char regNumber[20];
        printf("Enter registration number to edit: ");
        scanf("%s", regNumber);

        int found = 0;
        for (int i = 0; i < number_of_students; i++) {
            if (strcmp(students[i].registration_number, regNumber) == 0) {
                printf("Enter new age: ");
                scanf("%d", &students[i].age);

                printf("Enter new course code: ");
                scanf("%s", students[i].course.course_code);

                printf("Enter new course name: ");
                scanf("%s", students[i].course.course_name);

                printf("Student details updated successfully.\n");
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Student not found.\n");
        }
    } else {
        printf("No students available.\n");
    }
}

void addMarks(struct Student students[], int numStudents) {
    if (numStudents > 0) {
        char regNumber[20];
        printf("Enter registration number to add marks: ");
        scanf("%s", regNumber);

        int found = 0;
        for (int i = 0; i < numStudents; i++) {
            if (strcmp(students[i].registration_number, regNumber) == 0) {
                printf("Enter marks: ");
                scanf("%d", &students[i].grade.mark);
                printf("Marks added successfully.\n");
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Student not found.\n");
        }
    } else {
        printf("No students available.\n");
    }
}

void setGrade(struct Grade *grade, int score) {
    if (score > 69) {
        grade->the_grade = 'A';
    } else if (score > 59) {
        grade->the_grade = 'B';
    } else if (score > 49) {
        grade->the_grade = 'C';
    } else if (score > 39) {
        grade->the_grade = 'D';
    } else {
        grade->the_grade = 'E';
    }
}

void calculateGrades(struct Student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].grade.the_grade == '\0') {
            setGrade(&students[i].grade, students[i].grade.mark);
            printf("Grade calculated for %s: %c\n", students[i].name, students[i].grade.the_grade);
        }
    }
}


