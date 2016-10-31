#include <iostream>
using namespace std ;

#define MAX 100

int main ()
{
	unsigned int N ;
	unsigned int JiaHan[MAX] , JiaHua[MAX];
	unsigned int YiHan[MAX] ,YiHua[MAX];
	unsigned int JiaHe = 0, YiHe = 0;
	unsigned int theSum ;
	unsigned int i ;
	cin >> N ;
	for (i = 0 ; i < N ; i ++)
	{
		cin >> JiaHan[i] >> JiaHua[i] >> YiHan[i] >> YiHua[i];
	}
	for (i = 0 ; i < N ; i ++)
	{
		theSum = JiaHan[i] + YiHan[i] ;
		if (JiaHua[i] == theSum)
		{
			if (YiHua[i] == theSum)
			{
				continue ;
			}
			else
			{
				YiHe ++ ;
			}
		}
		else if (YiHua[i] == theSum)
		{
			JiaHe ++ ;
		}
		else
		{
			continue ;
		}
	}
	cout << JiaHe << " " << YiHe ;
	return 0;
}