#include <stdio.h>
#include <math.h>
int main(){
int dzientygodnia;
printf("Podaj cyfra dzien tygodnia:\n");
scanf("%d",&dzientygodnia);
switch (dzientygodnia){
		case 1: printf("Poniedzialek"); break;
		case 2: printf("Wtorek"); break;
		case 3: printf("Sroda"); break;
		case 4: printf("Czwartek"); break;
		case 5: printf("Piatek"); break;
		case 6: printf("Sobota"); break;
		case 7: printf("Niedziela"); break;
		default : printf("Nie ma takiego dnia tygodnia"); break;
		}
return 0;		
}
