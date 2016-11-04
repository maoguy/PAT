#include <iostream>
using namespace std ;

int main ()
{
	int inputNum ;
	int G , S , B ;
	int i ;
	cin >> inputNum ;
	G = inputNum % 10 ;
	S = inputNum / 10 % 10 ;
	B = inputNum / 100 % 10 ;
	for (i = 0 ; i < B ; i ++)
	{
		cout << 'B' ;
	}
	for (i = 0 ; i < S ; i ++)
	{
		cout << 'S' ;
	}
	for (i = 1 ; i <= G ; i ++)
	{
		cout << i ;
	}
	return 0 ;
}