#include <stdio.h>
#include <math.h>

int il_skal(int MAX, double wek1[MAX], double wek2[MAX])
	{int i;
	double il_skalar=0;
	for(i=0;i<MAX;i++){ il_skalar=il_skalar+wek1[i]*wek2[i];
						}
	return il_skalar;
	}	

int main(){
	int MAX;
	printf("Podaj ilosc liczb: \n");
	scanf("%d",&MAX);
	double wek1[MAX], il_skalarny, wek2[MAX];
	int i;
	printf("Podaj pierwszy wektor: \n");
	for(i=0;i<MAX;i++){
					scanf("%lf",&wek1[i]);
					}	
	printf("Podaj drugi wektor: \n");
	for(i=0;i<MAX;i++){
					scanf("%lf",&wek2[i]);
					}
	
	
	
	il_skalarny=il_skal(MAX, wek1, wek2);	
	printf("Iloczyn skalarny wektorow to %lf.\n", il_skalarny);
	
	return(0);		
	
}
	
