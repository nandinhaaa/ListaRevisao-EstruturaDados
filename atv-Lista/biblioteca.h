#include <stdio.h>
#include <stdlib.h>
long long compBs=0, compSs=0, compIs=0;

void troca(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b=temp;
}// fim troca
//----------------------
void geraVet(int v[], int n){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++)
	   v[i]=rand()%500+1;
}// fim geraV
//-----------------------------
void printVetor(int v[],int n){
	int i;
	for(i=0;i<n;i++)
	  printf("%d |",v[i]);
	printf("\n");  
}// fim printVetor
//-----------------------------
void printVetor2(int v[],int ini, int fim){
	int i;
	for(i=ini;i<=fim;i++)
	  printf("%d |",v[i]);
	printf("\n");  
}// fim printVetor - Busca Binaria
//------------- Selection Sort ---------------
int minIndex(int v[], int i, int n){
	int j, imenor = i;
	for(j=i+1;j<n;j++){
		compSs++;
		if(v[j]<v[imenor])
			imenor=j;
    }// fim for
	return imenor;		
}

void ssort(int v[], int n){
	int i, indiceMenor;
	for(i=0;i<n-1;i++){
		indiceMenor = minIndex(v,i,n);
		troca(&v[i], &v[indiceMenor]);
	}// fim for
}
//-------------- Isort--------------------------
void insert(int v[], int i){
	int eleito = v[i];
	int c = i-1;
	while(c>=0 && eleito<v[c]){
		compIs++; // mudar
		v[c+1] = v[c]; // deslocar
		c--;
	}//fim while
	compIs++;
	v[c+1] = eleito;
}

void isort(int v[], int n){
	int i;
	for(i=1;i<n;i++){
		insert(v,i);
	}//fim for
}
//--------------------------------
