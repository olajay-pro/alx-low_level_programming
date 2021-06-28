#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) 
{
    int i;
    char pass[13];
     char capLetter = 'A' + (rand() % 26); 
     char letter = 'a' + (rand() % 26); 
    srand((unsigned int)(time(NULL)));

    printf("Press enter to get a twelve-character password\n");
    getchar();

    for (i = 0; i < 4; i++) 
    {
        pass[ 3 * i ] = '0' + (rand() % 10); 
       
        pass[(3 * i) + 1] = capLetter;
       
        pass[(3 * i) + 2] = letter;
    }
    pass[3 * i] = '\0'; 
    printf("generated password : %s\n\n",pass); 

    printf("\n\n");
    
    return (0);
}
