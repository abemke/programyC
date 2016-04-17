#include <stdio.h>
#include <math.h>




int main(){
	int dane[]={-44,5,67,-2,0,33,77};
	int i=0;
	int n;
	int pom=0;
	
	for(i=0;i<7;i++){
					printf("%d, ", dane[i]);
					}	
	printf("\n");
	printf("Podaj dowolna liczbe rzeczywista: \n");
	scanf("%d",&n);
	for(i=0;i<7;i++){
					if (n==dane[i]) pom=1;
					}	
					
	
	if (pom==1) printf("Twoja liczba jest w tablicy.");
		else printf("Twojej liczby nie ma w tablicy.");

	return(0);
}
	
