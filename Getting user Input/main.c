#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*if you want to get an input of an intmj
    int age;
    printf(" Enter your age: ");

    scanf("%d", &age);
    printf("You are %d years old.", age);
    */

    /* if you want to get an input of a double
    double gpa;
    printf("What is your gpa: ");
    scanf("%lf", &gpa);
    printf("You are %f years old.", gpa);
    */

    /* if you want to get an input of a character
    char grade;
    printf("Enter you grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c.", grade);
    */

    /* if you want to get an input of a string
    char name[20];
    printf("What is your name: ", name);
    scanf("%s", name);
    printf("Your name is %s. ",name);
    */

    /* if you want to get an input of a line of texts*/
    char name[20];
    printf("What is your name: ", name);
    fgets( name, 20, stdin);
    printf("Your name is %s. ",name);

    return 0;
}
