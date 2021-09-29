//
// Created by PC on 29/09/2021.
//
#include<stdio.h>
#include "mesfonctions.h"
#include<stdlib.h>
void exercice1()
{
    int nombre1,nombre2;
    printf("donner deux nombres");
    scanf("%d%d",&nombre1,&nombre2);
    getMax(nombre1,nombre2);
    if(getMax(nombre1,nombre2)!=0)
        printf("le plus grand est %d\n",getMax(nombre1,nombre2));
    else
        printf("les deux nombres sont egaux\n");

}
 void exercice2()
 {
    printf("l entier est %d\n",saisirUnEntier());
 }

 void exercice3()
 {   int longueur,largeur;
    printf("donner la longueur et la largeur\n");
   longueur=  saisirUnEntier();
   largeur=   saisirUnEntier();
   printf("le perimetre est %d\n", perimetre(longueur,largeur));
   printf("l aire est %d\n", calculeAire(longueur,largeur));

 }
 void exercice4()
 { int nombre1,nombre2,p;
    nombre1= saisirUnEntier();
    nombre2= saisirUnEntier();
   p= booleen(nombre1,nombre2);
    printf("%d\n",p);
     if(p==1&& nombre2%3==0&& nombre1>10)
         printf("ce nombre est un multiple de 3 superieur a 10\n");
     else if(p==1&& nombre2%3==0&& nombre1<10)
         printf("ce nombre est un multiple de 3 inferieur a 10\n");
     else if(p==1&& nombre2%3!=0)
         printf("ce nombre n est pas un multiple de 3\n");
     else if(p==0)
         printf("ce nombre n est pas un multiple de 3\n");

 }
 void exercice5()
 {  int n,Neleve[25],total;
    printf("donner le nombre de classe\n");
    n= saisirUnEntier();
    total=eleve(Neleve[25],n);


 }