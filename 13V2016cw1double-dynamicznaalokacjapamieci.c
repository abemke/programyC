#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* dynamiczny przydzia³ pamiêci na tablicê */
double **macierzDouble(int iloscWierszy, int iloscKolumn) {
	double **tab;
	int i;
	/* dynamiczne przydzielenie pamiêci dla iloscWierszy wskaŸników do typu int */
	tab=(double **) malloc (iloscWierszy*sizeof(double *));
	/* tab jest wskaŸnikiem do tablicy zawieraj¹cej iloscWierszy wskaŸników do int */
	if(tab==NULL) {/* nie przydzielono pamiêci*/
		fprintf(stderr, "Brak pamieci!\n");
		exit(1);}
	/* przydziel pamiêc na iloscWierszy*iloscKolumn liczb typu integer */
	tab[0]=(double *) malloc( iloscWierszy*iloscKolumn*sizeof(double));
	if(tab[0]==NULL) {/*nie przydzielono pamiêci */
		fprintf(stderr, "Brak pamieci !\n");
		free(tab); /*zwolnij pamiêæ przydzielon¹ dynamicznie */
		exit(1);}
	for(i=1; i<iloscWierszy; i++)
		tab[i]=tab[i-1]+iloscKolumn; /* tab[i] jest wska¿nikiem do i-tego wiersza tablicy */
	return tab;
}
/*wprowadzenie macierzy funkcj¹ */
double ** wprowadzMacierzDouble( int iloscWierszy, int iloscKolumn, double **t){
	int i; int j;
		for(i=0; i<iloscWierszy;i++)
			{for(j=0; j<iloscKolumn; j++)
				{printf("Podaj A[%d][%d] element macierzy \n", i, j);
				scanf("%lf", &t[i][j]);
				}
			}
}





/* zwalnianie pamiêci przydzielonej dynamicznie */
void zwolnijMacierzDouble(double **tablica){
	free(tablica[0]); /* tablica[0] zawiera wska¿nik do pamiêci przydziel. dynamicznie */
	free(tablica); /* tablica wskaŸników do wierszy przydzielona dynamicznie */
}

void wyswietlMacierzDouble(double **t, int w_Max, int k_Max){
	/* nie musimy deklarowaæ rozmiarów macierzy t! */
	int wiersz, kolumna;
	for(wiersz=0; wiersz<w_Max; wiersz++)
		for(kolumna=0; kolumna<k_Max; kolumna++)
			printf("t[%d][%d]=%lf%c", wiersz, kolumna, t[wiersz][kolumna], kolumna==k_Max-1? '\n' : '\t');			
}	/*** naturalny dostêp do elementów tablicy: ^^^^^^^^^^^^^^ ******/


double ** transponujMacierzDouble(int w_Max, int k_Max, double **t ){
	int wiersz, kolumna;
	double **tTransponowane=macierzDouble(k_Max,w_Max);
	for(wiersz=0; wiersz<w_Max; wiersz++)
		for(kolumna=0; kolumna<k_Max; kolumna++)
							{ tTransponowane[kolumna][wiersz]=t[wiersz][kolumna];
												}
				
	return tTransponowane;
	}

double ** mnozenieMacierzDoubleAxB(int Aw_Max, int Ak_Max, double **tA, int Bw_Max, int Bk_Max, double **tB){
	int i,j,k;
	double **tC=macierzDouble(Aw_Max,Bk_Max);
	
	if (Ak_Max!=Bw_Max) {printf("Nie mozna pomnozyc macierzy");
						exit(1) ;	}
	for(i=0; i<Ak_Max; i++)
		for(j=0; j<Bw_Max;j++)
			for(k=0; k<Ak_Max; k++)
							{ tC[i][j]=tC[i][j]+tA[i][k]*tB[k][j];
												}
	return tC;			
	
	}

/* wektor */

/* dynamiczny przydzia³ pamiêci na wektor */
double * wektorDouble(int iloscKolumn) {
	double *tab;
	/* dynamiczne przydzielenie pamiêci dla iloscKolumn wskaŸników do typu double */
	tab=(double *) malloc (iloscKolumn*sizeof(double));
	/* tab jest wskaŸnikiem do tablicy zawieraj¹cej iloscKolumn wskaŸników do double */
	if(tab==NULL) {/* nie przydzielono pamiêci*/
		fprintf(stderr, "Brak pamieci!\n");
		exit(1);}
	return tab;
}
/*wprowadzenie wektora funkcj¹ */
double * wprowadzWektorDouble( int iloscKolumn, double *t){
	int i; int j;
			for(j=0; j<iloscKolumn; j++)
				{printf("Podaj A[%d] element wektora \n", j);
				scanf("%lf", &t[j]);
				}		
}


