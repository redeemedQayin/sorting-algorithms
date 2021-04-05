//auxiliary functions
int getLower(int *vet, int n){
	int lower = 0;
	
	for(int i = 1; i < n; i++){
		if(vet[i] < vet[lower]){
			lower = i;
		}
	}

	return lower;
}


//bubble sort
void bubleSort(int *vet, int lenght){
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
}

//selection sort
void selectionSort(int *vet, int lenght){
	int aux, min_index;
	
	for(int i = 0; i < lenght-1; i++){

		min_index = getLower(&vet[i], lenght-i) + i;
		
		aux = vet[i];
		vet[i] = vet[min_index];
		vet[min_index] = aux;
	}
}



