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

void swap(int *vet, int n1, int n2){
	int aux = vet[n1];
	vet[n1] = vet[n2];
	vet[n2] = aux;
}


void merge(int *vet, int begin, int mid, int end){
	int *aux;
	aux = (int *)malloc((end-begin)*sizeof(int));
	int i = begin, j = mid, k = 0;

	while(i < mid && j < end){
		if(vet[i] <= vet[j]) aux[k++] = vet[i++];
		else
			aux[k++] = vet[j++];
	}
	while(i < mid) aux[k++] = vet[i++];
	while(j < end) aux[k++] = vet[j++];

	for(i=begin; i < end; i++)
		vet[i] = aux[i-begin];
	free(aux);
	
}

int getPivot(int *vet, int begin, int end){
	int pivot = vet[end];
	int i = begin;
	for(int j = begin; j < end; j++){
		if(vet[j] <= pivot){
			int aux = vet[j];
			vet[j] = vet[i];
			vet[i++] = aux;
		}
	}
	int aux = vet[end];
	vet[end] = vet[i];
	vet[i] = aux;

	return i;
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
		
		swap(vet, i, min_index);
	}
}

//insertion sort
void insertionSort(int *vet, int lenght){
	int i, j, aux;
	for(i=1; i < lenght; i++){
		for(j=i; vet[j] < vet[j-1] && j > 0; j--){
			swap(vet, j, j-1);
		}
		
	}
}

//merge sort
void mergeSort(int *vet, int begin, int end){
	if(end-begin > 1){
		int mid = (end+begin)/2;
		mergeSort(vet, begin, mid);
		mergeSort(vet, mid, end);
		merge(vet, begin, mid, end);
			
	}
}

void quickSort(int *vet, int begin, int end){
	if(end>begin){
		int pivot = getPivot(vet, begin, end);
		quickSort(vet, begin, pivot-1);
		quickSort(vet, pivot+1, end);
	}
}