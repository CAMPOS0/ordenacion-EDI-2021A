#include <stdio.h>

#define N 8

void leerA(int arr[N]);


int main()
{
    int arreglo [N];

    leerA(arreglo);
    
    return 0;
}

void seleccion(int arr[N])
{
    int actual, pos;
    int aux;

    for ( actual = 0; actual < N -1; actual++)
    {
        for ( pos = actual +1; pos < N; pos++)
        {
            if (arr[pos]<arr[actual])
            {
                aux = arr[pos];
                arr[pos] = arr [actual];
                arr[actual] = aux;
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
