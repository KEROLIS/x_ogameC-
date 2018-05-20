

#include "stdafx.h"
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cmath>
#include<ctype.h>
#include<conio.h>

using namespace std;
 
int _tmain(int argc, _TCHAR* argv[])

{

	char c = '1';
	int i = 0;
	char x[3][3] = { { '1', '2', '3' },
	                 { '4', '5', '6' },
	                 { '7', '8', '9' } };	
	P:

system("cls");

		
		cout << "note:\n player 1 :(x)\n player 2 :(o) \nenjoy :)\n";
		cout << "\n\t-------------------------------------------------\n\t|\t" << x[0][0] << "\t|\t" << x[0][1] << "\t|\t" << x[0][2] << "\t|\n\t-------------------------------------------------";
		cout << "\n\t|\t" << x[1][0] << "\t|\t" << x[1][1] << "\t|\t" << x[1][2] << "\t|\n\t-------------------------------------------------";
		cout << "\n\t|\t" << x[2][0] << "\t|\t" << x[2][1] << "\t|\t" << x[2][2] << "\t|\n\t-------------------------------------------------\n";
	v:
		cout << "chose your square:";
		cout << "player" << i%2+1<< "\t\n";
		cin >> c;

		switch (c)
		{



		case '1':

			while ((x[0][0] == 'o') || (x[0][0] == 'x'))
			{


				cout << "the sqare is full!\n";
				goto v;

			}

			if ((x[0][0] != 'o') && (x[0][0] != 'x'))
			{
				if (i % 2 + 1==1)
				{
					x[0][0] = 'x';
				}
				else{ x[0][0] = 'o'; }
			}



			break;
		case '2':
			while ((x[0][1] == 'o') || (x[0][1] == 'x'))
			{


				cout << "the sqare is full!\n";
				goto v;

			}
			if ((x[0][1] != 'o') || (x[0][1] != 'x'))
			{

				if (i % 2 + 1 == 1)
				{
					x[0][1] = 'x';
				}
				else{ x[0][1] = 'o'; }
			}


			

			break;
		case '3':
			while ((x[0][2] == 'o') || (x[0][2] == 'x'))
			{


				cout << "the sqare is full!\n";
				goto v;

			}
			if ((x[0][2] != 'o') && (x[0][2] != 'x'))
			{

				if (i % 2 + 1 == 1)
				{
					x[0][2] = 'x';
				}
				else{ x[0][2] = 'o'; }
			


			}
			break;
		case '4':
			while ((x[1][0] == 'o') || (x[1][0] == 'x'))
			{


				cout << "the sqare is full!\n";
				goto v;

			}
			if ((x[1][0] != 'o') && (x[1][0] != 'x'))
			{
				if (i % 2 + 1 == 1)
				{
					x[1][0] = 'x';
				}
				else{ x[1][0] = 'o'; }
			
			}
			break;
		case '5':
			while ((x[1][1] == 'o') || (x[1][1] == 'x'))
			{


				cout << "the sqare is full!\n";
				goto v;

			}
			if ((x[1][1] != 'o') && (x[1][1] != 'x'))
			{
				if (i % 2 + 1 == 1)
				{
					x[1][1] = 'x';
				}
				else{ x[1][1] = 'o'; }
			}
			break;
		case '6':
			while ((x[1][2] == 'o') || (x[1][2] == 'x'))
			{


				cout << "the sqare is full!\n";
				goto v;

			}
			if ((x[1][2] != 'o') && (x[1][2] != 'x'))
			{
				if (i % 2 + 1 == 1)
				{
					x[1][2] = 'x';
				}
				else{ x[1][2] = 'o'; }
			}
			break;
		case '7':
			while ((x[2][0] == 'o') || (x[2][0] == 'x'))
			{


				cout << "the sqare is full!\n";
				goto v;

			}
			if ((x[2][0] != 'o') && (x[2][0] != 'x'))
			{

				if (i % 2 + 1 == 1)
				{
					x[2][0] = 'x';
				}
				else{ x[2][0] = 'o'; }
			}
			break;
		case '8':
			while ((x[2][1] == 'o') || (x[2][1] == 'x'))
			{


				cout << "the sqare is full!\n";
				goto v;

			}
			if ((x[2][1] != 'o') && (x[2][1] != 'x'))
			{

				if (i % 2 + 1 == 1)
				{
					x[2][1] = 'x';
				}
				else{ x[2][1] = 'o'; }
			}
			break;
		case '9':
			while ((x[2][2] == 'o') || (x[2][2] == 'x'))
			{


				cout << "the sqare is full!\n";
				goto v;

			}
			if ((x[2][2] != 'o') && (x[2][2] != 'x'))
			{
				if (i % 2 + 1 == 1)
				{
					x[2][2] = 'x';
				}
				else{ x[2][2] = 'o'; }
			}
			break;
		default:
			cout << "not found!\n";
			Sleep(2000);

		}
		if ((x[0][1]) == (x[0][2]) && (x[0][1]) == (x[0][0]) && (x[0][2]) == (x[0][0]))
		{
			cout << "\nplayer " << i % 2 + 1 << " wins" << endl;
		}
		else if (x[1][1] == x[1][2] && x[1][1] == x[1][0] && x[1][2] == x[1][0])
		{
			cout << "\nplayer " << i % 2 + 1 << " wins" << endl;
		}
		else if (x[2][1] == x[2][2] && x[2][1] == x[2][0] && x[2][2] == x[2][0])
		{
			cout << "\nplayer " << i % 2 + 1 << " wins" << endl;
		}
		else if (x[1][0] == x[2][0] && x[1][0] == x[0][0] && x[2][0] == x[0][0])
		{
			cout << "\nplayer " << i % 2 + 1 << " wins" << endl;
		}
		else if (x[0][1] == x[2][1] && x[0][1] == x[1][1] && x[2][1] == x[1][1])
		{
			cout << "\nplayer " << i % 2 + 1 << " wins" << endl;
		}
		else if (x[2][2] == x[1][2] && x[2][2] == x[0][2] && x[1][2] == x[0][2])
		{
			cout << "\nplayer " << i % 2 + 1 << " wins" << endl;
		}
		else if (x[0][0] == x[1][1] && x[0][0] == x[2][2] && x[1][1] == x[2][2])
		{
			cout << "\nplayer " << i % 2 + 1 << " wins" << endl;
		}
		else if (x[1][1] == x[0][2] && x[1][1] == x[2][0] && x[0][2] == x[2][0])
		{
			cout << "\nplayer " << i % 2 + 1 << " wins" << endl;
		}
		
		else
		{
			i++;
			goto p;
		}
		
		
		

		return 0;
	}

