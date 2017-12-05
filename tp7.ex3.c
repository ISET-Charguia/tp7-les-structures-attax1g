/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct song {
	char titre[30];
	int  dure;

}s[10];
struct disc{
	int year;
	char title[30];
	struct song liste[10]  ;
	int nbc;

}d[12];

int main(void) {
	int i,j,n,k=0;

	char ch[10];
	printf ("donner n");
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		printf ("donner l'annee");
		scanf ("%d",&d[i].year);
		printf ("donner titre de disc");
			scanf ("%s",d[i].title);
			printf ("donner le nombre des chansons");
			do{
				scanf ("%d",&d[i].nbc);}
			while (d[i].nbc>5);
			for (j=0;j< d[i].nbc;j++){
				printf ("donner le titre chanson");
				scanf ("%s",d[i].liste[j].titre);
				printf ("donne sa dureé");
				scanf ("%d",&d[i].liste[j].dure);




			}



	}
	printf ("donne une chanson");
	scanf ("%s",ch);
	for (i=0;i<n;i++){

				for (j=0;j< d[i].nbc;j++){
					if ( strcmp(ch,d[i].liste[j].titre)==0 ){
						printf ("son titre est =%s \n",d[i].liste[j].titre );
					printf ("son dure est =%d \n",d[i].liste[j].dure );
					k=1;
					}
				}




				}
	if (k==0) {
		printf ("cette chanson n'existe pas");
	}


}
