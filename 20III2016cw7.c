#include <stdio.h>
#include <math.h>

/* funkcja deklaracja */
double a_do_n(double a, int n){
			int i=n;
			double q=a,p=1;
			if(n>0){
				while (i>0){
					if (i%2==0){
								q=q*q;
								i=i/2;
								}
							else{
								p=p*q;
								q=q*q;
								i=i/2;
								}
						}
					return p;
					}
				else if (n==0){ return 1;}
						else return 1/a_do_n(a,-n);		
			
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
