#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char choice ='y';
int main() {
    do{
    float average_mark;
    int mark_1, mark_2, mark_3 ;
    char student_surname[20]; 
    char student_admission_number[50] ;
    char grade[20];
    // char choice [20];

    printf("Input student's surname : \n");
    scanf("%s",&student_surname );

    printf("Input student's admission number : \n");
    scanf("%s",&student_admission_number);

    printf("Input the student's 3 marks below \n");
    
    do{
    printf("Input mark 1 : \n");
    scanf("%d", &mark_1);

    printf("Input mark 2 : \n");
    scanf("%d", &mark_2);

    printf("Input mark 3 : \n");
    scanf("%d", &mark_3);
    
    if ((mark_1 < 0 || mark_1 > 100) || (mark_2 < 0 || mark_2 > 100) || (mark_3 < 0 || mark_3 > 100))
    printf("Invalid marks plz input correct value \n");

    }while((mark_1 < 0 || mark_1 > 100) || (mark_2 < 0 || mark_2 > 100) || (mark_3 < 0 || mark_3 > 100));

    average_mark = (mark_1 + mark_2 + mark_3) / 3.0;

    
    // Providing grade based on average mark
    if (average_mark >= 70) {
        strcpy (grade,"A\n");
    } 
    else if (average_mark >= 60) {
        strcpy(grade ,"B\n");
    } 
    else if (average_mark >= 50) {
        strcpy(grade ,"C\n");
    } 
    else if (average_mark >= 40) {
        strcpy(grade,"D\n");
    } 
    else {
        strcpy(grade,"FAIL");
    }
    
    printf("students information :\n");
    printf("Student name: %s\n", student_surname);
    printf("Addmision number: %s \n", student_admission_number); 
    printf("Average mark: %.2f \n",average_mark);
    printf("Grade of %s \n",grade);

    printf("do you wish to continue with input of other students: (Y/N) \n");
    scanf("%s",&choice);

    } while (choice =='y' || choice == 'Y');

    return 0;
}
