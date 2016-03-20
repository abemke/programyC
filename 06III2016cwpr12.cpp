#include <stdio.h>
#include <math.h>
int main(){
int i,j,sum;
printf("Liczby doskonale:\n");
for (i=1;i<=10000;i++)
	{sum=0;
	for (j=1;j<i;j++)
		{if (i%j==0) {sum=sum+j;}
		}
	if (i==sum) {printf("%d ,",i);}
	}
return 0;		
}
