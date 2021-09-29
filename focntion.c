//
// Created by GUY on 29/09/2021.
//

#include "focntion.h"

int getMax(int n,int m){
    if (n>=m){
        return n;
    }
    else {
        return m;
    }
}

int getMax2(int n, int m){
    return (n>=m)? n:m;
}

int saisirEntier(){
    int n=0;
    printf("Saisissez un entier");
    scanf("%i", &n);
    return n;
}

int calculAire(int n, int m){
    int a=0;
    n=saisirEntier();
    m=saisirEntier();
    a=n*m;
    return a;
}

int calculPerimetre(int n, int m){
    int p=0;
    n=saisirEntier();
    m=saisirEntier();
    p=2*(n+m);
    return p;
}

int multipleOuNon(int n, int m){
    return (n%m==0)?1:0;
}

#define VALMAX 10
int multi3sup10(int n, int m) {
    (n>=VALMAX)? printf("L'entier est supérieur ou égal à 10"): printf("L'entier est inférieur à 10");
    if (m>=n) {
        return (m%n==0)?1:0;
    }
    else if (m<n) {
        return (n%m==0)?1:0;
    }
}

float moyenne3Notes(int a, int b, int c){
    float moy=0;
    if (a<0 || b<0 || c<0 || a>20 || b>20 || c>20){
        return -1;
    }
    else{
        moy=(a+b+c)/3;
        return moy;
    }
}

int sommeElevesClasse(int n){
    int s=0, i=0, m=0;
    for (i=1;i<=n;i++) {
        printf("Saisissez le nombre d'eleves pour la %ie classe",i);
        scanf("%i", &m);
        s=s+m;
        }
    return s;
}

int multipleDe2Et7(int n) {
    return (n % 2 == 0 && n % 7 == 0)? 1:0;
}

int nombreEtagesNPierres(int n) {
    int i=1;
    while (n>0) {
        i=i+1;
        n=n-i*i;        //on soustrait le nbr de pierres par étage (pyramide) au nbr total
        }
    i=i-1;
    return i;
}

float moyenneNNombres (int s, int i) {       //s= une somme de nombres et i= le nombre d'entre eux
    return s/i;
}








