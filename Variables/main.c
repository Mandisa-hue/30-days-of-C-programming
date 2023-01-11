#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charcterName[] = "Mandisa";
    int charcterAge = 33;
    printf("There once was a woman named %s \n", charcterName);
    printf("she was %d years old.\n", charcterAge);

    charcterAge = 12;
    printf("She really liked the name %s\n",charcterName);
    printf("but did not like being %d.\n",charcterAge);
    return 0;
}
