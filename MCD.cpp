#include <iostream>
#include <cmath>
#include <stdio.h>  
#include <windows.h>  
#include<ctime>
#include <conio.h>

using namespace std;

void esperar(double t) {
	clock_t t0 = clock();
	double e = 0;
	do {
		e = 1000*double(clock()-t0)/CLOCKS_PER_SEC;
	} while (e<t);
}

void esperar(double t);

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }

int main () {
 // **************VARIABLES***********
int a,b,c,d,i,c1,a1,b1,c2,d1,aux;
int res = 1;
// *************SALUDO****************
	gotoxy (30,10);
	cout << "MAXIMO COMUN DIVISOR APLICANDO EL ALGORITMO DE EUCLIDES" << endl;
	gotoxy (50,12);
	cout << "ELABORADO POR:" << endl;
	gotoxy (33,14);
	cout << "JERSSON JAVIER ORTEGATE BANDERAS (20201020139)" << endl;
	esperar(3*1000);
	system ("cls");
// *************INICIO****************
cout << "Digite la cantidad de numeros a operar"<< endl;
cout << "Maximo 4 numeros"<< endl;
cin >> i;
system ("cls");
if (i == 0 || i == 1 || i > 4){
	
	cout << "Error, el programa soporta entre 2 a 4 numeros"<<endl;
}
// ******************* ALGORITMO *****************************

else{
	
	gotoxy (44,0);
	cout<<"MCD_ALGORITMO_DE_EUCLIDES"<<endl;
	switch (i){
	//**************** DOS NUMEROS *************************	
		case 2:
		cout<<"Digite el primer numero"<<endl;
		cin>>a;
		cout<<"Digite el segundo numero"<<endl;
		cin>>b;
		a1=a;
		b1=b;
			if (a == 0 || b == 0){
			cout <<" "<<endl;
			cout <<"El maximo comun divisor entre "<< a <<" y "<< b << " es : 0" << endl;
		}
		else {
			
			if (a>b){
				cout <<" "<<endl;
				while (res != 0){
				res=a%b;
				c1 = a/b;
				cout << a << " / "<< b << " = " << c1 <<endl;
				cout <<"Residuo: "<< res<<endl; 
				a=b;
				b=res;
			}
				cout <<" "<<endl;
				cout <<"El maximo comun divisor entre "<< a1 <<" y "<< b1 << " es : "<< a << endl;
				break;
			}
			if (b>a){
				cout <<" "<<endl;
				while (res != 0){
				res=b%a;
				c1 = b/a;
				cout << b << " / "<< a << " = " << c1 <<endl;
				cout <<"Residuo: "<< res<<endl; 
				b=a;
				a=res;
			}
				cout <<" "<<endl;
				cout <<"El maximo comun divisor entre "<< b1 <<" y "<< a1 << " es : "<< b << endl;
				break;
			}
			if (b==a){
				cout <<" "<<endl;
				while (res != 0){
				res=a%b;
				c1 = a/b;
				cout << a << " / "<< b << " = " << c1 <<endl;
				cout <<"Residuo: "<< res<<endl; 
				a=b;
				b=res;
			}
				cout <<" "<<endl;
				cout <<"El maximo comun divisor entre "<< a <<" y "<< b << " es : "<< a << endl;
				break;
			}
		}	
		break;
		res = 1;
	// ********************* TRES NUMEROS ******************************************************************	
		case 3:
		cout<<"Digite el primer numero"<<endl;
		cin>>a;
		cout<<"Digite el segundo numero"<<endl;
		cin>>b;
		cout<<"Digite el tercer numero"<<endl;
		cin>>c;
			if (a == 0 || b == 0 || c == 0){
			cout <<" "<<endl;
			cout <<"El maximo comun divisor entre "<< a <<" , "<< b << " , " << c << " es : 0" << endl;
		}
			else{
//*********************************************** ORDENAMIENTO ******************************************				
		if(a<b){
			aux=a;
			a=b;
			b=aux;
		}
		if(a<c){
			aux=a;
			a=c;
			c=aux;
		}
		if(b<c){
			aux=b;
			b=c;
			c=aux;
		}
			a1=a;
			b1=b;
			c2=c;
//*********************************************** FIN ORDENAMIENTO ******************************************
			cout <<" "<<endl;
			while (res != 0){
				res=a%b;
				c1 = a/b;
				cout << a << " / "<< b << " = " << c1 <<endl;
				cout <<"Residuo: "<< res<<endl; 
				a=b;
				b=res;
			}
		int res1 = 1;
		if (a>c){
			while (res1 != 0){
				res1=a%c;
				c1 = a/c;
				cout << a << " / "<< c << " = " << c1 <<endl;
				cout <<"Residuo: "<< res1<<endl; 
				a=c;
				c=res1;
			}
				cout <<" "<<endl;
				cout <<"El maximo comun divisor entre "<< a1 <<" , "<< b1 << " , " << c2 << " es : "<< a << endl;
				break;		
		}
		if (c>a){
			while (res1 != 0){
				res1=c%a;
				c1 = c/a;
				cout << c << " / "<< a << " = " << c1 <<endl;
				cout <<"Residuo: "<< res1<<endl; 
				c=a;
				a=res1;
			}	
				cout <<" "<<endl;
				cout <<"El maximo comun divisor entre "<< a1 <<" , "<< b1 << " , " << c2 << " es : "<< c << endl;
				break;		
		}
		}
		break;	
		res = 1;
	// *********************** CUATRO NUMEROS **************************************************************	
		case 4:
		cout<<"Digite el primer numero"<<endl;
		cin>>a;
		cout<<"Digite el segundo numero"<<endl;
		cin>>b;
		cout<<"Digite el tercer numero"<<endl;
		cin>>c;
		cout<<"Digite el cuarto numero"<<endl;
		cin>>d;
			if (a == 0 || b == 0 || c == 0 || d == 0){
			cout <<" "<<endl;
			cout <<"El maximo comun divisor entre "<< a <<" , "<< b << " , " << c << " , " << d << " es : 0" << endl;
		}
		
	else {
//*********************************************** ORDENAMIENTO ******************************************
		if(b>a){
			  aux=b;
			  b=a;
			  a=aux; 
        }
 		if(c>a){
			  aux=c;
			  c=a;
			  a=aux;
 		}
 		if(d>a){
			  aux=d;
			  d=a;
			  a=aux; 
 		}
 		if(c>b){
			  aux=c;
			  c=b;
			  b=aux; 
 		}
 		if(d>b){
			  aux=d;
			  d=b;
			  b=aux; 
 		}
 		if(d>c){
			  aux=d;
			  d=c;
			  c=aux; 
 		}
 			a1=a;
			b1=b;
			c2=c;
			d1 = d;
//*********************************************** FIN ORDENAMIENTO ******************************************
			cout <<" "<<endl;
			while (res != 0){
				res=a%b;
				c1 = a/b;
				cout << a << " / "<< b << " = " << c1 <<endl;
				cout <<"Residuo: "<< res<<endl; 
				a=b;
				b=res;
			}
// ************************* CASO 1 *************************************
		int res1 = 1;
		if (a>c){
			while (res1 != 0){
				res1=a%c;
				c1 = a/c;
				cout << a << " / "<< c << " = " << c1 <<endl;
				cout <<"Residuo: "<< res1<<endl; 
				a=c;
				c=res1;
			}
		int res2 = 1;
		if (a<d){
			while (res2 != 0){
				res2=a%d;
				c1 = a/d;
				cout << a << " / "<< d << " = " << c1 <<endl;
				cout <<"Residuo: "<< res2<<endl; 
				a=d;
				d=res2;
			}
			cout <<" "<<endl;
			cout <<"El maximo comun divisor entre "<< a1 <<" , "<< b1 << " , " << c2 << " , " << d1 << " es : "<< a << endl;
		}
		res2 = 1;
		if (d<a){
			while (res2 != 0){
				res2=d%a;
				c1 = d/a;
				cout << d << " / "<< a << " = " << c1 <<endl;
				cout <<"Residuo: "<< res2<<endl; 
				d=a;
				a=res2;
			}
			cout <<" "<<endl;
			cout <<"El maximo comun divisor entre "<< a1 <<" , "<< b1 << " , " << c2 << " , " << d1 << " es : "<< d << endl;
		}
				break;	
									
		}
// ************************* CASO 2 *************************************		
		res1 = 1;
		if (c>a){
	while (res1 != 0){
				res1=c%a;
				c1 = c/a;
				cout << c << " / "<< a << " = " << c1 <<endl;
				cout <<"Residuo: "<< res1<<endl; 
				c=a;
				a=res1;
			}
		int res2 = 1;
		if (c<d){
			while (res2 != 0){
				res2=c%d;
				c1 = c/d;
				cout << c << " / "<< d << " = " << c1 <<endl;
				cout <<"Residuo: "<< res2<<endl; 
				c=d;
				d=res2;
			}
			cout <<" "<<endl;
			cout <<"El maximo comun divisor entre "<< a1 <<" , "<< b1 << " , " << c2 << " , " << d1 << " es : "<< c << endl;
			break;
		}
		res2 = 1;
		if (d<c){
			while (res2 != 0){
				res2=d%c;
				c1 = d/c;
				cout << d << " / "<< c << " = " << c1 <<endl;
				cout <<"Residuo: "<< res2<<endl; 
				d=c;
				c=res2;
			}
			cout <<" "<<endl;
			cout <<"El maximo comun divisor entre "<< a1 <<" , "<< b1 << " , " << c2 << " , " << d1 << " es : "<< d << endl;
			break;
		}						
			break;
		}			
}			
		break;
		res = 1;		
	}	

}
	getch();
	return 0;
}

