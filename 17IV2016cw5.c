#include <stdio.h>
#include <math.h>







int main(){
	int MAX=100000;
	double dane[MAX], srednia;
	int i;
	
	printf("Podaj dlugosc tablicy: \n");
	scanf("%d",&MAX);
	
	for(i=0;i<MAX;i++){
					printf("Podaj %d element tablicy: \n", i+1);
					scanf("%lf",&dane[i]);
					}	
	
	srednia=0;
	
	
	for(i=0;i<MAX;i++){
					srednia=(srednia*i+dane[i])/(i+1);
					}	
					
	
	printf("Srednia arytmetyczna liczb w tablicy wynosi: %lf.\n", srednia);
	

	return(0);		
	
}
	
