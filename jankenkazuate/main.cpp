#include <iostream>
#include<ctime>
#include<cstdlib>
#include"janken.h"
#include"kazuate.h"
using namespace std;

enum ser
{
	janken=1,
	kazuate=2,
	en=3,
};

int main()
{
	initrand();

	int a;
	int end = 0;
	while (end==0)
	{
		cout << "1,じゃんけんゲーム:2,数あてゲーム:3,終了" << endl;
		cin >> a;
		switch (a)
		{
		case janken:
			jankenn();continue;
		case kazuate:
			Ngg();continue;
		case en:end++;break;
		default:
			cout << "1～3を入力してください。" << endl;
			break;
		}
	}
}