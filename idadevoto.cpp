#include <iostream>
using namespace std;
int main()
{
	float anoAtual, anoNasc, idade;
	cout <<"Ano atual";
	cin>>anoAtual;
	cout<<"Ano de Nascimento";
	cin>>anoNasc;
	idade=anoAtual-anoNasc;
	cout<<"voce tem ou fara" << idade << "anos";
	if (idade>=16)
	{
		cout<<"ok vc pode votar";
	}
}
