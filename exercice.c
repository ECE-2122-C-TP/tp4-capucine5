//
// Created by GUY on 29/09/2021.
//

#include <stdio.h>
#include "focntion.h"
#include "cours4.h"

void exercice1(){
    int n=0, m=0;
    printf("Saisissez un nombre");
    scanf("%i",&n);
    printf("Saisissez un autre entier");
    scanf("%i",&m);
    printf("%i",getMax(n,m));
    return;
}

void exercice1ternaire(){
    int n=0, m=0;
    printf("Saisissez un nombre");
    scanf("%i",&n);
    printf("Saisissez un autre entier");
    scanf("%i",&m);
    printf("%i",getMax2(n,m));
    return;
}

void exercice2(){
    printf("%i", saisirEntier());
}

void exercice3aire(){
    int n=0, m=0;
    printf("%i", calculAire(n,m));
}

void exercice3perimetre(int n, int m){
    printf("%i", calculPerimetre(n,m));
}

void exercice4(int n, int m){
    m=3;
    n=saisirEntier();
    printf("%i\n", multipleOuNon(n,m));
    (n>=10)? printf("Le nombre rentre est superieur ou egal a 10\n"):printf("Le nombre rentre est inferieur a 10");
}



void exercice5(){
    int a=0, b=0, c=0;
    float m=0;
    a=saisirEntier();
    b=saisirEntier();
    c=saisirEntier();
    m=moyenne3Notes(a,b,c);
    printf("%f",m);
}

void exercice5plus7() {
    int n=0, s=0;
    printf("Saisissez le nombre de classes");
    scanf("%i", &n);
    s=sommeElevesClasse(n);
    printf("Le nombre total d eleves est de %i", s);
}

void exercice5plus8() {
    int n=0;
    printf("Saisissez un nombre");
    scanf("%i",&n);
    while (multipleDe2Et7(n)!=1) {
        printf("Ressaisissez un nombre");
        scanf("%i", &n);
    }
}

void exercice5plus9(){
    int i=0, n=0;
    printf("Saisissez le nombre de pierres");
    scanf("%i",&n);
    i= nombreEtagesNPierres(n);
    printf("Il sera possible de construire %i etage(s)", i);
}

void exercice5plus10() {
        int n=0, i=0;
        float s=0;
        while (n>=0)
        {
            n=saisirEntier();    // i entiers sont saisis puis sommés
            s=s+n;
            i=i+1;
        }
        i=i-1;            //on soustrait l iteration de l entier negatif
        s=s-n;            //on soustrait la valeur de l entier negatif
        s=moyenneNNombres(s,i);
        printf("La moyenne des nombres saisis est de %f",s);
}













