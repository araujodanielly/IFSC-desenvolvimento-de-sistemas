/* 
float    // real
double  // real
string // cadeia
char  // caracter
operadores l�gicos // e: and &&
                    ou: or ||

*/


#include<iostream>
using namespace std;

main ()
{
	int a, b, c;
	
	setlocale(LC_ALL,"portuguese"); // configura para os literais aparecerem na l�ngua portuguesa 
	cout<<"Atividade tri�ngulo\n"<<endl;
	
	{
		cout<<"Digite o valor de A: "; cin>>a;
		cout<<"Digite o valor de B: "; cin>>b;
		cout<<"Digite o valor de C: "; cin>>c;
		
		if (a<b+c and b<a+c and c<a+b)
		{
			cout<<"� tri�ngulo ";
			
			if (a==b and b==c)
			{
				cout<<"equil�tero!";
			}
			else if (a==b or a==c or b==c)
			{
				cout<<"is�sceles!";
			}
			else 
			{
				cout<<"escaleno!";
			}
		}
		
		else 
		{
			cout<<"N�o � tri�ngulo";
		}
	}
}
