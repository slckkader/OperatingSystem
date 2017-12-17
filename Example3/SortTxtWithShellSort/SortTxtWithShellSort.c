//@author Selçuk.
//Computer Engineering

#include <stdio.h>/*Needed Libraries*/
#include <stdlib.h>/*Needed Libraries*/
#include <time.h>/*Needed Libraries*/

int main() {

	int i, j; /*Declaration Counters.*/

	int matrix[10][10]; /*Declaration a 10x10 integer array.*/
	srand (time(NULL));

FILE	*file; /*Creating a file pointer.*/

	file = fopen("sorted.txt", "w"); /*Open the sorted.txt and write with w operator.*/

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {

			matrix[i][j] = rand() % 10000; /*Create random numbers max 9999 min 0*/
			fprintf(file, "%d ", matrix[i][j]);/*Write to the matrix using fprintf.*/
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
		fprintf(file, "\n");/*For the next line.*/

	}
	fclose(file);/*Close the file.*/
	system("sort -n -k3 sorted.txt -o sorted.txt"); /*Sorting using sort(shell command) with -n(numerical).*/

}

