#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void initrand()
{
	srand((unsigned int)time(NULL));
}

enum te
{
	gu=0,
	tyoki=1,
	pa=2
};

int check(int te)
{
	return
		te == gu ? gu :
		te == tyoki ? tyoki :
		te == pa ? pa :
		3;
}

void aite(int ate)
{
	ate = rand() % 3;
}

void kekka(int te, int ate)
{
	cout << "結果は";
	if (te == ate)
	{
		cout << "aiko" << endl;
	}
	else if ((te == 0 && ate == 1) || (te == 1 && ate == 2) || (te == 2 && ate == 0))
	{
		cout << "win" << endl;
	}
	else
	{
		cout << "lose" << endl;
	}
}

void jankenn()
{
	int te,ate;
	const char* str[] = { "グー","チョキ","パー" };
	cout << "じゃんけんゲーム！好きな手を選んでね" << endl << "グー：０、チョキ：１、パー：２" << endl;
	cin >> te;
	cout << "あなたが出したのは" << str[te] << "です。";
	aite(ate);
	cout << "相手が出したのは" << str[ate] << "です。";
	kekka(te,ate);
}