#include <iostream>
#include<ctime>
#include<cstdlib>
#include"janken.h"
using namespace std;

enum ser
{
	janken=1,
	kazuate=2,
	end=3,
};

int main()
{
	int a;
	cout << "1,じゃんけんゲーム:2,数あてゲーム:3,終了" << endl;
	cin >> a;
	switch (a)
	{
	case janken:jankenn();break;

	}
}