#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.h"
//Exercice 1 :
void Bonjour()
{
    printf("Bonjour\n");
}
// Exercice 2:
int inverserNombre(int nombre) {
    if (nombre < 100 || nombre > 999) {
        printf("Erreur: Nombre doit être entre 100 et 999.\n");
        return nombre;
    }
    return (nombre % 10) * 100 + 
           ((nombre / 10) % 10) * 10 + 
           (nombre / 100);
}
// Exercice 3:
float calculerProduit(float a, float b) {
    return a * b;
}
// Exercice 4:
bool estPair(int nombre) {
    return nombre % 2 == 0;
}
// Exercice 5:
void comparerNombres(int a, int b) {
    if (a > b) 
        printf("%d > %d\n", a, b);
    else if (a < b) 
        printf("%d < %d\n", a, b);
    else 
        printf("%d = %d\n", a, b);
}
// Exercice 6:
void trierNombres(int a, int b, int c) {
    int temp;
    
    if (a > b) { temp = a; a = b; b = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (a > b) { temp = a; a = b; b = temp; }
    
    printf("Par ordre croissant : [ %d, %d, %d ]\n", a, b, c);
}
// Exercice 16:
void permutationCaracteres(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
// Exercice 17:
int calculerSomme(int a, int b) {
    return a + b;
}