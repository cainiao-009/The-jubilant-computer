#include<bits/stdc++.h>
#include<time.h>
#include<iostream>
#include"conio.h"
using namespace std;

int language=1;
void llanguage()
{
	system("cls");
	int select;
	if(language==1)
	{
		cout<<"Please select language"<<endl;
	}
	if(language==2)
	{
		cout<<"��ѡ������"<<endl;
	}
	cout<<"1.English"<<endl;
	cout<<"2.��������"<<endl;
	if(language==1)
	{
		cout<<"Please select(when you��re done, press enter):"<<endl;
	}
	if(language==2)
	{
		cout<<"��ѡ��ѡ�����밴�س�����"<<endl;
	}
	cin>>select;
	if(select==1)
		language=1;
	else
		if(select==2)
			language=2;
		else
		{
			if(language==1)
			{
				cout<<"That��s not an option"<<endl;
				for(int i=0;i<=999999999;i++);
				llanguage();
				return;
			}
			if(language==2)
			{
				cout<<"û�����ѡ��"<<endl;
				for(int i=0;i<=999999999;i++);
				llanguage();
				return;
			}
		}
}
void tutorial()
{
	system("cls");
	if(language==1)
	{
		cout<<"This is a maze game!You need to move the ball'O' up, down, left, and right by 'w','s','a','d'. When the ball moves to the 'X'', you win! Next, press enter to go to the pre-game interface..."<<endl;
	}
	if(language==2)
	{
		cout<<"���Ǹ��Թ���Ϸ������Ҫͨ����w����s����a����d������С��O�����������ƶ�����С���ƶ�����X��ʱ������ʤ���ˣ��������밴�س�ת����ϷԤ������..."<<endl;
	}
	getchar();
	getchar();
}
void go()
{
	system("cls");
	int select;
	if(language==1)
	{
		cout<<"The game is ready!Please select:"<<endl;
		cout<<"1.Let the games begin"<<endl;
		cout<<"2.Game tutorial"<<endl;
		cout<<"3.Select language"<<endl;
		cout<<"Please select(when you��re done, press enter):"<<endl;
		cin>>select;
		if(select==1)	return;
		else
			if(select==2)
			{
				tutorial();
				go();
				
			}
			else
				if(select==3)
				{
					llanguage();
					go();
				}
				else
				{
					cout<<"That��s not an option"<<endl;
					for(int i=0;i<=999999999;i++);
					go();
					return;
				}
	}
	if(language==2)
	{
		cout<<"��Ϸ��׼���ã���ѡ��"<<endl;
		cout<<"1.��ʼ��Ϸ"<<endl;
		cout<<"2.��Ϸ�̳�"<<endl;
		cout<<"3.ѡ������"<<endl;
		cout<<"��ѡ��ѡ�����밴�س�����"<<endl;
		cin>>select;
		if(select==1)	return;
		else
			if(select==2)
			{
				tutorial();
				go();
				
			}
			else
				if(select==3)
				{
					llanguage();
					go();
				}
				else
				{
					cout<<"û�����ѡ��"<<endl;
					for(int i=0;i<=999999999;i++);
					go();
					return;
				}
	}
}
int main()
{
	char a[20][45]={"####################################",
					"#O         # #  #         #     #  #",
					"#  ####### # # # ## ####  # # # #  #",
					"# #  #     # # # #  #   # # # #   ##",
					"# #  #  #  #   # # # ## # # # ### ##",
					"# #     ###  # #   # #  # ##  #   ##",
					"#  #####    ######## #  # ## #  ## #",
					"##        # #        # # # # #  #  #",
					"# ########     ######  # # # #  #  #",
					"# #   # #  # # #    # #  #   #  #  #",
					"# # # # #  # # #### # #   ### # # ##",
					"# # #     #  #  #   # # # #   # # ##",
					"#   ######  # # # ##  # #         ##",
					"####   #   #  #   #  #  ###### ## ##",
					"#####          ###         #   #  ##",
					"#####                      #####  ##",
					"#################################X##"};
	char b[20][45]={"####################################",
					"#O         # #  #         #     #  #",
					"#  ####### # # # ## ####  # # # #  #",
					"# #  #     # # # #  #   # # # #   ##",
					"# #  #  #  #   # # # ## # # # ### ##",
					"# #     ###  # #   # #  # ##  #   ##",
					"#  #####    ######## #  # ## #  ## #",
					"##        # #        # # # # #  #  #",
					"# ########     ######  # # # #  #  #",
					"# #   # #  # # #    # #  #   #  #  #",
					"# # # # #  # # #### # #   ### # # ##",
					"# # #     #  #  #   # # # #   # # ##",
					"#   ######  # # # ##  # #         ##",
					"####   #   #  #   #  #  ###### ## ##",
					"#####          ###         #   #  ##",
					"#####                      #####  ##",
					"#################################X##"};
	int i,j,x=1,y=1;
	char c;
	go();
	system("cls");
	for(i=0;i<20;i++)
	{
		for(j=0;j<45;j++)
			cout<<a[i][j];
		cout<<endl;
	}
	while(1)
	{
		c=getch();
		if(c=='w')
			if(b[y-1][x]!='#')
			{
				if(b[y-1][x]=='X')	break;
				b[y-1][x]='O';
				b[y][x]=' ';
				y--;
			}
		if(c=='s')
			if(b[y+1][x]!='#')
			{
				if(b[y+1][x]=='X')	break;
				b[y+1][x]='O';
				b[y][x]=' ';
				y++;
			}
		if(c=='a')
			if(b[y][x-1]!='#')
			{
				if(b[y][x-1]=='X')	break;
				b[y][x-1]='O';
				b[y][x]=' ';
				x--;
			}
		if(c=='d')
			if(b[y][x+1]!='#')
			{
				if(b[y][x+1]=='X')	break;
				b[y][x+1]='O';
				b[y][x]=' ';
				x++;
			}
		system("cls");
		for(i=0;i<20;i++)
		{
			for(j=0;j<45;j++)
				cout<<b[i][j];
			cout<<endl;
		}
			
	}
	system("cls");
	if(language==1)
	{
		cout<<"You win!"<<endl;
	}
	if(language==2)
	{
		cout<<"��Ӯ�ˣ�"<<endl;
	}
	for(int i=0;i<=999999999;i++);
}
