#include <stdio.h>
#include <math.h>

/* funkcja deklaracja */
double a_do_n(double a, int n){
				int i; 
				double adon=1;
				for (i=1;i<=n;i++)
					adon=adon*a;
				return adon;
				}

int main(){
double a;
int n;
printf("Podaj liczbe a:\n");
scanf("%lf",&a);
printf("Podaj liczbe n:\n");
scanf("%d",&n);
printf("%lf do %d=%lf \n", a, n, a_do_n(a,n));
return 0;		
}
