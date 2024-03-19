//
//  main.c
//  console2_pointeurs
//
//  Created by asap on 19/03/2024.
//

#include <stdio.h>

void decoupeMinutes(int* pointeurHeures, int *pointeurMinutes);

void triplePointeur(int *pointeurNombre);
int main(int argc, const char * argv[]) {
    /*
    int age=20;
    int *pointeurAge=&age;
    
    printf("%d\n", pointeurAge);
    printf("%d\n", *pointeurAge);
    */
    /*
    int nombre=5;
    triplePointeur(&nombre);
    printf("%d\n", nombre);
    */
    int heures=0, minutes=90
    decoupeMinutes(&heures, &minutes);
    printf("")
    return 0;
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes){
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurHeures * 60;
}
void triplePointeur(int *pointeurNombre){
    *pointeurNombre *= 3;
}
