#include <stdio.h>
int main(){
int i,j;
printf("Tabliczka mnozenia:\n     ");
for(i=1;i<=13;i++)
	printf("%2d  ",i);
printf("\n    ---------------------------------------------------\n");
for(i=1;i<=13;i++)
	{ printf ("%2d |",i); 
	for(j=1;j<=13;j++)
		printf("%3d ",i*j);
	printf("\n");
	}
return 0;		
}
