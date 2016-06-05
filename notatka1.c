#include <stdio.h>
#include <math.h>

int sumax2y2z2(int n){
			int a,b,c, i=0, pom=0;
				for (a=1;a<n;a++)
					{for (b=a;b<n;b++)
						{ for (c=b;c<n;c++) if (a*a+b*b+c*c==n)	{printf("n= %d mozna zapisac jako sume kwadratow liczb: %d, %d, %d \n", n,a,b,c);
												i++;
												pom=1;}	
											}
						}
			if (pom==0) printf("liczby n=%d nie da sie zapisac jako sume kwadratow trzech liczb",n);
			}




int main(){
int n;
printf("podaj dowolna liczbe naturalna \n");
scanf("%d",&n);
sumax2y2z2(n);

	
	
	
	
	
	
	
	
	return 0;		
	}
