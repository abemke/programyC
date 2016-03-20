#include <stdio.h>
int main(){
char znak;
printf("Wpisuj tekst\n");
while(znak!='\n')
	{znak=getchar();
	znak=toupper(znak);
	printf("%c",znak);}
return 0;		
}
