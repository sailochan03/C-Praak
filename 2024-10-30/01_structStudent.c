#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char *name;
    int roll;
    float marks;
} Student;

int main() {

    Student student;
    Student *s_ptr = &student;
    int nameLength;

    printf("Enter student details.\n");
    printf("Enter the number of characters in name: ");
    scanf("%d", &nameLength);
    getchar();

    s_ptr->name = (char *)malloc((nameLength + 1) * sizeof(char));
    if (s_ptr->name == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter name of student: ");
    fgets(s_ptr->name, nameLength + 1, stdin);  
    s_ptr->name[strcspn(s_ptr->name, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &s_ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &s_ptr->marks);

    printf("\n===== Student Details =====\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s_ptr->name, s_ptr->roll, s_ptr->marks);
    
    free(s_ptr->name);

    return 0;
}
