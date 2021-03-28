#include <stdio.h>
#include <stdlib.h>

//--------[MENU]------
void menu1_alg(int *alg){

	system("clear");
	printf("------- sorting algorithms ------------\n\n[SELECT THE ALGORITHM]\n");

	printf("1- buble sort\n");


	scanf("%d", alg);
}
void menu2_lenghtVet(int *lenght){

	system("clear");
        printf("------- sorting algorithms ------------\n\n[SELECT LENGHT OF THE VECTOR]\n");

	scanf("%d", lenght);

}
void menu3_typeOfVet(int *type){
	system("clear");
        printf("------- sorting algorithms ------------\n\n[SELECT VECTOR TYPE]\n");

	printf("1- random\n");
	printf("2- sorted\n");
	printf("3- repeated\n");

	scanf("%d", type);
}
//--------------------

int main(){
	int op, algorithm, lenght_vet, type;
	do{

		menu1_alg(&algorithm);
		menu2_lenghtVet(&lenght_vet);
		menu3_typeOfVet(&type);

		//apagar isso depois
		printf("as opcoes escolhidas foram:\n%d, %d, %d\n\n", algorithm, lenght_vet, type);
		op = algorithm;
		getchar();
		getchar();

	} while(op);

	return 0;
}
