
//1) Faça um programa que leia três números inteiros e os imprima em ordem crescente.
#include<iostream>
using namespace std;

main ()
{
	int n1, n2, n3, temp;
	
	setlocale(LC_ALL,"portuguese"); // configura para os literais aparecerem na língua portuguesa 
	cout<<"Atividade 6 ex 1 \n"<<endl;
	
	cout<<"Digite o valor de 1: "; cin>>n1;
	cout<<"Digite o valor de 2: "; cin>>n2;
	cout<<"Digite o valor de 3: "; cin>>n3;
	
	 if(n2 < n1){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if(n3 < n1){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }

    if(n3 < n2){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    cout <<n1<<" >= "<<n2<<" >= "<<n3<<endl;
}
