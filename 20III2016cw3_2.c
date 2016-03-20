#include <stdio.h>
#include <math.h>

/* funkcja deklaracja */
int wartBezwzgledna(double x){
				if (x<0) return -x;
					else return x;
				}

int main(){
int x;
printf("Podaj liczbe calkowita:\n");
scanf("%d",&x);
/* u¿ycie funkcji        -->   |tu|*/
printf("|%d|=%d", x, wartBezwzgledna(x));
return 0;		
}
