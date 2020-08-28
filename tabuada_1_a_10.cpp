#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int num, contador, res;
contador=0;
cout<<"Você quer saber a tabuada de qual número? ";
cin>>num;
while (contador<=10)
	{
		res=num*contador;
		cout<<num<< "x" <<contador<< "=" <<res<< "\n";
		contador++;
	}
}
