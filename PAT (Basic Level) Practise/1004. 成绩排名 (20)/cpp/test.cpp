#include <iostream>
#include <cstring>
using namespace std ;

struct ScoreLib
{
	char name[11] ;
	char number[11] ;
	int score ;

} ;

int main ()
{
	ScoreLib student ;
	ScoreLib MaxStudent ;
	ScoreLib MinStudent;
	int n = 0 ;
	int i = 0 ;
	bool flag = 0;
	cin >> n ;
	for (i = 0 ; i < n ; i++)
	{
		cin >> student.name >> student.number >> student.score ;
		if (flag == 0)
		{
			strcpy (MaxStudent.name , student.name) ;
			strcpy (MinStudent.name , student.name) ;
			strcpy (MaxStudent.number , student.number) ;
			strcpy (MinStudent.number , student.number) ;
			MaxStudent.score = MinStudent.score = student.score ;
			flag = 1 ;
		}
		if (student.score > MaxStudent.score)
		{
			strcpy (MaxStudent.name , student.name) ;
			strcpy (MaxStudent.number , student.number) ;
			MaxStudent.score = student.score ;
		}
		if (student.score < MinStudent.score)
		{
			strcpy (MinStudent.name , student.name) ;
			strcpy (MinStudent.number , student.number) ;
			MinStudent.score = student.score ;
		}		
	}

	cout << MaxStudent.name << " " << MaxStudent.number << endl ;
	cout << MinStudent.name << " " << MinStudent.number ;
	return 0 ;
}