/* 
float    // real
double  // real
string // cadeia
char  // caracter
operadores lógicos // e: and &&
                    ou: or ||

*/


#include<iostream>
using namespace std;

main ()
{
	int a, b, c;
	
	setlocale(LC_ALL,"portuguese"); // configura para os literais aparecerem na língua portuguesa 
	cout<<"Atividade triângulo\n"<<endl;
	
	{
		cout<<"Digite o valor de A: "; cin>>a;
		cout<<"Digite o valor de B: "; cin>>b;
		cout<<"Digite o valor de C: "; cin>>c;
		
		if (a<b+c and b<a+c and c<a+b)
		{
			cout<<"É triângulo ";
			
			if (a==b and b==c)
			{
				cout<<"equilátero!";
			}
			else if (a==b or a==c or b==c)
			{
				cout<<"isósceles!";
			}
			else 
			{
				cout<<"escaleno!";
			}
		}
		
		else 
		{
			cout<<"Não é triângulo";
		}
	}
}
