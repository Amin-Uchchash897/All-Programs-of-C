#include <stdio.h>

// Define the maximum number of students
#define MAX_STUDENTS 50
// Define the maximum number of subjects
#define MAX_SUBJECTS 5

// Define the structure for a student
struct Student {
    char name[50];
    int rollNumber;
    int grades[MAX_SUBJECTS];
};

// Function to add a new student
void addNewStudent(struct Student students[], int *numStudents) {
    if (*numStudents < MAX_STUDENTS) {
        printf("Enter the details for the new student:\n");

        // Increment the number of students
        (*numStudents)++;

        // Get the details from the user
        printf("Name: ");
        scanf("%s", students[*numStudents - 1].name);

        printf("Roll Number: ");
        scanf("%d", &students[*numStudents - 1].rollNumber);

        // Initialize grades to -1 (indicating not yet recorded)
        for (int i = 0; i < MAX_SUBJECTS; i++) {
            students[*numStudents - 1].grades[i] = -1;
        }

        printf("Student added successfully!\n");
    } else {
        printf("Maximum number of students reached!\n");
    }
}

// Function to record grades for a student
void recordGrades(struct Student students[], int numStudents) {
    int rollNumber, subject;
    printf("Enter the roll number of the student: ");
    scanf("%d", &rollNumber);

    // Search for the student
    int studentIndex = -1;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            studentIndex = i;
            break;
        }
    }

    if (studentIndex != -1) {
        printf("Enter grades for the student (subject-wise):\n");

        for (int i = 0; i < MAX_SUBJECTS; i++) {
            printf("Subject %d: ", i + 1);
            scanf("%d", &students[studentIndex].grades[i]);
        }

        printf("Grades recorded successfully for student %s!\n", students[studentIndex].name);
    } else {
        printf("Student not found!\n");
    }
}

// Function to display grades for a student
void displayGrades(struct Student students[], int numStudents) {
    int rollNumber;
    printf("Enter the roll number of the student: ");
    scanf("%d", &rollNumber);

    // Search for the student
    int studentIndex = -1;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            studentIndex = i;
            break;
        }
    }

    if (studentIndex != -1) {
        printf("\nGrades for student %s (Roll Number: %d):\n", students[studentIndex].name, students[studentIndex].rollNumber);

        for (int i = 0; i < MAX_SUBJECTS; i++) {
            printf("Subject %d: %d\n", i + 1, students[studentIndex].grades[i]);
        }

        printf("\n");
    } else {
        printf("Student not found!\n");
    }
}

// Function to search for a student by roll number or name
void searchStudent(struct Student students[], int numStudents) {
    int choice;
    printf("Search student by:\n");
    printf("1. Roll Number\n");
    printf("2. Name\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int rollNumber;
        printf("Enter the roll number of the student: ");
        scanf("%d", &rollNumber);

        // Search for the student
        int studentIndex = -1;
        for (int i = 0; i < numStudents; i++) {
            if (students[i].rollNumber == rollNumber) {
                studentIndex = i;
                break;
            }
        }

        if (studentIndex != -1) {
            printf("Student found!\n");
            printf("Name: %s, Roll Number: %d\n", students[studentIndex].name, students[studentIndex].rollNumber);
        } else {
            printf("Student not found!\n");
        }
    } else if (choice == 2) {
        char name[50];
        printf("Enter the name of the student: ");
        scanf("%s", name);

        // Search for the student
        int studentIndex = -1;
        for (int i = 0; i < numStudents; i++) {
            if (strcmp(students[i].name, name) == 0) {
                studentIndex = i;
                break;
            }
        }

        if (studentIndex != -1) {
            printf("Student found!\n");
            printf("Name: %s, Roll Number: %d\n", students[studentIndex].name, students[studentIndex].rollNumber);
        } else {
            printf("Student not found!\n");
        }
    } else {
        printf("Invalid choice. Please enter a valid option.\n");
    }
}

// Function to modify grades for a student
void modifyGrades(struct Student students[], int numStudents) {
    int rollNumber;
    printf("Enter the roll number of the student: ");
    scanf("%d", &rollNumber);

    // Search for the student
    int studentIndex = -1;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            studentIndex = i;
            break;
        }
    }

    if (studentIndex != -1) {
        printf("Enter the new grades for the student (subject-wise):\n");

        for (int i = 0; i < MAX_SUBJECTS; i++) {
            printf("Subject %d: ", i + 1);
            scanf("%d", &students[studentIndex].grades[i]);
        }

        printf("Grades modified successfully for student %s!\n", students[studentIndex].name);
    } else {
        printf("Student not found!\n");
    }
}

// Function to display the list of students
void displayStudents(struct Student students[], int numStudents) {
    printf("\nList of Students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Name: %s, Roll Number: %d\n", students[i].name, students[i].rollNumber);

        // Display grades and average
        printf("Grades:\n");
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            float grade = students[i].grades[j];
            if (grade > 0) {
                printf("Subject %d: %.2f\n", j + 1, grade);
            } else {
                printf("Subject %d: %s\n", j + 1, "N/A");
            }
        }

        // Calculate and display average
        int sum = 0;
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            sum += students[i].grades[j];
        }
        float average = (float)sum / MAX_SUBJECTS;
        if (average > 0) {
            printf("Average: %.2f\n", average);
        } else {
            printf("Average: %.2f\n", "N/A");
        }

        // Calculate and display GPA
        float gpa = 0.0;
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            float grade = students[i].grades[j];
            if (grade >= 80) {
                gpa += 4.0;
            } else if (grade >= 70) {
                gpa += 3.0;
            } else if (grade >= 70) {
                gpa += 2.0;
            } else if (grade >= 60) {
                gpa += 1.0;
            }
        }

        gpa /= MAX_SUBJECTS;
        printf("GPA: %.2f\n", gpa);

        printf("\n");
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    do {
        // Display menu
        printf("Menu:\n");
        printf("1. Add New Student\n");
        printf("2. Record Grades\n");
        printf("3. Display Grades\n");
        printf("4. Search Student\n");
        printf("5. Modify Grades\n");
        printf("6. Display Students\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addNewStudent(students, &numStudents);
                break;
            case 2:
                recordGrades(students, numStudents);
                break;
            case 3:
                displayGrades(students, numStudents);
                break;
            case 4:
                searchStudent(students, numStudents);
                break;
            case 5:
                modifyGrades(students, numStudents);
                break;
            case 6:
                displayStudents(students, numStudents);
                break;
            case 7:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 7);

    return 0;
}

