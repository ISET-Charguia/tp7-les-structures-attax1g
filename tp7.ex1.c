/*
 ============================================================================
 Name        : ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct computer {
	int serie;
	int proc;
	int vitesse;
	int taille;
}c[10];


int main(void) {
	int i,max=0,k=0;
	for (i=0;i<2;i++){
	printf ("entrer le num serie %d \n",i);
	scanf ("%d",&c[i].serie);
	printf ("entrer le num proc \n");
		scanf ("%d",&c[i].proc);
	printf ("entrer le vitesse \n");
	scanf ("%d",&c[i].vitesse);
	if (c[i].vitesse>max){
		max=c[i].vitesse;
		k=i;
	}
	printf ("entrer le taille \n");
	scanf ("%d",&c[i].taille);
	}
	printf ("num serie= %d \t type proc= %d \t vitesse= %d \t taille= %d",c[k].serie,c[k].proc,c[k].taille);



}
