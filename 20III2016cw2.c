#include <stdio.h>
#include <math.h>

/* funkcja deklaracja */
double wartBezwzgledna(double x){
				if (x<0) return -x;
					else return x;
				}

int main(){
double x;
printf("Podaj liczbe:\n");
scanf("%lf",&x);
/* u¿ycie funkcji                             -->   |tu|*/
printf("|%lf|=%lf", x, wartBezwzgledna(x));
return 0;		
}
