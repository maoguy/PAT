#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ;

int main (int argv , char **argc)
{
	unsigned int N ;
	unsigned int i ;
	float x , y , z = 0 ;
	cin >> N ;
	for (i = 0 ; i < N ; i++)
	{
		cin >> x >> y ;
		if (sqrt(x*x + y*y) > z)
		{
			z = sqrt(x*x + y*y) ;
		}
	}
	cout << fixed << setprecision(2) <<z ;
	return 0 ;
}
