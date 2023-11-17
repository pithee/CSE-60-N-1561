#include <stdio.h>

int main() {
    int numberOfSubjects;

    printf("Please enter the number of subjects: ");
    scanf("%d", &numberOfSubjects);

    if (numberOfSubjects <= 0) {
        printf("Invalid number of subjects. Exiting the program.\n");
        return 1; // Return a non-zero value to indicate an error
    }

  
    float gpaArray[numberOfSubjects];

    for (int i = 0; i < numberOfSubjects; ++i) {
        printf("Enter GPA for Course %d: ", i + 1);
        scanf("%f", &gpaArray[i]);
    }

    float sum = 0.0;
    for (int i = 0; i < numberOfSubjects; ++i) {
        sum += gpaArray[i];
    }
    float averageGPA = sum / numberOfSubjects;

    printf("\nAverage GPA: %.2f\n", averageGPA);

    printf("Individual GPAs:\n");
    for (int i = 0; i < numberOfSubjects; ++i) {
        printf("Course %d: %.2f\n", i + 1, gpaArray[i]);
    }

    return 0;
}
