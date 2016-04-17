#include <stdio.h>
#include <math.h>

void odKonca(int MAX,char tekst[MAX]){
	int i;
	char napis[MAX+1];
	for(i=0;i<MAX;i++){
					napis[i]=tekst[MAX-i-1];
					}
	napis[MAX]='\0';
	
	for(i=0;i<MAX;i++){
					tekst[i]=napis[i];
					}	
	
	}


int main(){
	int MAX=10000, j=0;
	char tekst[MAX];
		
	printf("Wpisuj tekst:\n");
	do{tekst[j]=getchar();
		j++;}
	while(tekst[j-1]!='\n');
	tekst[j]='\0';		
	//MAX=sizeof(tekst)/sizeof(char);
	odKonca(j,tekst);
	puts(tekst);
	return(0);		

}
	
