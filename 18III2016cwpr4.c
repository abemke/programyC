#include <stdio.h>
#include <math.h>
int main(){
int n,i;
double liczba,max, min;
printf("Podaj ile liczb: \n");
scanf("%d",&n);
printf("Podaj %d liczbe \n",i=1);
scanf("%lf",&liczba);
max=liczba;
min=liczba;	
for (i=2;i<=n;i++)
	{printf("Podaj %d liczbe \n",i);
	scanf("%lf",&liczba);
	if (max<liczba) max=liczba;
	if (min>liczba) min=liczba;
	}	
printf("Najwieksza liczba to %lf, najmniejsza liczba to %lf \n",max,min);
return 0;		
}
