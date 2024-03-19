//
//  main.c
//  console2_pointeurs
//
//  Created by asap on 19/03/2024.
//

#include <stdio.h>

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);

int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;

    decoupeMinutes(&heures, &minutes);

    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60;
}
