#include <stdio.h>

#define N 5

void leerA(int arr[N]);
void burbuja(int arr [N]);


int main ()
{
    int arreglo [N];

    leerA(arreglo);
    burbuja(arreglo);

    return 0;
}

void burbuja(int arr [N])
{
    int i, j, aux;

    for ( i = 0; i < N-1; i++)
    {
        for ( j = 0; j < N - (i+1); j++)
        {
            if (arr[j]>arr[j+1])
            {
                aux =arr[j+1];
                arr[j+1] = arr[j];
                arr [j]= aux;
            }
            else
            {
                i=N;
            }
            
            
        }   
    }   
}

void leerA(int arr[N])
{
    int i;
    
    for ( i = 0; i < N; i++)
    {
        printf("Arreglo[%d]: ",i);
        scanf("%d", &arr[i]);
    }
  
}
