#include <iostream>
#include <cstdlib>  
#include <ctime>
using namespace std;

main ()
{
	string nome[5];
	float nota1[5], nota2[5], media[5];
	int i;
	

		
	setlocale(LC_ALL,"portuguese");
	
	for (i=0; i<5; i++)
	{
		cout<<"Digite o nome do "<<i+1<<"ª aluno: ";
		cin>>nome[i];
		cout<<"Digite a "<<i+1<<"ª nota: "; cin>>nota1[i];
		cout<<"Digite a "<<i+1<<"ª nota "; cin>>nota2[i];
		media[i] = (nota1[i]+nota2[i])/2;
		cout<<"média: "<<media[i]<<endl;
	}
	
	cout<<endl<<"Resultados "<<endl;
	for (i=0; i<5; i++)
	{
		cout<<nome[i];
		cout<<nota1[i];
		cout<<nota2[i];
		cout<<endl;
	}
	
	cout<<endl<<"Alunos reprovados "<<endl;
	for (i=0; i<5; i++)
	{
		if (media[i]<6)
		{
			cout<<nome[i]<<"\t"<<media[i]<<endl;
		}
	}
		
}
