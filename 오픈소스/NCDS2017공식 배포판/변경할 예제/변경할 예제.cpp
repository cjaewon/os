// 변경할 예제.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include < windows.h >   
#include <iostream>
#include <fstream>
#include <time.h>
#include <ctime>
#include <lmcons.h>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <WinInet.h>
#pragma comment (lib, "WinInet.lib")
#pragma comment(lib, "winmm.lib")


using namespace std;


//---------------------------------
string XOR(string data, char key[])
{
	string xorstring = data;
	for (int i = 0; i < xorstring.size(); i++) {
		xorstring[i] = data[i] ^ key[i % (sizeof(key) / sizeof(char))];
	}
	return xorstring;
}
//---------------------------------

void setcolor(int color, int bgcolor)
{
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}



void gotoxy(int x, int y) {
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void txtlock()
{
	
	string input;
	int count = 0, length;

	cout << "암호화할 문자 또는 복호화(text)\n";

	getline(cin, input);
	getline(cin, input);

	length = (int)input.length();

	for (count = 0; count < length; count++)
	{
		if (isalpha(input[count]))
		{
			input[count] = tolower(input[count]);
			for (int i = 0; i<13; i++)
			{
				if (input[count] == 'z')
					input[count] = 'a';
				else
					input[count]++;
			}
		}
	}
	cout << "암호화 또는 복호화:" << input << endl;
	
}




//---------------------------------
int main()
{   //user
#pragma warning(disable:4996)

	srand(time(NULL));
	//암호화


	fstream locking;
	ofstream bbl;
	//암호화

	//name



 //
/*

*/ 
	menu:
	cout<<"	       __"<<endl;
	cout<<"     _________/ /____"<<endl;
	cout<<"    / ___/ __  / ___/"<<endl;
	cout<<"    / /__/ /_/ (__  ) "<<endl;
	cout<<"   /___/ (__,_/____/"<<endl;
	
	//cout<<"        \/     \/    \/ "<<endl;
 cout << "────────────────" << endl;
	cout << "Ncds(2017)[New commad Easy Tool] " << endl;
	cout << "────────────────"<< endl;
	system("title Ncds[command tool]");
	char cpe[80];
    char cmd[200];
	char ha[200];
	char wow[200];
	while (1)
	{
		home:
		setcolor(3, 0);
		cout << "cds/++/";
		setcolor(7, 0);
		cin >> cpe;

		if (!strcmp(cpe, "time"))
		{
			SYSTEMTIME a;
			GetLocalTime(&a);

			cout << "DATE:" << a.wDay << "/";
			cout << a.wMonth << "/";
			cout << a.wYear << endl;

			cout << "TIME:" << a.wHour << ":";
			cout << a.wMinute << ":";
			cout << a.wSecond << endl;
			goto home;
		}
		else if (!strcmp(cpe, "Ncds"))
		{
			cout << " ──────────────── " << endl;
			cout << "Ncds 2017 (user)" << endl;
			cout <<" ──────────────── "<<endl;
			cout << "make by : jewon " << endl;
			cout << "Ncds [command easy tool] " << endl;
			cout << "Ncds2017(1)[new Digestive chocolate]" << endl;
			cout << "제작자 유튜브:최재원 c언어" << endl;
			goto home;
		}
		else if (!strcmp(cpe, "user"))
		{

       TCHAR username[UNLEN + 1];
		DWORD username_len = UNLEN + 1;
		GetUserName((TCHAR*)username, &username_len);
			cout << "USER name:"<<username<< endl;
			system("hostname");
			setcolor(15, 0);
			cout << "window versiom[user]";
			system("ver");
			setcolor(7, 0);
			
			
			
			goto home;
		}
		else if (!strcmp(cpe, "c"))
		{
			system("cls");
			goto home;
		}
		else if (!strcmp(cpe, "i/wifi"))
		{
			system("netsh wlan show profiles");
			cout << "wifi를 검색하였습니다" << endl;
			
			
			
			goto home;
		}
		//cat
		else if (!strcmp(cpe, "r/txt"))
		{
			cout << "파일 경로 File Route:";
			cin >> ha;

			sprintf_s(cmd,"type %s\n",ha);
			system(cmd);
			printf("\n");
			

			goto home;
		}
		//전체화면
		else if (!strcmp(cpe, "Ncds/full"))
		{
			system("mode con: cols=1960 lines=1100");
			


			goto home;
		}
		//찾기
		else if (!strcmp(cpe, "find"))
		{
			system("dir");
			printf("\n");
			goto home;
		}
		else if (!strcmp(cpe, "find/-s"))
		{

			cout << "파일 경로 File Route:";
			cin >> ha;

			sprintf_s(cmd, "dir %s\n", ha);
			system(cmd);
			printf("\n");
			goto home;
		}
		//아이피
		else if (!strcmp(cpe, "random/ip"))
		{
			cout << "10개의 랜덤 아이피를 보여줍니다." << endl;
			cout << " ──────────────── " << endl;
			for (int i = 0; 10 > i; i++)
			{
				setcolor(4, 0);
				cout << rand() % 200 + 40 <<"-"<< rand() % 244 + 1 << "-" << rand() % 244 + 1 << "-" << rand() % 244+ 200<< endl;
				setcolor(7, 0);
			}
			cout << " ──────────────── " << endl;
			goto home;
		}
		else if (!strcmp(cpe, "menu"))
		{
			system("cls");
			

			goto menu;
		}
		else if (!strcmp(cpe, "rain/start"))
		{
			

			PlaySound(TEXT("Ncdsbgm.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			cout << "BGM(실행) 자세한 정보는:helper에서 확인하세요" << endl;
			cout << "rain/stop 으로 BGM을 끌 수 있습니다 " << endl;
			goto home;
		}
		else if (!strcmp(cpe, "rain/stop"))
		{
			cout << "!Music play!" << endl;
			PlaySound(NULL, 0, 0);
			goto home;
		}
		else if (!strcmp(cpe, "helper"))
		{	setcolor(8, 0);
			cout << "────────────" << endl;
			cout << "bgm:It&#039;s dance time" << endl;
			cout << "maker:딸사과" << endl;
			cout << "────────────" << endl;
			
			cout << "감사합니다(Ncds제작자)" << endl;
			setcolor(7, 0);
			goto home;
		}
		else if (!strcmp(cpe, "m/f"))
		{
			setcolor(8, 0);
			cout << "파일 이름 File name:";
			cin >> ha;

			sprintf_s(cmd, "md %s\n", ha);
			system(cmd);
			printf("\n");
			cout <<ha<<"파일이 만들어졌습니다"<< endl;
			setcolor(7, 0);
			goto home;
		}
		else if (!strcmp(cpe, "m/f"))
		{
			setcolor(8, 0);
			cout << "파일 이름 File name:";
			cin >> ha;

			sprintf_s(cmd, "md %s\n", ha);
			system(cmd);
			printf("\n");
			cout << ha << "파일이 만들어졌습니다" << endl;
			setcolor(7, 0);
			goto home;
		}
		else if (!strcmp(cpe, "mouse/xy"))
		{
			setcolor(8, 0);
			system("cls");
			while (1)
			{
				
				POINT pos;
				GetCursorPos(&pos);
				gotoxy(1, 5);
				cout << "x:" << pos.x<<"-";
				cout <<"y:" << pos.y << endl;
				cout << "멈출시려면 shift키를 누르세요" << endl;
				if (GetAsyncKeyState(VK_SHIFT))
				{
					break;;
				}
			}
			setcolor(7, 0);
			goto home;
		}
		else if (!strcmp(cpe, "txt/alocker"))
		{
			//변수
			
			txtlock();
			system("pause");
			goto home;
		}
		
		
		else if (!strcmp(cpe, "txt/block"))
		{
			
			//변수
			bbl.open("Ncdslock.txt");
			bbl.close();

			char key[3];
			cout << "암호화에 필요한 key(3글자 영문만 가능합니다)" << endl;
			cin >> key;
			string lll;
			cout << "암호화 글자:";
			getline(cin,lll );
			getline(cin, lll);
			
			string data = XOR(lll, key);
			locking.open("Ncdslock.txt");

			locking << data;
			locking.close();
			cout << "Ncdslock.txt에 암호화된 글자가 저장되었습니다 \n 암호화:";
			cout << data;
			cout << "\n";
			goto home;
		}
		else if (!strcmp(cpe, "txt/bunlock"))
		{
			//변수
			string a;
			char key[3];
			cout << "복호화에 필요한 key(3글자 영문만 가능합니다)" << endl;
			cin >> key;

			locking.open("Ncdslock.txt");
			locking >> a;
			string data = XOR(a, key);
			locking << a;
			locking.close();
			cout << "복화화가 완료되었습니다.\n 복화화:";
			cout << data;
			cout << "\n";
			goto home;
		}
		
		else if (!strcmp(cpe, "Ncds/q"))
		{
			//변수
			system("start https://discord.gg/Cj63a8h");
			cout << "Ncds 디스코드 퀴즈 퀘스트 암호화등 Ncds 업데이트 관련 글을 볼수 있습니다" << endl;
			goto home;
		}
		else if (!strcmp(cpe, "network"))
		{
			//변수

			DWORD dwFlag = 0;
			TCHAR szName[256] = { 0, };
			if (::InternetGetConnectedStateEx(&dwFlag, szName, 256, 0))
			{
				cout << "internet 연결이 되어있습니다" << endl;
				cout << "internet connect" << endl;
			}
			else
			{
				cout << "인터넷 연결이 안되있습니다.인터넷 선등을 확인해주세요." << endl;
				cout << "internet false" << endl;
				
			}
			
			goto home;
		}
		
		
		
	}
	
	return 0;
}


