#include <stdio.h>
#include <math.h>

int podzial_przez_7(int MAX,int dane[MAX])
	{int i;
	int podziel_7=1;
	for(i=MAX-1;i>=0;i--){ if(dane[i]%7==0) {
							podziel_7=dane[i];
							//wyjscie z funkcji:
							return podziel_7;
							}
			
						}
	if (podziel_7==1)	{return -99;
						;}			
}	

int main(){
	int MAX;
	printf("Podaj ilosc liczb: \n");
	scanf("%d",&MAX);
	int dane[MAX], podziel_7;
	int i;
	for(i=0;i<MAX;i++){
					printf("Podaj %d liczbe calkowita: \n", i+1);
					scanf("%d",&dane[i]);
					}	
	
	podziel_7=podzial_przez_7(MAX, dane);	
	if (podziel_7==-99) printf("w tablicy nie ma liczb podzielnych na 7.\n");
			else printf("Ostatnia liczba podzielna na 7 w tablicy to %d.\n", podziel_7);
	
	return(0);		
	
}
	
