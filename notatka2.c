#include <stdio.h>
#include <math.h>

int pierwszepomiedzyaib(int a, int b){
			int c, i, pom=0;
			if(b<a | a<=1 | b<=1) {printf("to nie jest dobrze podany przedzial \n"); return;}
				for (c=a;c<=b;c++)
						{ for (i=2; i<c; i++)
									{if (c%i==0) {pom=1;}}
						if (pom==0) {printf("liczba pierwsza z przedzialu [%d,%d]: %d \n",a,b, c);}
						pom=0;}
			}




int main(){
int a;
int b;
printf("podaj dowolna liczbe naturalna a wieksza od 1: \n");
scanf("%d",&a);
printf("podaj dowolna liczbe naturalna b wieksza od 1: \n");
scanf("%d",&b);



pierwszepomiedzyaib(a, b);


	
	
	
	
	
	
	
	return 0;		
	}
