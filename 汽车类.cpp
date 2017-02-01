#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#pragma comment (lib,"winmm.lib")
using namespace std;
class car
{
private:
	char type[20];
	char color[20];
public:
	void set(char *t, char *c);
	void movecar(int l, int k);//l???????k?????
	void horm(int num);
	void downcar(int l, int k);
	void play_mp3(char *ps);
	void backcar(int l);
};
void car::backcar(int l)
{
	for (int i = 0; i < l; i++)
	{
		cout << "\b\b\b" << "   " << "\b\b\b\b" << "o_o";
		Sleep(500);
	}
}
void car::set(char *t, char *c)
{
	strcpy(type, t);
	strcpy(color, c);
}
void car::movecar(int l, int k)
{

	for (int i = 0; i < l; i++)
	{
		cout << ' ' << "o_o";//' '???????????
		Sleep(1000 / k);//???1/k????????k???????(1/1/k)
		cout << "\b\b\b";//??????????
	}
	cout << "o_o";
}

void car::downcar(int l, int k)
{

	for (int i = 0; i < l; i++)
	{
		cout << "o_o";
		Sleep(1000 / k);
		cout << "\b\b\b" << "   " << endl;
	}
	cout << "o_o";
}
void car::horm(int num)
{
	for (int i = 0; i < num; i++)
		cout << '\a';

}
void car::play_mp3(char *ps)
{
	char str[100] = "play ";
	strcat(str, ps);
	cout << str;
	mciSendStringA(str, NULL, 0, NULL);//????????????
	char a;
	cin >> a;
}
int main()
{
	car benzi;
	benzi.set("benzi", "white");
	benzi.movecar(10, 2);
	benzi.backcar(10);
	system("pause");
	return 0;
}
