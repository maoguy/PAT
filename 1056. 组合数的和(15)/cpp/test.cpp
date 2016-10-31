#include <iostream>
using namespace std ;

#define MAX 10

int main ()
{
	int singleDigits[MAX] ;
	int N ;
	int i ;
	int theSum = 0 ;
	cin >> N ;
	for (i = 0 ; i < N ; i++)
	{
		cin >> singleDigits[i] ;
	}
	for (i = 0 ; i < N ; i ++)
	{
		theSum = theSum + (singleDigits[i]*10 + singleDigits[i])*(N-1);
	}
	cout << theSum ;
	return 0;
}