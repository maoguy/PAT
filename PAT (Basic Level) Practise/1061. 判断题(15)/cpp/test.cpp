#include<iostream>
using namespace std ;

int main (int argc , char **argv)
{
	int N , M ; //学生人数、判断题数量
	
	cin >> N ;	//输入学生人数
	cin >> M ;	//输入判断题数量

	int *scores = new int[M]() ;	//动态创建每道题对应分数的数组
	int i ;

	for (i = 0 ; i < M ; i++)
	{
		cin >> scores[i] ;		//输入每道题的分数
	}

	bool *answers = new bool[M]() ;		//动态创建每道题对应答案的数组

	for (i = 0 ; i < M ; i++)
	{
		cin >> answers[i] ;		//输入每道题的答案
	}

	int *studentScores = new int[N]();	//动态创建每个学生的得分数组
	int j ;
	bool studentAnswer ;
	for (i = 0 ; i < N ; i++)
	{
		studentScores[i] = 0 ;		//学生成绩初始化
		for (j = 0 ; j < M ; j++)
		{
			cin >> studentAnswer ;
			if (studentAnswer == answers[j])	//判断答案是否正确
			{
				studentScores[i] += scores[j] ;		//加分
			}
		}
	}
	
	delete []scores ;	//释放内存
	delete []answers ;

	for (i = 0 ; i < N ; i++)
	{
		cout << studentScores[i] << "\n" ;
	}
	
	delete []studentScores ;
	return 0 ;
}