#include<iostream>
#include<windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printPacman();
void erasePacman();
int pacmanX=4;
int pacmanY=4;
void showghost(int x,int y);
void clear(int x,int y,char previous);
void clear2(int x,int y,char previous2);
void showghost2(int x,int y);

main()
{


bool gameRunning = true;
int gx=1;
    int gy=1;
    int gx2=3;
    int gy2=3;
    string direction = "right";
    string direction2 ="up";
    char previous=' ';
    char previous2=' ';
    system("cls");
    printMaze();
    showghost(gx,gy);
    showghost2(gx2,gy2);
    
gotoxy(pacmanX, pacmanY);
cout << "P";
while (gameRunning){
   
  if(direction=="right")
  {
    char nextLocation = getCharAtxy(gx+1,gy);
    if(nextLocation=='%')
    {
        direction="left";
    }
    else if(nextLocation==' ' || nextLocation=='.')
    {
        clear(gx,gy,previous);
        gx=gx+1;
        previous=nextLocation;
        showghost(gx,gy);
         Sleep (100);
    }
  }  
  if(direction=="left")
  {
    char nextLocation = getCharAtxy(gx-1,gy);
    if(nextLocation=='%')
    {
        direction="right";
    }
    else if(nextLocation==' ' || nextLocation=='.')
    {
        clear(gx,gy,previous);
        gx=gx-1;
        previous=nextLocation;
        showghost(gx,gy);
         Sleep (100);
    }
  }  
  if(direction2=="up")
  {
    char nextLocation = getCharAtxy(gx2 ,gy2+ 1);
    if(nextLocation=='%')
    {
        direction2="down";
    }
    else if(nextLocation==' ' || nextLocation=='.')
    {
        clear2(gx2,gy2,previous2);
        gy2=gy2+1;
        previous2=nextLocation;
        showghost(gx2,gy2);
         Sleep (100);
    }
  }  
   if(direction2=="down")
  {
    char nextLocation = getCharAtxy(gx,gy2 - 1);
    if(nextLocation=='%')
    {
        direction2="up";
    }
    else if(nextLocation==' ' || nextLocation=='.')
    {
        clear2(gx,gy,previous);
        gy2=gy2 - 1;
        previous2=nextLocation;
        showghost(gx2,gy2);
         Sleep (100);
    }
  }  
if (GetAsyncKeyState(VK_LEFT))
{
char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
if (nextLocation == ' ')
 {
    erasePacman();
    pacmanX = pacmanX - 1;
    printPacman();
 }
}

if (GetAsyncKeyState(VK_RIGHT))
{
char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
if (nextLocation == ' ')
 {
    erasePacman();
    pacmanX = pacmanX + 1;
    printPacman();
 }
}

if (GetAsyncKeyState(VK_UP))
{
char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
if (nextLocation == ' ')
{
    erasePacman();
    pacmanY = pacmanY - 1;
    printPacman();
}
}

if (GetAsyncKeyState(VK_DOWN))
{
char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
if (nextLocation == ' ')
{
    erasePacman();
    pacmanY = pacmanY + 1;
    printPacman();
}
}

if (GetAsyncKeyState(VK_ESCAPE))
{
gameRunning = false;
}
Sleep(100);
}
}


void printMaze()
{
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%                                                                    %" << endl;
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

void erasePacman()
{
    
gotoxy(pacmanX, pacmanY);
cout << " ";
}

void printPacman()
{
    
gotoxy(pacmanX, pacmanY);
cout << "P";
}

char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void clear(int x,int y,char previous)
{
gotoxy(x,y);
cout<<previous;
}
void showghost(int x,int y)
{
    gotoxy(x,y);
    cout<<"G";
}
void showghost2(int x,int y)
{
    gotoxy(x,y);
    cout<<"G";
}
void clear2(int x,int y,char previous2)
{
gotoxy(x,y);
cout<<previous2;
}