/* zwalnianie pamiêci przydzielonej dynamicznie */
void zwolnijWektorDouble(double *tablica){
	free(tablica); /* tablica wskaŸników do wierszy przydzielona dynamicznie */
}

void wyswietlWektorDouble(double *t, int k_Max){
	/* nie musimy deklarowaæ rozmiarów wektora t! */
	int kolumna;
		for(kolumna=0; kolumna<k_Max; kolumna++)
			printf("t[%d]=%lf%c",  kolumna, t[kolumna], kolumna==k_Max-1? '\n' : '\t');			
}	/*** naturalny dostêp do elementów tablicy: ^^^^^^^^^^^^^^ ******/


double * mnozenieWektorDMacierzDoubleA(int Aw_Max, int Ak_Max, double **tA, int Dk_Max, double *tD){
	int i,k;
	double *tE=wektorDouble(Aw_Max);
	
	if (Ak_Max!=Dk_Max) {printf("Nie mozna pomnozyc macierzy i wektora");
						exit(1) ;	}
	for(i=0; i<Aw_Max; i++)
		for(k=0; k<Ak_Max; k++)
							{ tE[i]=tE[i]+tA[i][k]*tD[k];
												}
	return tE;			
	
	}



	
	
int main(){
	int wierA, kolA, wierB, kolB, kolD, i, j;
	double **tabDynA;
	double **tabDynB;
	double **tabDynC;
	double **tabTransponowana;
	double *wekDynD;
	double *wekDynE;
	printf("Podaj ilosc wierszy w macierzy A \n");
	scanf("%d",&wierA);
	printf("Podaj ilosc kolumn w macierzy A \n");
	scanf("%d",&kolA);
	tabDynA=macierzDouble(wierA,kolA);  /*przydzielenie pamiêci na stercie */
	
	wprowadzMacierzDouble(wierA,kolA,tabDynA);
	wyswietlMacierzDouble(tabDynA,wierA,kolA);
	
	printf("\n");
	tabTransponowana=transponujMacierzDouble(wierA, kolA, tabDynA );
	wyswietlMacierzDouble(tabTransponowana,kolA,wierA);
	
	printf("Podaj ilosc wierszy w macierzy B \n");
	scanf("%d",&wierB);
	printf("Podaj ilosc kolumn w macierzy B \n");
	scanf("%d",&kolB);
	tabDynB=macierzDouble(wierB,kolB);	/*przydzielenie pamiêci na stercie */
	
	wprowadzMacierzDouble(wierB,kolB,tabDynB);
	wyswietlMacierzDouble(tabDynB,wierB,kolB);
	
	printf("\n");
	/*mno¿enie macierzy A i B otrzymujemy macierz C */
	tabDynC= mnozenieMacierzDoubleAxB(wierA, kolA, tabDynA, wierB, kolB, tabDynB);
	wyswietlMacierzDouble(tabDynC,wierA,kolB);
	

	printf("lol\n");
	
	/*WEKTORY */
	printf("Podaj ilosc kolumn w wektorze D \n");
	scanf("%d",&kolD);
	wekDynD=wektorDouble(kolD);	/*przydzielenie pamiêci na stercie */
	wprowadzWektorDouble(kolD,wekDynD);
	wyswietlWektorDouble(wekDynD,kolD);
	
	printf("naprawde \n");
	wekDynE=mnozenieWektorDMacierzDoubleA(wierA, kolA, tabDynA, kolD, wekDynD);
	wyswietlWektorDouble(wekDynE,wierA);
	printf("lol \n");
	
	/*nale¿y zawsze pamiêtaæ o zwolnieniu pamiêci przydzielonej dynamicznej */
	zwolnijMacierzDouble(tabDynA);
	zwolnijMacierzDouble(tabDynB);
	zwolnijMacierzDouble(tabDynC);
	zwolnijWektorDouble(wekDynD);
	zwolnijWektorDouble(wekDynE);
	zwolnijMacierzDouble(tabTransponowana);
	
	
	
	return(0);	
}









