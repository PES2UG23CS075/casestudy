#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[20];
    int rollno;
    int marks1[6];
    int marks2[6];
    int marks3[6];
};

void display_student(struct student s) {
    printf("Name: %s\n", s.name);
    char subjects[][20] = { "Physics", "Chemi", "EVS", "Mech", "CS", "Math" };
    int total1 = 0, total2 = 0, total3 = 0;

    printf("Subject\t\tISA1\tISA2\tESA\n");
    for (int i = 0; i < 6; i++) {
        printf("%s\t\t%d\t%d\t%d\n", subjects[i], s.marks1[i], s.marks2[i], s.marks3[i]);
        total1 += s.marks1[i];
        total2 += s.marks2[i];
        total3 += s.marks3[i];
    }

    printf("Total\t\t%d\t%d\t%d\n", total1, total2, total3);
    
    float CGPA = ((float)(total1 + total2)  + (float)total3) / 1000;
    float CGPA_10 = CGPA * 10;

    printf("CGPA: %.2f\n", CGPA_10);

    if (CGPA_10 >= 9.0) {
        printf("Grade: A\n");
    } else if (CGPA_10 >= 8.0) {
        printf("Grade: B\n");
    } else if (CGPA_10 >= 7.0) {
        printf("Grade: C\n");
    } else if (CGPA_10 >= 6.0) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
}

struct student* read_students_from_csv(const char* filename, int* count) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Unable to open file");
        exit(EXIT_FAILURE);
    }

    char line[1024];
    int line_count = 0;

    while (fgets(line, sizeof(line), file)) {
        line_count++;
    }
    rewind(file); // Reset file pointer to the beginning

    struct student* students = (struct student*)malloc(line_count * sizeof(struct student));
    if (!students) {
        perror("Memory allocation failed");
        fclose(file);
        exit(EXIT_FAILURE);
    }

    fgets(line, sizeof(line), file); // Skip header line

    int i = 0;
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%[^,],%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
               students[i].name, &students[i].rollno,
               &students[i].marks1[0], &students[i].marks1[1], &students[i].marks1[2], &students[i].marks1[3], &students[i].marks1[4], &students[i].marks1[5],
               &students[i].marks2[0], &students[i].marks2[1], &students[i].marks2[2], &students[i].marks2[3], &students[i].marks2[4], &students[i].marks2[5],
               &students[i].marks3[0], &students[i].marks3[1], &students[i].marks3[2], &students[i].marks3[3], &students[i].marks3[4], &students[i].marks3[5]);
        i++;
    }

    fclose(file); // Close file
    *count = line_count; // Number of students
    return students;
}

void add_student(struct student* students, int* count) {
    struct student new_student;
    printf("Enter name of the student: ");
    scanf("%s", new_student.name);
    printf("Enter roll number of the student: ");
    scanf("%d", &new_student.rollno);
    printf("Enter marks for ISA1 (Physics, Chemi, EVS, Mech, CS, Math): ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &new_student.marks1[i]);
    }
    printf("Enter marks for ISA2 (Physics, Chemi, EVS, Mech, CS, Math): ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &new_student.marks2[i]);
    }
    printf("Enter marks for ESA (Physics, Chemi, EVS, Mech, CS, Math): ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &new_student.marks3[i]);
    }

    students[*count] = new_student;
    (*count)++;
}

int main() {
    int choice;
    int rollno;
    int student_count;
    struct student* students = read_students_from_csv("students.csv", &student_count);

    printf("1. Append a new student\n");
    printf("2. Search for marks of an existing student\n");
    printf("3.To see present students presnt in class\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        add_student(students, &student_count);
    } else if (choice == 2) {
        printf("Enter roll number of the student: ");
        scanf("%d", &rollno);

        if (rollno < 1 || rollno > student_count) {
            printf("Invalid roll number\n");
            free(students);
            return 1;
        }

        display_student(students[rollno - 1]);
    }
else if(choice==3){
    printf("\nUpdated List of Students:\n");
    for (int i = 0; i < student_count; i++) {
        printf("%d. %s\n", i + 1, students[i].name);
    }}
 else {
        printf("Invalid choice\n");
        free(students);
        return 1;
    }
     

    free(students); // Free allocated memory
    return 0;
}
