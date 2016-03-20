#include <stdio.h>
#include <math.h>

/* funkcja deklaracja */
double pole_kuli(double promien){
				return 4*M_PI*promien*promien;
				}

int main(){
double r;
printf("Podaj promien kuli:\n");
scanf("%lf",&r);
/* u¿ycie funkcji                             -->   |tu|*/
printf("Pole kuli o promieniu %lf wynosi %lf", r, pole_kuli(r));
return 0;		
}
