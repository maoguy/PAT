#include <iostream>
#include <cstring>
using namespace std ;
#define MAX 10000

int main ()
{
	char input[MAX] ;
	char output[MAX] ;
	int i = 0 ;
	int inputLen = 0 ;
	int PNum = 0 , ANum = 0 , TNum = 0 , eNum = 0 , sNum = 0 , tNum = 0;
	int theSum ;
	cin >> input ;
	inputLen = strlen (input) ;
	for (i = 0 ; i < inputLen ; i ++)
	{
		switch (input[i])
		{
			case ('P') : PNum ++ ; continue ;
			case ('A') : ANum ++ ; continue ;
			case ('T') : TNum ++ ; continue ;
			case ('e') : eNum ++ ; continue ;
			case ('s') : sNum ++ ; continue ;
			case ('t') : tNum ++ ; continue ;
			default : continue ;
		}
	}
	theSum = PNum + ANum + TNum + eNum + sNum + tNum ;
	for (i = 0 ; i < theSum ; )
	{
		if (PNum != 0)
		{
			output[i] = 'P' ;
			PNum -- ;
			i ++ ;
		} 
		if (ANum != 0)
		{
			output[i] = 'A' ;
			ANum -- ;
			i ++ ;
		} 
		if (TNum != 0)
		{
			output[i] = 'T' ;
			TNum -- ;
			i ++ ;
		} 
		if (eNum != 0)
		{
			output[i] = 'e' ;
			eNum -- ;
			i ++ ;
		} 
		if (sNum != 0)
		{
			output[i] = 's' ;
			sNum -- ;
			i ++ ;
		} 
		if (tNum != 0)
		{
			output[i] = 't' ;
			tNum -- ;
			i ++ ;
		} 		
	}
	output[theSum] = '\0' ;
	cout << output ;
	return 0 ;
}
