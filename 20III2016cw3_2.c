#include <stdio.h>
#include <math.h>

/* funkcja deklaracja */
int a_do_n(int a, int n){
				int i; 
				int adon=1;
				for (i=1;i<=n;i++)
					adon=adon*a;
				return adon;
				}

int main(){
int a;
int n;
printf("Podaj liczbe a:\n");
scanf("%d",&a);
printf("Podaj liczbe n:\n");
scanf("%d",&n);
printf("%d do %d=%d \n", a, n, a_do_n(a,n));
return 0;		
}
