#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//------------[MENU]------

//algorithm
void menu1_alg(int *alg){

	system("clear");
	printf("------- sorting algorithms ------------\n\n[SELECT THE ALGORITHM]\n");

	printf("1- buble sort\n");


	scanf("%d", alg);
}

//lenght of vector
void menu2_lenghtVet(int *lenght){

	system("clear");
        printf("------- sorting algorithms ------------\n\n[SELECT LENGHT OF THE VECTOR]\n");

	scanf("%d", lenght);

}

//type of vector
void menu3_typeOfVet(int *type, int *vet, int n){
	system("clear");
        printf("------- sorting algorithms ------------\n\n[SELECT VECTOR TYPE]\n");

	printf("1- random\n");
	printf("2- sorted\n");
	printf("3- repeated\n");

	scanf("%d", type);

	
	//random numbers
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		vet[i] = rand()%(n*100);
	}
}
//--------------------

//-------- Algorithms ---------

//buble sort
int bubleSort(int *vet, int lenght){
	int i;
	for(i=lenght; i>1; i--){
		for(int j = 0; j < i-1; j++){
			if( vet[j] > vet[j+1]){
				int aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}

	}
	return 0;
}

int main(){
	int i, op, algorithm, lenght_vet, type;
	
	do{

		menu1_alg(&algorithm);
		menu2_lenghtVet(&lenght_vet);
		int vet[lenght_vet];
		menu3_typeOfVet(&type, vet, lenght_vet);

		system("clear");
		printf("\nCurrent vector:\n");
		for(i=0; i < lenght_vet; i++){
			printf("[%d] ",vet[i]); 
		}

		bubleSort(vet, lenght_vet);
		
		printf("\nvector order:\n");
                for(i=0; i < lenght_vet; i++){
                        printf("[%d] ",vet[i]);
                }
		printf("\n");
		getchar();
		getchar();

	} while(op);

	return 0;
}
