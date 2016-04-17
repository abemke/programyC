#include <stdio.h>
#include <math.h>

void max_min(int MAX,double dane[], double *max, double *min)
	{int i;
	
	*max=dane[0];
	*min=dane[0];
	
	for(i=1;i<MAX;i++){
					if (*max<dane[i]) *max=dane[i];
					if (*min>dane[i]) *min=dane[i];
					}		
	}

int main(){
	int MAX;
	printf("Podaj dlugosc tablicy: \n");
	scanf("%d",&MAX);
	double dane[MAX], max, min;
	int i;
	for(i=0;i<MAX;i++){
					printf("Podaj %d element tablicy: \n", i+1);
					scanf("%lf",&dane[i]);
					}		
					
	max_min(MAX, dane, &max, &min);
	printf("Najwieksza liczba w tablicy wynosi: %lf, a najmiejsza %lf.\n", max, min);
	

	return(0);		
	
}
	
