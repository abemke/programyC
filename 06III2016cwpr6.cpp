#include<stdio.h>
#include<math.h>
main(){
int n,i;
double x,sum=0;
printf("Podaj ile liczb\n");
scanf("%d",&n);
for (i=1;i<=n;i++)
	{printf("Podaj %d liczbe:",i);
	scanf("%lf",&x);
	sum=sum+x;}
printf("Suma %d liczb wynosi %lf, a œrednia=%lf. \n",n,sum,sum/n);	
}
