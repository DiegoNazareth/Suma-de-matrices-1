//suma de matrices con las matrices ya predeterminadas, solo se le pedira al usuario los valores para llenarlas 

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j;
	int matriz1[20][20],matriz2[20][20],matriz3[20][20];
	printf("Dame 20 valores para llenar la matriz 1\n");
	 for(i=0;i<20;i++){
	 	for(j=0;j<20;j++){
	 		scanf("%d", &matriz1[i][j]);
		 }
	 }
	 printf("Dame 20 valores para llenar la matriz 2\n");
	 for(i=0;i<20;i++){
	 	for(j=0;j<20;j++){
	 		scanf("%d", &matriz2[i][j]);
		 }
	 }
	 printf("Matriz 1\n");
	 for(i=0;i<20;i++){
	 	for(j=0;j<20;j++){
	 		printf("%4d", matriz1[i][j]);
		 }
		 printf("\n\n");
	 }
	 printf("Matriz 2\n");
	 for(i=0;i<20;i++){
	 	for(j=0;j<20;j++){
	 		printf("%4d", matriz2[i][j]);
		 }
		 printf("\n\n");
	 }
	 //Suma 
	 for(i=0;i<20;i++){
	 	for(j=0;j<20;j++){
	 		matriz3[i][j]=matriz1[i][j]+matriz2[i][j];
		 }
	 }
	 printf("\nSuma de ambas matrices\n");
	 for (i=0;i<20;i++){
	 	for(j=0;j<20;j++){
	 		printf("%4d ", matriz3[i][j]);
		 }
		 printf ("\n\n");
	 }
	 
	return(0);
}
