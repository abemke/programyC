#include <stdio.h>
#include <math.h>







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
	
	max=dane[0];
	min=dane[0];
	
	for(i=1;i<MAX;i++){
					if (max<dane[i]) max=dane[i];
					if (min>dane[i]) min=dane[i];
					}	
					
	
	printf("Najwieksza liczba w tablicy wynosi: %lf, a najmiejsza %lf.\n", max, min);
	

	return(0);		
	
}
	
