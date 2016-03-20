#include <stdio.h>
#include <math.h>
int main(){
double a,b,c,delta,x1,x2;
printf("Trojmian kwadratowy:\n");
printf("Podaj wspolczynnik a:\n");
scanf("%lf",&a);
printf("Podaj wspolczynnik b:\n");
scanf("%lf",&b);
printf("Podaj wspolczynnik c:\n");
scanf("%lf",&c);
delta=b*b-4*a*c;
if(delta<0) {
	printf("Brak pierwiastkow rzeczywistych.\n");
	}
	else {if (delta==0) {
				printf("Jeden pierwiastek rzeczywisty x0=%lf.\n", -b/2*a);}
				else { if (delta>0) {
						x1=(-b-sqrt(delta))/2*a;
						x2=(-b+sqrt(delta))/2*a;
						printf("Dwa pierwiastki rzeczywiste x1=%lf, x2=%lf.\n", x1,x2);}
						}
				}
return 0;		
}
