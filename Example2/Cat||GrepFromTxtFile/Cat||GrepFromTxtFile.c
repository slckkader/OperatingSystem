//@author Selçuk.
//Computer Engineering

#include <stdio.h>/*Needed Libraries*/
#include <stdlib.h>/*Needed Libraries*/

int main() {
	srand (time(NULL));int k[1000]; /*A integer array Max 1001 elements*/
	int i;

	FILE *file=fopen("numbers2.txt","w"); /*Open numbers2.txt and write with w operator.*/

	for(i=0;i<1000;i++) {
		k[i]=100+rand()%900; /*Create random number max 999 min 100.*/
		fprintf(file,"%d \n",k[i]); /*Write to file using fprintf.*/

	}

	system("cat numbers2.txt | grep '^2'"); /*Open with cat(it is a shell command) and choose only begin with 2.*/

}

