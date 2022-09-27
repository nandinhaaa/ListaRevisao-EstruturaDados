#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void trocaChar(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b=temp;
}

int minIndexChar(char v[], int i, int n){
    int j, imenor = i;
    for(j=i+1;j<n;j++)
        if(v[j]<v[imenor]){
            imenor=j;
        }

    return imenor;
}

void ssortCharacter(char v[], int n){
    int i, indiceMenor;
    for(i=0;i<n-1;i++){
        indiceMenor = minIndexChar(v,i,n);
        trocaChar(&v[i], &v[indiceMenor]);
    }// fim for
    
}

int main (){
int n,i;
char *vet;
printf("Digite o tamanho do vetor: "); 
scanf("%d",&n);
vet=malloc(sizeof(char) *n);
for (i=0; i<n; i++){
	printf("Digite o caractere: "); 
	fflush(stdin); 
	scanf("%c",&vet[i]); 
}
for (i=0; i<n; i++){
	printf("%c - ", vet[i]); 
}
ssortCharacter(vet,n);
printf("\n");
for (i=0; i<n; i++){
	printf("%c - ", vet[i]); 
}

}

