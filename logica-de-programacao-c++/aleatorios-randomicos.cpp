/*Atividade 11

Antes de fazer esta atividade, acesse a explicação sobre números aleatórios/randômicos que se encontra no fórum deste tópico.

Fazer um programa para gerar 10 números aleatórios num determinado intervalo.
O intervalo deve ser dois números inteiros que serão as entradas. Obrigatoriamente o 
primeiro valor deve ser menor que o segundo. Caso não seja, solicite novamente a entrada dos dois números.*/



#include <iostream>
#include <cstdlib>  
#include <ctime>   
using namespace std;

main ()
{
	srand (time(NULL)); 
	int valor, i=1, a, b;

	cout<<"Digite o 1o valor: "; cin>>a;
	cout<<"Digite o 2o valor: "; cin>>b;

		while (a<b)
		{
			valor=rand()%b + 1; 
			cout<<valor<<endl;
			cout<<"O primeiro valor deve ser menor que o segundo: "; cin>>i;
			i++;
		}
		

}





