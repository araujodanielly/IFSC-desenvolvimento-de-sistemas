/*Atividade 11

Antes de fazer esta atividade, acesse a explica��o sobre n�meros aleat�rios/rand�micos que se encontra no f�rum deste t�pico.

Fazer um programa para gerar 10 n�meros aleat�rios num determinado intervalo.
O intervalo deve ser dois n�meros inteiros que ser�o as entradas. Obrigatoriamente o 
primeiro valor deve ser menor que o segundo. Caso n�o seja, solicite novamente a entrada dos dois n�meros.*/



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





