#include <iostream>
using namespace std ;

int main ()
{
	int number ;
	int i;
	int numberSum = 0;
	int numberSumWei[100] = {0} ;
	bool flag = 0 ;

	cin >> number ;
	while (number)
	{
		i = number % 10 ;
		numberSum += i ;
		number /= 10 ; 
	}
	i = 0 ;
	//cout << numberSum ;
	number = numberSum ;
	while (number)
	{
		i = i + 1 ;
		numberSumWei[i] = number % 10 ;
		number = number / 10 ;
	}

	for (i = 99 ; i > 0 ; i --)
	{
		switch (numberSumWei[i])
		{
			case (0) : break ;
			case (1) : cout << "yi" ; break ;
			case (2) : cout << "er" ; break ;
			case (3) : cout << "san" ; break ;
			case (4) : cout << "si" ; break ;
			case (5) : cout << "wu" ; break ;
			case (6) : cout << "si" ; break ;
			case (7) : cout << "qi" ; break ;
			case (8) : cout << "ba" ; break ;
			case (9) : cout << "jiu" ; break ;
		}
		if (flag == 0 && numberSumWei[i-1] != 0)
		{
			flag = 1 ;
			continue ;
		}
		if (numberSumWei[i-1] != 0)
		{
			cout << " " ;
		}
		//cout << numberSumWei[i] << " " ;
	}

	return 0 ;
}