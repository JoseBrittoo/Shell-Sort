
#include <stdio.h>
#include <time.h>
#define TAM 100000

// Shell sort
void shellSort(int array[], int n) {
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

void main(){
	int vetor[TAM];

	int x=0;

	for(int i = TAM; i != 0; i--){
        vetor[x] = i;
        x++;
	}

//CASO 1

clock_t t;

t = clock();
shellSort(vetor, TAM);
t = clock() - t;
printf("Caso 1 \n");
printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC)));
printf("\n \n");


//CASO 2

int vetor2[TAM];


	for(int i = 0; i < TAM; i++){
        vetor2[i] = i+1;
	}


clock_t t2;

t2 = clock();
shellSort(vetor2, TAM);
t2 = clock() - t2;
printf("Caso 2 \n");
printf("Tempo de execucao: %lf", ((double)t2)/((CLOCKS_PER_SEC)));
printf("\n \n");

int vetor3[TAM];
	x=TAM/2;

	for(int i = 0; i < TAM/2; i++){
        vetor3[i] = i+1;
	}
	for(int i = TAM; i != TAM/2; i--){
        vetor3[x] = i;
        x++;
	}

//CASO 3

clock_t t3;

t3 = clock();
shellSort(vetor3, TAM);
t3 = clock() - t3;
printf("Caso 3 \n");
printf("Tempo de execucao: %lf", ((double)t3)/((CLOCKS_PER_SEC)));
printf("\n \n");



int vetor4[TAM];
	x=0;

	for(int i = TAM/2; i != 0; i--){
        vetor4[x] = i;
        x++;
	}

	for(int i = TAM/2; i < TAM; i++){
        vetor4[i] = i+1;
	}

//CASO 4

clock_t t4;

t4 = clock();
shellSort(vetor4, TAM);
t4 = clock() - t4;
printf("Caso 4 \n");
printf("Tempo de execucao: %lf", ((double)t4)/((CLOCKS_PER_SEC)));
printf("\n \n");


//CASO 5

int vetor5[TAM];
	srand(time(NULL));


	for(int i = 0; i < TAM; i++){
        vetor5[i] = rand();
	}

clock_t t5;

t5 = clock();
shellSort(vetor5, TAM);
t5 = clock() - t5;
printf("Caso 5 \n");
printf("Tempo de execucao: %lf", ((double)t5)/((CLOCKS_PER_SEC)));
printf("\n \n");

}
