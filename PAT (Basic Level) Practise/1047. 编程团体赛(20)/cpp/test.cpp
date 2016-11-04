#include <iostream>
#include <cstdio>
using namespace std ;

int main ()
{
	int playerNum ;
	int teamNum ;
	int playerScore ;
	int teamScore[1000] = {0};
	int theMaxScore ;
	int theWinTeam ;
	int N = 0;
	int i ;
	cin >> N ;
	for (i = 0 ; i < N ; i ++)
	{
		scanf ("%d-%d %d" , &teamNum , &playerNum , &playerScore) ;
		teamScore[teamNum] += playerScore ;
		if (teamScore[teamNum] > theMaxScore)
		{
			theMaxScore = teamScore[teamNum] ;
			theWinTeam = teamNum ;
		}
	}
	cout << theWinTeam << " " << theMaxScore ;
	return 0 ;
}