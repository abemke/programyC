#include <stdio.h>
#include <math.h>

int iloscpodzielnychna3iniepodzielnychna5(int MAX, int dane[MAX]){
			int ilosc=0, i;
			for (i=0; i<MAX; i++)
					{if (dane[i]%3==0 && dane[i]%5!=0) {ilosc++;}
					}
			return ilosc;
			}





int main(){
	int MAX;
	
	printf("Podaj dlugosc tablicy: \n");
	scanf("%d",&MAX);
	
	int dane[MAX];
	int i;
	
	for(i=0;i<MAX;i++){
					printf("Podaj %d element tablicy: \n", i+1);
					scanf("%d",&dane[i]);
					}	
	



printf("ilosc liczb podzielnych na 3 i nie podzielnych na 5 z tablicy liczb to: %d",iloscpodzielnychna3iniepodzielnychna5(MAX, dane));


	
	
	
	
	
	
	
	return 0;		
	}
