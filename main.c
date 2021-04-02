#include <stdio.h>
#include <stdlib.h>

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
	for(int i = 0; i < n; i++){
		vet[i] = i;
	}
}
//--------------------

//-------- Algorithms ---------

//buble sort
int bubleSort(){
	
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
