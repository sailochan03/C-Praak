#include <stdio.h>
#include <stdbool.h>

int main () {
    printf("\n\tWelcome to evaluation");
    printf("\n--------------------------------------\n");

    // All User inputs

    float attendancePercentage;
    printf("\nEnter your attendance percentage: ");
    scanf("%f", &attendancePercentage);

    int noOfAssignments;
    printf("\nEnter the number of assignments submitted: ");
    scanf("%d", &noOfAssignments);

    float quizMarks;
    printf("\nEnter the best secured quiz mark: ");
    scanf("%f", &quizMarks);

    float midSemMarks;
    printf("\nEnter the mid semester marks secured: ");
    scanf("%f", &midSemMarks);

    float practicalMarks;
    printf("\nEnter the practical marks secured: ");
    scanf("%f", &practicalMarks);

    float theoryMarks;
    printf("\nEnter the theory marks secured: ");
    scanf("%f", &theoryMarks);

    // All Calculations

    // Internal calculations
    int attendanceMarks = attendancePercentage >= 75.0 ? 5 : 0 ;

    float assignmentMarks = noOfAssignments * 2;

    midSemMarks /= 2;

    float internalMarks = attendanceMarks + assignmentMarks + quizMarks + midSemMarks;
    bool isPassedInInternal = internalMarks >= 16.0 ? true : false;

    // External calculations
    theoryMarks *= (3.0 / 4);

    float externalMarks = practicalMarks + theoryMarks;

    bool isPassedInExternal = externalMarks >= 24.0 ? true : false;

    float totalMarks = internalMarks + externalMarks;
    bool isPassedOverall = totalMarks >= 40.0 ? true : false;

    bool isPassed = isPassedInInternal && isPassedInExternal && isPassedOverall;

    // Grade calculation
    char grade;
    
    if (totalMarks >= 90) {
        grade = 'O';
    } else if (totalMarks >= 80 && totalMarks < 90) {
        grade = 'A';
    } else if (totalMarks >= 70 && totalMarks < 80) {
        grade = 'B';
    } else if (totalMarks >= 60 && totalMarks < 70) {
        grade = 'C';
    } else if (totalMarks >= 50 && totalMarks < 60) {
        grade = 'D';
    } else if (totalMarks >= 40 && totalMarks < 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }


    // Summary of student result

    printf("\n\tYour Result\n");
    printf("---------------------------\n");

    printf("\nTotal internal marks secured: %.2f", internalMarks);
    printf("\nTotal external marks secured: %.2f", externalMarks);
    printf("\nTotal marks secured: %.2f", totalMarks);

    if (grade == 'F') {
        printf("\n\nYou are failed in the subject.");
        printf("\nGrade: %c\n\n", grade);
    } else {
        printf("\n\nYou are passed in the subject.");
        printf("\nGrade: %c\n\n", grade);
    }
    
    return 0;
}