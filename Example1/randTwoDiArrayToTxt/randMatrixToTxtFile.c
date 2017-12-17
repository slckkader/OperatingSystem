//@author Selçuk.
//Computer Engineering

#include <stdio.h>/*Needed Libraries*/
#include <stdlib.h>/*Needed Libraries*/
#include <time.h>/*Needed Libraries*/

int main() {
	int i = 0;/*İnitializing elements*/
	int j = 0;/*İnitializing elements*/
	int M, N;/*For the array size*/
	srand (time(NULL));/*Create random from the Bios Time.*/
int 	matrix[i][j]; /*Two Dimensional Array Declaration.*/

	scanf("%d %d", &M, &N); /*Limits of Two Dimensional Array.*/

	FILE *file; /*Creating file pointer.*/

	file = fopen("numbers.txt", "w"); /*Open the numbers.txt and write with w operator.*/
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {

			matrix[i][j] = rand() % 100; /*We add some random numbers to the array,this numbers are max 99 and min 0.*/
			fprintf(file, "%d ", matrix[i][j]); /*Print to the file,using fprintf.*/
		}

		fprintf(file, "\n"); /*For the go to next line.*/

	}

	return 0;
}
