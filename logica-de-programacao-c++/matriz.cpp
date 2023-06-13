//Gerar uma matriz de ordem N, onde n deve ser lido no inicio do programa, com valores aleatorios, entre 10-20. Mostrar a matriz.

#include <iostream>
#include <cstdlib>  
#include <ctime>   
using namespace std;

main ()
{
	srand (time(NULL)); 
	int N;
	cout<<"Qual a dimensão da matriz quadrada?\n"; cin>>N;
	int M[N][N], l, c;

	for(l=0;l<N;l++)
	{
		for(c=0; c<N;c++)
		{
			M[l][c]=rand()%11+10;
		}
	}
	
	
	for (l=0; l<N; l++)
	{
		for (c=0; c<N; c++)
		{
			cout<<M[l][c]<<"\t"; 
		}
		cout<<endl;
	}
}
	
