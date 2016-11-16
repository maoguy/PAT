#include <iostream>
#include <cstring>

using namespace std ;

#define MAX 101

int main ()
{
	int n , i , j;
	int PNum = 0 , ANum = 0 , TNum = 0 , OtherNum = 0 , flag = 0 ;
	char **s ;
	char *p1 , *p2 ;
	cin >> n ;
	s = (char **)malloc(n*sizeof(char *)) ;
	for (i = 0 ; i < n ; i ++)
	{
		s[i] = (char *)malloc(MAX*sizeof(char)) ;
		cin >> s[i] ;
	}
	for (i = 0 ; i < n ; i ++)
	{	
		PNum = 0 ;
		ANum = 0 ;
		TNum = 0 ;
		OtherNum = 0 ;
		for (j = 0 ; s[i][j] != 0; j ++)
		{
			if (s[i][j] == 'P')
			{
				PNum ++ ;
			}
			else if (s[i][j] == 'A')
			{
				ANum ++ ;
			}
			else if (s[i][j] == 'T')
			{
				TNum ++ ;
			}
			else
			{
				OtherNum = 1 ;
			}
		}
		if (PNum == 1 && ANum != 0 && TNum == 1 && OtherNum == 0)
		{
			p1 = strchr (s[i] , 'P') ;
			p2 = strchr (s[i] , 'T') ;
			if ((p1-s[i])*(p2-p1-1) == strlen(p2)-1)
			{
				flag = 1 ;
			}
		}
		else
		{
			flag = 0 ;
		}
		if (flag == 1)
		{
			cout << "YES" << endl ;
		}
		else
		{
			cout << "NO" << endl ;
		}	
	}
	return 0 ;

}