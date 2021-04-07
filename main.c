#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "library/Csort.h"
//------------[MENU]------

void layout(){
	system("clear");
	printf("------- sorting algorithms ------------\n-enter 0 to exit-\n\n");

}

//--options -----
//algorithm
void menu1_alg(int *alg){

	int n;
	layout();
	printf("\n[SELECT THE ALGORITHM]\n");
	printf("1- buble sort\n");
	printf("2- selection sort\n");
	printf("3- insertion sort\n");
	printf("4- merge sort\n");
	printf("5- quick sort\n");

	scanf("%d", alg);

}

//lenght of vector
void menu2_lenghtVet(int *lenght){

	int n;
	layout();
    printf("[SELECT LENGHT OF THE VECTOR]\n");

	scanf("%d", lenght);

}

//type of vector
void menu3_typeOfVet(int *type, int *vet, int n){

	int aux;
	layout();
    printf("[SELECT VECTOR TYPE]\n");

	printf("1- full random\n");
	//printf("2- numbers already sorted asc\n");
	//printf("3- enter vector\n");

	scanf("%d", type);

	//colocar em uma funçãon separada
	switch(*type){
		//random
		case 1:
			srand(time(NULL));
			for(int i = 0; i < n; i++){
				vet[i] = rand()%100;
			}
		break;

		default:
			printf("Invalid option!\n[ABORT]\n");
			*type = 0;

	}
}
//--------------------

void printVector(int *vet, int lenght){

	for(int i=0; i < lenght; i++){
		printf("[%d] ",vet[i]); 
	}
	printf("\n");
}

int main(){
	int i, op, algorithm, lenght_vet, type;
	
	do{

		menu1_alg(&op);
		if(!op) break; else algorithm = op;

		menu2_lenghtVet(&op);
		if(!op) break; else lenght_vet = op;

		int vet[lenght_vet];

		menu3_typeOfVet(&op, vet, lenght_vet);
		if(!op) break; else type = op;

		system("clear");


		//validation
		if(lenght_vet)

		printf("\ninitial vector:\n");
		printVector(vet, lenght_vet);

		switch(algorithm){
			case 1:
				printf("\n[RUNNING BUBBLE SORT]\n");
				bubleSort(vet, lenght_vet);
			break;

			case 2:
				printf("\n[RUNNING SELECTION SORT]\n");
				selectionSort(vet, lenght_vet);
			break;

			case 3:
				printf("\n[RUNNING INSERTION SORT]\n");
				insertionSort(vet, lenght_vet);
			break;

			case 4:
				printf("\n[RUNNING MERGE SORT]\n");
				mergeSort(vet, 0, lenght_vet);
			break;

			case 5:
				printf("\n[RUNNING QUICK SORT]\n");
				quickSort(vet, 0, lenght_vet-1);

		}
		
		printf("\nsorted vector:\n");
        printVector(vet, lenght_vet);

		printf("\n");
		getchar();
		getchar();

	} while(op);

	return 0;
}
