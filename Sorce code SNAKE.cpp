#include <conio.h>
#include <iostream>
#include <windows.h>

const int widths = 80;
const int height = 20;

int x,y;

int fruitCordX, fruitCordY;

int playerScore;

int snakeTailX[100]. snakeTailY[100];

int snakeTailLen;

enum snakesDirection { STOP = 0, LEFT, RIGHT, UP. DOWN} 
snakesDirection sDir;
bool isGameOver;
void GameInit()
{
	isGameOver = false;
	sDir = STOP
	x = width / 2;
	y = height / 2;
	fuitCordX = rand() % width;
	fruitCordY = rand() %height;
	playerscore = 0;
}
void GameRender(string playerName)
{
	system ("cls");
	
	for (int i = 0; i < width + 2; i++)
	  cout<<"-";
	  cout << endl;
	  
	   for (int i = 0; i <height; i++){
	   	 for (int j = 0; j <= width; j++){
			if (j == 0||j==x)
			   cout << "O";
			   if (j==0||j== width)
			      cout << "|";
			      
			if (i == y && j == x)
			  cout <<"0";

else {
	 bool prTail = false;
	 for (int k = 0; k < snakeTailLen; k++)
	bool boots = false;
}

}
