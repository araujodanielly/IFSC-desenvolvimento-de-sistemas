/*3) Faça um programa para ler a altura de um determinado atleta de basquete e imprima sua categoria conforme
tabela abaixo:
Altura Categoria
>= 1.95 Ótima
< 1.95 - >= 1.85 Boa
< 1.85 - >= 1.75 Regular
< 1.75 Insuficiente 
*/
#include<iostream>
using namespace std;

main ()
{
	double a;
	
	setlocale(LC_ALL,"portuguese"); // configura para os literais aparecerem na língua portuguesa 
	cout<<"Atividade 6 ex 3 \n"<<endl;
	
	cout<<"Digite sua altura: "; cin>>a;
	
	if(a>=1.95) {
		cout<<"Ótima! ";
	}
	
	else if(a<=1.95 and a>=1.85) {
		cout<<"Boa! ";
	}
	
	else if(a<1.85 and a>=1.75) {
		cout<<"Regular! ";
	}
	else 
		cout<<"Insuficiente! ";
}
	
