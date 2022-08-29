#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define TAM 10
#define MIN 1
#define MAX 100

 int main()
{
    int arr[TAM];
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    // alimentando vetor 
    feedArray(arr);

    printf("Vetor criado \n");
    printArray(arr, arr_size);
 
    quickSort(arr, 0, arr_size - 1);
 
    printf("\nVetor Ordenado \n");
    printArray(arr, arr_size);
    return 0;
}



void quickSort(int * V, int inicio, int fim){
    int piv;
    if(fim > inicio){
        piv = particiona(V, inicio, fim);
        quickSort(V, inicio, piv+1);
        quickSort(V, piv+1, fim);
    }

}


int particiona(int * V, int inicio, int fim){
int esq , dir, piv, aux;
esq = inicio;
dir = fim;
piv = V[inicio];
while (esq < dir)
{
    while(V[esq] <= piv)
        esq++;
    while(V[dir] > piv)
        dir--;
    if (esq< dir)
    {
         aux = V[esq];
         V[esq] = V[dir];
         V[dir] = aux;
    }
}
V[inicio] = V[dir];
V[dir] = piv;
return dir;

 }

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void feedArray(int arr[])
{
   srand(time(NULL));
    int * numeros = malloc((MAX - MIN) * sizeof(int));
    if (!numeros) exit(EXIT_FAILURE);
    for (int i = 0; i < MAX - MIN; i++) {
        numeros[i] = i + MIN;
    }
    shuffle(numeros);
    for (int i = 0; i < TAM; i++) {
       arr[i]= numeros[i];
    }
     
}

void shuffle(int *array) {
    for (int i = MAX - MIN - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int tmp = array[j];
        array[j] = array[i];
        array[i] = tmp;
    }
}
