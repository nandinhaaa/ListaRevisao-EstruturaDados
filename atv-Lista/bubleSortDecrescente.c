#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"

void bsort(int v[], int n)
{
    int i,j;
    int t, g;
    for(i=1;i<n;i++)
    {
        t = 0;
        for(j=0;j<n-i;j++)
        {
            if(v[j]<v[j+1])
            {
                troca(&v[j],&v[j+1]);
                t = 1;
            }
        }
        if (t == 0)
        {
            break;
        }
    }
}
//-------------------------
//-----------------------------------
int main(){
    int vet, n,i;
    printf("Tamanho do vetor:");
    scanf("%d",&n);
    vet = malloc(sizeof(int)*n);
    geraVet(vet,n);
    printVetor(vet,n);
    bsort(vet,n);
    printf("Vetor ordenado:\n");
    printVetor(vet,n);

}
