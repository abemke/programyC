#include<stdio.h>
main(){
int i;
float x;

x=-3.5;
for (i=0; i<=22; i++)
	{printf("%f ",x);
	x=x+0.5;
	}
	
printf("\n");
printf("\n");

i=0;	
x=-3.5;
while (i++<23)
	{printf("%f ",x);
	x=x+0.5;
	}

printf("\n");
printf("\n");


for (x=-3.5; x<=7.5; x=x+0.5)
	printf("%f ",x);
	
	
printf("\n");
printf("\n");

x=-3.5;
while (x<=7.5)
	{printf("%f ",x);
	x=x+0.5;
	}
	
}
