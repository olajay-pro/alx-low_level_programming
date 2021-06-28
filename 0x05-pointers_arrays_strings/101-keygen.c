#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    int i;
    char pass[12];
    char capLetter = 'A' + (rand() % 26);
    char letter = 'a' + (rand() % 26);
    srand((unsigned int)(time(NULL)));

    printf("Press enter to get a twelve-character password\n");
    getchar();

    for (i = 0; i < 4; i++) {
        pass[i] = rand() % 9;
        
        pass[i + 2] = capLetter;
        
        pass[i + 3] = letter;
        printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
    }
    printf("\n\n");
    
    return (0);
}
