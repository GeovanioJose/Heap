#ifndef __HEAP_H__
#define __HEAP_H__

#include<stdio.h>
#include<stdlib.h>

#define MAX 2000000

typedef struct HEAP{	
	int v[MAX];
	int tam;
}HEAP;


void help();
int pai(int i);
int esq(int i);
int dir(int i);
void maxHeapify(HEAP * h, int i);
void minHeapify(HEAP * h, int i);
void construirHeapMin(HEAP * h);
void construirHeapMax(HEAP * h);
int inserirForaDeOrdem(HEAP * h, int valor);
void imprimirArranjo(HEAP *h);
void heapSortMax(HEAP * h);
void heapSortMin(HEAP * h);
int inserirHeap(HEAP * h, int chave);
void heapSalvar(HEAP* h, char *argv);
void lerArquivoMax(HEAP *h, char *argv);
void lerArquivoMin(HEAP *h, char *argv);
void lerheap(HEAP *h, FILE *fp);



#endif
