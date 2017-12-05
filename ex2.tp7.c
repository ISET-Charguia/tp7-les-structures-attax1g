/*
 ============================================================================
 Name        : tp7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct player {
	char name[30];
	char date [30];
	char nationalite [30];
	char sex [30];
}p[30];
int main(void) {
	int n,i;
printf ("donner n");
scanf ("%d",&n);
for (i=0;i<n;i++){
	printf ("entrer ton nom \n");
	scanf ("%s",&p[i].name);
	printf ("entrer ton date de ness \n");
scanf ("%s",&p[i].date);
	printf ("entrer ton nationalite \n");
	scanf  ("%s",&p[i].nationalite );
	printf ("entrer ton sex \n");
	scanf  ("%s",&p[i].sex);

}
for (i=0;i<n;i++){
	if (strcmp("tuni", p[i].nationalite)==0){
		printf ("name = %s \t type date = %s \t nationalite= %s \t sex = %s",p[i].name,p[i].date,p[i].nationalite,p[i].sex);
	}
}
}
