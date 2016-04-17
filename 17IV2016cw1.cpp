#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

class zespolone{
				private:
					double re;
					double im;
				public:
					//konstruktor (nzaywa siê tak jak klasa) :
					zespolone(double real=0, double imag=0) { re=real;im=imag; }
					//konstruktor kopiuj¹cy:
					zespolone(const zespolone &z) {re=z.re; im=z.im; }
					
					
					//przyk³adowe metody:
					double real() { return re; }
					double imag() { return im; }
					
					zespolone operator-() { //jednoargumentowy operator minus
						zespolone wynik;
						wynik.re=-re; wynik.im=-im;
						return wynik; }
					
					zespolone operator+(const zespolone &z) { //dwuargumentowy operator plus
						zespolone wynik;
						wynik.re=re+z.re; wynik.im=im+z.im;
						return wynik; }
					
					//proszê napisaæ dzia³ania -, * i / (odejmowanie, mno¿enie i dzielenie)
					 //dwuargumentowy operator minus
					zespolone operator-(const zespolone &z) {
						zespolone wynik;
						wynik.re=re-z.re; wynik.im=im-z.im;
						return wynik; }
						
						
						
					//mno¿enie	
					zespolone operator*(const zespolone &z) {
						zespolone wynik;
						wynik.re=re*z.re-im*z.im; 
						wynik.im=re*z.im-im*z.re;
						return wynik; }
					
					//dzielenie
					zespolone operator/(const zespolone &z) {
						zespolone wynik;
						if (z.re>=z.im) {
										wynik.re=(re+im*(z.im/z.re))/(z.re+z.im*(z.im/z.re)); 
										wynik.im=(im-re*(z.im/z.re))/(z.re+z.im*(z.im/z.re));
										}
							else{
								wynik.re=(im+re*(z.re/z.im))/(z.im+z.re*(z.re/z.im)); 
								wynik.im=(re+im*(z.re/z.im))/(z.im+z.re*(z.re/z.im));
								}
						return wynik; }
					
					
					
					//funkcje zaprzyjaŸnione mog¹ korzystaæ z pól prywatnych:
					friend zespolone sqrt(const zespolone &z);
					friend istream &operator >>(istream &is, zespolone &z);
					friend ostream &operator <<(ostream &os, const zespolone &z);	
					
					//norma
					zespolone abs(const zespolone &z) {
						double wynik;
						if (re>=im){wynik=fabs(re)*sqrt(1+(im/re));}
						else {wynik=fabs(im)*sqrt(1+(re/im));}		
						return wynik; 
						}			
					//sprzê¿enie
					zespolone conj(const zespolone &z) {
						zespolone wynik;
						wynik.re=re;
						wynik.im=-im;		
						return wynik; 
						}
					
					//operator ==
					int operator==(const zespolone &z) {
						double wynik;
						if (re==z.re && im==z.im) wynik=1;
						else wynik=0;		
						return wynik; 
						}
					
					
					
};

	// przeci¹¿one operatory wejœcia - wyjœcia:
	istream &operator >>(istream &is, zespolone &z){ is >> z.re >> z.im ; return is; }

	ostream &operator <<(ostream &os, const zespolone &z){
					os << '(' << z.re << ")+(" << z.im << ")*i"; return os; }

	//proszê napisaæ funkcjê przeci¹¿on¹ sqrt (pierwiastek):
	zespolone sqrt(const zespolone &z) {
						zespolone wynik;
						double w;
						if (z.re==z.im && z.im==0) {w=0;}
							else {if (fabs(z.re)>=fabs(z.im)) {
													w=sqrt(fabs(z.re))*sqrt((1+sqrt(1+(z.im/z.re)*(z.im/z.re)))/2);
													}
										else {
											w=sqrt(fabs(z.im))*sqrt((fabs(z.re/z.im))+sqrt(1+(z.re/z.im)*(z.re/z.im))/2);
											}
							
									}
						if (w==0){wynik=0;}	
							else{ if (z.re>=0) {wynik.re=w;
												wynik.im=z.im/(2*w);}
									else { if (z.im>=0) {wynik.re=fabs(z.im)/(2*w);
														wynik.im=w;}
											else {wynik.re=fabs(z.im)/(2*w);
														wynik.im=-w;}			
										
									
									
									}
								
								}
						
						return wynik; 
						}

	// Dodaæ funkcjê norm (re^2+im^2), abc ( sqrt(re^2+im^2) ), conj ( sprzê¿enie
	// zespolone: re-im*i), porównywanie (operator ==).
	


	int main(){
		zespolone dwa(2,0); //wywo³anie konstruktora
		zespolone cztery(4);
		zespolone a, b, c;
		zespolone delta, x1, x2;
		cout << "Program wylicza zespolone pierwiastki r-nia kwadratowego\n";
		cout << "ax^2+bx+c=0" << endl;
		cout << "Podaj czesc rzeczywista i urojona a: ";
		cin >> a ;
		//podobnie dla b i c
		cout << "Podaj czesc rzeczywista i urojona b: ";
		cin >> b ;
		cout << "Podaj czesc rzeczywista i urojona c: ";
		cin >> c ;
		// obliczyæ delta, x1, x2
		delta=b*b-cztery*a*c;
		x1=(-b-sqrt(delta))/(dwa*a);
		x2=(-b+sqrt(delta))/(dwa*a);
		// wyœwietliæ wynik		
		cout << "Zespolone pierwiastki r-nia kwadratowego to: x1=" << x1 << " i x2=" << x2 << endl;
		
		
		
		
		
		
	}
