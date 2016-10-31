#include <iostream>
#include <cmath>
using namespace std ;

int main ()
{
	unsigned int A ;
	unsigned int B ;
	unsigned int DA , DB ;
	unsigned int PA = 0 ,PB = 0 ;
	unsigned int A1 , B1 ;
	int Abit = 0, Bbit = 0;
	int i = 0 , j = 0 ;
	cin >> A >> DA >> B >> DB ;
	A1 = A ;
	while (A1)
	{
		A1 = A1 / 10 ;
		Abit ++ ;
	}
	B1 = B ;
	while (B1)
	{
		B1 = B1 / 10 ;
		Bbit ++ ;
	}
	A1 = A ;
	j = 0 ;
	for (i = 0 ; i < Abit ; i ++)
	{
		if (A1 && (DA == A1 % 10))
		{
			PA = PA + (A1%10)*pow (10 , j) ;
			j ++ ;
		}
		else if (!A1)
		{
			break ;
		}
		A1 = A1/10 ;
	}
	B1 = B ;
	j = 0 ;
	for (i = 0 ; i < Bbit ; i ++)
	{

		if (B1 && (DB == B1 % 10))
		{
			PB = PB + (B1%10)*pow (10 , j) ;
			j ++ ;
		}
		else if (!B1)
		{
			break ;
		}
		B1 = B1/10 ;
	}
	cout << (PA + PB) << endl ;
	return 0 ;
}