#include <stdio.h>
#include <math.h>
int main(){
int a,b,c, i=0;
for (a=1;a<26;a++)
	{for (b=a;b<60;b++)
		{ for (c=b;c<60;c++) if (a*a+b*b==c*c)	{printf("trojka pitagorejska: %d, %d, %d \n", a,b,c);
												i++;}	
		}
	}
printf("%d",i);
return 0;		
}
