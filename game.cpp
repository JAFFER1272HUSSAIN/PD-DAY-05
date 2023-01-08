#include <iostream>
#include <windows.h>
using namespace std;
// function prototypes....
void printMaze();
void gotoxy(int, int);
char getCharAtxy(int, int);
void printpacman(int, int);
void erasepacman(int, int);
// main function...
main()
{
	int pacmanX = 2;
	int pacmanY = 3;
	bool gamerunning = true;
	char nextlocation;
	printMaze();
	printpacman(pacmanX, pacmanY);
	while (gamerunning)
	{
		if (GetAsyncKeyState(VK_LEFT))
			nextlocation = getCharAtxy(pacmanX - 1, pacmanY);
		if (nextlocation == ' ')
		{
			erasepacman(pacmanX, pacmanY);
			pacmanX = pacmanX - 1;
			printpacman(pacmanX, pacmanY);
		}
		if (GetAsyncKeyState(VK_RIGHT))
			nextlocation = getCharAtxy(pacmanX + 1, pacmanY);
		if (nextlocation == ' ')
		{
			erasepacman(pacmanX, pacmanY);
			pacmanX = pacmanX + 1;
			printpacman(pacmanX, pacmanY);
		}
		if (GetAsyncKeyState(VK_UP))
			nextlocation = getCharAtxy(pacmanX, pacmanY - 1);
		if (nextlocation == ' ')
		{
			erasepacman(pacmanX, pacmanY);
			pacmanY = pacmanY - 1;
			printpacman(pacmanX, pacmanY);
		}
		if (GetAsyncKeyState(VK_DOWN))
			nextlocation = getCharAtxy(pacmanX, pacmanY + 1);
		if (nextlocation == ' ')
		{
			erasepacman(pacmanX, pacmanY);
			pacmanY = pacmanY + 1;
			printpacman(pacmanX, pacmanY);
		}
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			gamerunning = false;

		}
		Sleep(200);
	}
}
// printing gamemaze....
void printMaze()
{
	cout << "####################" << endl;
	cout << "#                  #" << endl;
	cout << "#                  #" << endl;
	cout << "#                  #" << endl;
	cout << "#                  #" << endl;
	cout << "#                  #" << endl;
	cout << "#                  #" << endl;
	cout << "#                  #" << endl;
	cout << "#                  #" << endl;
	cout << "####################" << endl;
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(int x, int y)
{
	CHAR_INFO ci;
	COORD xy = { 0, 0 };
	SMALL_RECT rect = { x,y,x,y };
	COORD coordBufsize;
	coordBufsize.X = 1;
	coordBufsize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
// printing pacman....
void printpacman(int x, int y)
{
	gotoxy(x, y);
	cout << "P";
}
// erasing pacman....
void erasepacman(int x, int y)
{
	gotoxy(x, y);
	cout << " ";
}