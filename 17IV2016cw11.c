#include <stdio.h>
#include <math.h>

void transponuj(int MAX1, int MAX2, double A[MAX1][MAX2], double A_T[MAX2][MAX1]){
	int i,j;
	for(i=0;i<MAX1;i++){ for(j=0;j<MAX2;j++){ A_T[j][i]=A[i][j];
												}
						}
	
	}	

int main(){
	int MAX1, MAX2, i, j; 
	printf("Podaj wymiary macierzy: \n");
	scanf("%d",&MAX1);
	printf("na \n");
	scanf("%d",&MAX2);
	double A[MAX1][MAX2], A_T[MAX2][MAX1];
	printf("Podaj macierz A: \n");
	for(i=0;i<MAX1;i++){ for(j=0;j<MAX2;j++){ printf("Podaj A(%d,%d)= \n",i,j);
											scanf("%lf",&A[i][j]);
											}
						}
					
	
	
	
	transponuj(MAX1, MAX2, A, A_T);	
	printf("Transponowana macierz A:\n");
	for(i=0;i<MAX2;i++){ for(j=0;j<MAX1;j++){ printf("%lf, ",A_T[i][j]);
											}
						printf("\n");
						}
	
	return(0);		
	
}
	
