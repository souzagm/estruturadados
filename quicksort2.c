#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define TAM 10
#define MIN 1
#define MAX 100

 int main()
{
      printf("Vetor criado \n");
    int arr[TAM] = {5,4,6,10,8,7,3,2,1,12};
    int arr_size = 10;
 
    // alimentando vetor 
   // feedArray(arr);

    printf("Vetor criado \n");
    printArray(arr, arr_size);
 
    quickSort(arr, 0, arr_size - 1);
 
    printf("\nVetor Ordenado \n");
    printArray(arr, arr_size);
    return 0;
}



/*void quickSort(int *V, int inicio, int fim){
    int piv;
    if(fim > inicio){
        piv = particiona(V, inicio, fim);
        quickSort(V, inicio, piv+1);
        quickSort(V, piv+1, fim);
    }

}


int particiona(int *V, int inicio, int fim){
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

*/