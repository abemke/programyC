#include <stdio.h>
#include <math.h>

/* funkcja deklaracja */
double pierwiastek(double a, double epsylon_x_n){
			double x_n=1;
			while (fabs(x_n-a/x_n)<epsylon_x_n){
					x_n=(0.5*(x_n+a/x_n));
					}
			return x_n;
			}

int main(){
double a,epsylon_x_n, blad_wzgledny;
printf("Podaj liczbe a:\n");
scanf("%lf",&a);
printf("Podaj liczbe epsylon_x_n:\n");
scanf("%lf",&epsylon_x_n);
printf("pierwiastek z %lf wynosi %lf zgodnie z algorytmem Herona z dok³adnoscia do %lf", a, pierwiastek(a,epsylon_x_n), epsylon_x_n);
blad_wzgledny=(pierwiastek(a,epsylon_x_n)-sqrt(a))/sqrt(a);
printf("blad wzgledny przyblizenia pierwiastka wynosi %lf",blad_wzgledny);
return 0;		
}
