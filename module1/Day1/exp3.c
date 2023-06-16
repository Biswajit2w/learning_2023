#include <stdio.h>

int main()
{
    
    int rollNo;
    char name[50];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;

    
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    getchar(); 

    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter Marks of Physics: ");
    scanf("%f", &physicsMarks);
    
    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);
    
    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);

    
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    printf("Total Marks: %.2f\n", totalMarks);
    
    percentage = (totalMarks / 300) * 100;
    printf("Percentage: %.2f%%\n", percentage);
    
    printf("\n-----  Summary -----\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

