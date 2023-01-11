#include <stdio.h>
#include <stdlib.h>

int main()
{

   /*  how to print words under each  other */
    printf("Hello\nWorld\n");

    /* how to print semi colon */
    printf("Hello\"World!\n");

     /* how to print with two lines under each other*/
    printf("Hello World\n\n");

     /*using double and string */
    printf("My favorite number is %d.\n", 500);
    printf("My favorite %s is %d.\n","number",300);
    printf("My favorite %s is %f because I am %d years old.\n\n", "number", 656.7, 20);

      /* how to input a variable */
    int favNum = 90;
    printf("I like the %s because it reminds me of my mom , who is %d\n", "number", favNum);


    return 0;
}
