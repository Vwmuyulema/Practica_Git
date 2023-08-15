/*

*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
//declaración de prototipos
void encerar(int [][10], int);
void ingresar(int [][10], int);
void multiplicar(int [][10],int [][10],int [][10],int);
void imprimir(int [][10], int);

//desarrollo de prottipos
void encerar(int mat[10][10], int tam){
	int i,j;
	for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
			mat[i][j]=0;
}
// desarrollo del prototipo ingresar
void ingresar(int mat[10][10], int tam){
	int i,j;
	for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
		scanf("%d",&mat[i][j]);
}
//desarrollo del prototipo imporimir
void imprimir(int mat[10][10], int tam){
	int i,j;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			printf(" %d  ",mat[i][j]);	
		}
		printf("\n");	
	}
}

void multiplicar(int mat1[][10],int mat2[][10],int matR[][10],int tam){
	int i,j,k;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			   for(k=0;k<tam;k++){
				  matR[i][j]=matR[i][j]+(mat1[i][k])*(mat2[k][j]);
			}	
		}
	}
	
}

int main(int argc, char** argv){
	int mat1[10][10];
	int mat2[10][10];
	int matR[10][10];
	int tam;
	printf("\nIngrese el tamanio : ");
	scanf("%d",&tam);
	encerar(mat1,tam);
	encerar(mat2,tam);
	encerar(matR,tam);
	printf("Digite los elementos de la primera matriz :\n");
	ingresar(mat1,tam);
	printf("Digite los elementos de la segunda matriz :\n");
	ingresar(mat2,tam);
	system("cls");
	printf("Primera Matriz:\n");
	imprimir(mat1,tam);
	printf("\n");
	printf("Segunda Matriz\n");
	imprimir(mat2,tam);
	printf("\n");
	printf("Resultado:\n");
	multiplicar(mat1, mat2, matR, tam);
	imprimir(matR,tam);
	
	
	
	return 0;
}
