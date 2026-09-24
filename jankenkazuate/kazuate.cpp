#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;



void Ini(int& num)
{
	num = rand() % 256+1;
}

void play(int num,int mynum,int count)
{
	while (num != mynum)
	{
		cin >> mynum;
		if (num > mynum)
		{
			cout << "もっと上だよ" << endl;
		}
		else if (num < mynum)
		{
			cout << "もっと下だよ" << endl;
		}
		count++;
	}
	cout << "正解！" << count << "回で当てれたよ" << endl;
}

void Ngg()
{
	int num;
	Ini(num);
	cout << "数あてゲーム！" << endl << "1～256の数字の中から1つの数字を当ててみてね" << endl;
	int mynum = 0;
	int count = 0;
	play(num, mynum, count);
}