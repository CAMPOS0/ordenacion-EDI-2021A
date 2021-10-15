#include <stdio.h>

#define N 5

void leerA(int arr[N]);
void insercion(int arr [N]);


int main()
{
    int arreglo [N];

    leerA(arreglo);
    insercion(arreglo[N]);

    return 0;
}

void insercion(int arr [N])
{
    int actual, aux, mover;

    for ( actual = 1; actual < N; actual++)
    {
        for ( mover = actual; mover > 0 && arr[mover] < arr[mover - 1]; mover = mover -1)
        {
            aux = arr [mover];
            arr [mover] = arr [mover -1 ];
            arr[mover-1] = aux;
        }
        
    }
    
}

void leerA( int arr[N])
{
    int i;
    
    for ( i = 0; i < N; i++)
    {
        printf("Arreglo[%d]: ",i);
        scanf("%d", &arr[i]);
    }
}
