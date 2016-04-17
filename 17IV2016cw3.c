#include <stdio.h>
#include <math.h>







int main(){
	int MAX=10000;
	int i=0;
	char znak[MAX];
	
	printf("Wpisuj tekst\n");
	while(znak[i]!='\n')
		{znak[i]=getchar();
		znak[i]=toupper(znak[i]);
		printf("%c",znak[i]);
		i++;}
	return 0;		
}
	

			
	

	
