#include<stdio.h>
main(){
int i;
int n;
printf("Podaj ile liczb?\n");
scanf("%d",&n);
printf("\n");
for(i=1;i<=n;i++)
	printf("%d %d %d \n",i,i*i,i*i*i);
	

printf("\n");
printf("\n");


i=1;
while(i<=n)
	{printf("%d %d %d \n",i,i*i,i*i*i);
	i++;}	
	
printf("\n");
printf("\n");	
	
i=1;
do{printf("%d %d %d \n",i,i*i,i*i*i);
	i++;}
while(i<=n);

printf("\n");

	
	
}
