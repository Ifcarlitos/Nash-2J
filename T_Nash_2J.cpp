#include <iostream>
#include <cstdlib>

using namespace std;

int EqN(int J1a, int J1b, int J1c, int J1d, int J2a, int J2b, int J2c, int J2d);

int main(int argc, char** argv) {
	
	int J1a,J1b,J1c,J1d = 0;
	int J2a,J2b,J2c,J2d = 0;
	
	cout <<"Escribe valor de pago del J1, jugando A contra A del J2: \n";
	cin >> J1a ;
	cout <<"Escribe valor de pago del J1, jugando A contra B del J2: \n";
	cin >> J1b ;
	cout <<"Escribe valor de pago del J1, jugando B contra A del J2: \n";
	cin >> J1c ;
	cout <<"Escribe valor de pago del J1, jugando B contra B del J2: \n";
	cin >> J1d ;
	
	cout <<"Escribe valor de pago del J2, jugando A contra A del J1: \n";
	cin >> J2a ;
	cout <<"Escribe valor de pago del J2, jugando B contra A del J1: \n";
	cin >> J2b ;
	cout <<"Escribe valor de pago del J2, jugando A contra B del J1: \n";
	cin >> J2c ;
	cout <<"Escribe valor de pago del J2, jugando B contra B del J1: \n";
	cin >> J2d ;
	
	cout << "\nResultado: \n";
		
	EqN(J1a,J1b,J1c,J1d,J2a,J2b,J2c,J2d);
	
	system("PAUSE");
	return 0;
}

int EqN(int J1a, int J1b, int J1c, int J1d, int J2a, int J2b, int J2c, int J2d)
{
	
	if(J1a >= J1c){
		if(J2a >= J2b){
			
			cout << "El (A,A) es equilibro de nash \n";
		} 
	}
	
	if(J1c >= J1a){
		if(J2c >= J2d){
			
			cout << "El (B,A) es equilibro de nash \n";
		}
	}
	
	if(J1b >= J1d){
		if(J2b >= J2a){
			
			cout << "El (A,B) es equilibro de nash \n";
		}
	}
	
	if(J1d >= J1b){
		if(J2d >= J2c){
			
			cout << "El (B,B) es equilibro de nash \n";
		}
	}	
}
