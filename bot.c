//file"bot.c"
//#include<tictactoe.c>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#ifdef __unix__
    #define clrscr() printf("\x1B[2J")
#elif __BORLANDC__ && __MSDOS__
    #include <conio.h>
#elif __WIN32__ || _MSC_VER
    #define clrscr() system("cls")
#else
    #define clrscr() printf("clrscr() - Fehler\n")
#endif


extern char spielfeld[3][3];
extern void print_spielfeld();
extern int win();
extern void repeat();

void bot(char z)
{
    srand(time(NULL));

    printf("Spieler \"%c\" ist an der reihe\n",z);
    if(spielfeld[0][0]==z &&
       spielfeld[0][1]==z &&
       spielfeld[0][2] == ' ')
       {
           spielfeld[0][2]=z;
       }
    else if(spielfeld[1][0]==z &&
            spielfeld[1][1]==z &&
            spielfeld[1][2] == ' ')
            {
                spielfeld[1][2]=z;
            }
    else if(spielfeld[2][0]==z &&
            spielfeld[2][1]==z &&
            spielfeld[2][2] == ' ')
            {
                spielfeld[2][2]=z;
            }
    else if(spielfeld[0][2]==z &&
            spielfeld[0][1]==z &&
            spielfeld[0][0] == ' ')
            {
                spielfeld[0][0]=z;
            }
    else if(spielfeld[1][2]==z &&
            spielfeld[1][1]==z &&
            spielfeld[1][0] == ' ')
            {
                spielfeld[1][0]=z;
            }
    else if(spielfeld[2][2]==z &&
            spielfeld[2][1]==z &&
            spielfeld[2][0] == ' ')
            {
                spielfeld[2][0]=z;
            }
    else if(spielfeld[0][0]==z &&
            spielfeld[1][0]==z &&
            spielfeld[2][0] == ' ')
            {
                spielfeld[2][0]=z;
            }
    else if(spielfeld[0][1]==z &&
            spielfeld[1][1]==z &&
            spielfeld[2][1] == ' ')
            {
                spielfeld[2][1]=z;
            }
    else if(spielfeld[0][2]==z &&
            spielfeld[1][2]==z &&
            spielfeld[2][2] == ' ')
            {
                spielfeld[2][2]=z;
            }
    else if(spielfeld[2][0]==z &&
            spielfeld[1][0]==z &&
            spielfeld[0][0] == ' ')
            {
                spielfeld[0][0]=z;
            }
    else if(spielfeld[2][1]==z &&
            spielfeld[1][1]==z &&
            spielfeld[0][1] == ' ')
            {
                spielfeld[0][1]=z;
            }
    else if(spielfeld[2][2]==z &&
            spielfeld[1][2]==z &&
            spielfeld[0][2] == ' ')
            {
                spielfeld[0][2]=z;
            }
    else if(spielfeld[0][0]==z &&
            spielfeld[1][1]==z &&
            spielfeld[2][2] == ' ')
            {
                spielfeld[2][2]=z;
            }
    else if(spielfeld[2][2]==z &&
            spielfeld[1][1]==z &&
            spielfeld[0][0] == ' ')
            {
                spielfeld[0][0]=z;
            }
    else if(spielfeld[2][0]==z &&
            spielfeld[1][1]==z &&
            spielfeld[0][2] == ' ')
            {
                spielfeld[0][2]=z;
            }
    else if(spielfeld[0][2]==z &&
            spielfeld[1][1]==z &&
            spielfeld[2][0] == ' ')
            {
                spielfeld[2][0]=z;
            }
    else if(spielfeld[0][0] != ' ' &&
            spielfeld[0][1] != ' ' &&
            spielfeld[0][0] != z &&
            spielfeld[0][1] != z &&
            spielfeld[0][2] == ' ')
            {
                spielfeld[0][2]=z;
            }
    else if(spielfeld[1][0] != ' ' &&
            spielfeld[1][1] != ' ' &&
            spielfeld[1][0] != z &&
            spielfeld[1][1] != z &&
            spielfeld[1][2] == ' ')
            {
                spielfeld[1][2]=z;
            }
    else if(spielfeld[2][0] != ' ' &&
            spielfeld[2][1] != ' ' &&
            spielfeld[2][0] != z &&
            spielfeld[2][1] != z &&
            spielfeld[2][2] == ' ')
            {
                spielfeld[2][2]=z;
            }
    else if(spielfeld[0][2] != ' ' &&
            spielfeld[0][1] != ' ' &&
            spielfeld[0][2] != z &&
            spielfeld[0][1] != z &&
            spielfeld[0][0] == ' ')
            {
                spielfeld[0][0]=z;
            }
    else if(spielfeld[1][2] != ' ' &&
            spielfeld[1][1] != ' ' &&
            spielfeld[1][2] != z &&
            spielfeld[1][1] != z &&
            spielfeld[1][0] == ' ')
            {
                spielfeld[1][0]=z;
            }
    else if(spielfeld[2][2] != ' ' &&
            spielfeld[2][1] != ' ' &&
            spielfeld[2][2] != z &&
            spielfeld[2][1] != z &&
            spielfeld[2][0] == ' ')
            {
                spielfeld[2][0]=z;
            }
    else if(spielfeld[0][0] != ' ' &&
            spielfeld[1][0] != ' ' &&
            spielfeld[0][0] != z &&
            spielfeld[1][0] != z &&
            spielfeld[2][0] == ' ')
            {
                spielfeld[2][0]=z;
            }
    else if(spielfeld[0][1] != ' ' &&
            spielfeld[1][1] != ' ' &&
            spielfeld[0][1] != z &&
            spielfeld[1][1] != z &&
            spielfeld[2][1] == ' ')
            {
                spielfeld[2][1]=z;
            }
    else if(spielfeld[0][2] != ' ' &&
            spielfeld[1][2] != ' ' &&
            spielfeld[0][2] != z &&
            spielfeld[1][2] != z &&
            spielfeld[2][2] == ' ')
            {
                spielfeld[2][2]=z;
            }
    else if(spielfeld[2][0] != ' ' &&
            spielfeld[1][0] != ' ' &&
            spielfeld[2][0] != z &&
            spielfeld[1][0] != z &&
            spielfeld[0][0] == ' ')
            {
                spielfeld[0][0]=z;
            }
    else if(spielfeld[2][1] != ' ' &&
            spielfeld[1][1] != ' ' &&
            spielfeld[2][1] != z &&
            spielfeld[1][1] != z &&
            spielfeld[0][1] == ' ')
            {
                spielfeld[0][1]=z;
            }
    else if(spielfeld[2][2] != ' ' &&
            spielfeld[1][2] != ' ' &&
            spielfeld[2][2] != z &&
            spielfeld[1][2] != z &&
            spielfeld[0][2] == ' ')
            {
                spielfeld[0][2]=z;
            }
    else if(spielfeld[0][0] != ' ' &&
            spielfeld[1][1] != ' ' &&
            spielfeld[0][0] != z &&
            spielfeld[1][1] != z &&
            spielfeld[2][2] == ' ')
            {
                spielfeld[2][2]=z;
            }
    else if(spielfeld[2][2] != ' ' &&
            spielfeld[1][1] != ' ' &&
            spielfeld[2][2] != z &&
            spielfeld[1][1] != z &&
            spielfeld[0][0] == ' ')
            {
                spielfeld[0][0]=z;
            }
    else if(spielfeld[2][0] != ' ' &&
            spielfeld[1][1] != ' ' &&
            spielfeld[2][0] != z &&
            spielfeld[1][1] != z &&
            spielfeld[0][2] == ' ')
            {
                spielfeld[0][2]=z;
            }
    else if(spielfeld[0][2] != ' ' &&
            spielfeld[1][1] != ' ' &&
            spielfeld[0][2] != z &&
            spielfeld[1][1] != z &&
            spielfeld[2][0] == ' ')
            {
                spielfeld[2][0]=z;
            }
    else if(spielfeld[0][0] != ' ' &&
            spielfeld[2][0] != ' ' &&
            spielfeld[0][0] != z &&
            spielfeld[2][0] != z &&
            spielfeld[1][0] == ' ')
            {
                spielfeld[1][0]=z;
            }
    else if(spielfeld[0][1] != ' ' &&
            spielfeld[2][1] != ' ' &&
            spielfeld[0][1] != z &&
            spielfeld[2][1] != z &&
            spielfeld[1][1] == ' ')
            {
                spielfeld[1][1]=z;
            }
    else if(spielfeld[0][2] != ' ' &&
            spielfeld[2][2] != ' ' &&
            spielfeld[0][2] != z &&
            spielfeld[2][2] != z &&
            spielfeld[1][2] == ' ')
            {
                spielfeld[1][2]=z;
            }
    else if(spielfeld[0][0] != ' ' &&
            spielfeld[0][2] != ' ' &&
            spielfeld[0][0] != z &&
            spielfeld[0][2] != z &&
            spielfeld[0][1] == ' ')
            {
                spielfeld[0][1]=z;
            }
    else if(spielfeld[1][0] != ' ' &&
            spielfeld[1][2] != ' ' &&
            spielfeld[1][0] != z &&
            spielfeld[1][2] != z &&
            spielfeld[1][1] == ' ')
            {
                spielfeld[1][1]=z;
            }
    else if(spielfeld[2][0] != ' ' &&
            spielfeld[2][2] != ' ' &&
            spielfeld[2][0] != z &&
            spielfeld[2][2] != z &&
            spielfeld[2][1] == ' ')
            {
                spielfeld[2][1]=z;
            }
    else if(spielfeld[0][0] != ' ' &&
            spielfeld[2][2] != ' ' &&
            spielfeld[0][0] != z &&
            spielfeld[2][2] != z &&
            spielfeld[1][1] == ' ')
            {
                spielfeld[1][1]=z;
            }
    else if(spielfeld[2][0] != ' ' &&
            spielfeld[0][2] != ' ' &&
            spielfeld[2][0] != z &&
            spielfeld[0][2] != z &&
            spielfeld[1][1] == ' ')
            {
                spielfeld[1][1]=z;
            }
    else
    {
        do
        {
            if(rand() % 3 == 0 && rand() % 3 == 0 && spielfeld[0][0] == ' ')
            {
                spielfeld[0][0]=z;
                break;
            }
            else if(rand() % 3 == 0 && rand() % 3 == 1 && spielfeld[0][1] == ' ')
            {
                spielfeld[0][1]=z;
                break;
            }
            else if(rand() % 3 == 0 && rand() % 3 == 2 && spielfeld[0][2] == ' ')
            {
                spielfeld[0][2]=z;
                break;
            }
            else if(rand() % 3 == 1 && rand() % 3 == 0 && spielfeld[1][0] == ' ')
            {
                spielfeld[1][0]=z;
                break;
            }
            else if(rand() % 3 == 1 && rand() % 3 == 1 && spielfeld[1][1] == ' ')
            {
                spielfeld[1][1]=z;
                break;
            }
            else if(rand() % 3 == 1 && rand() % 3 == 2 && spielfeld[1][2] == ' ')
            {
                spielfeld[1][2]=z;
                break;
            }
            else if(rand() % 3 == 2 && rand() % 3 == 0 && spielfeld[2][0] == ' ')
            {
                spielfeld[2][0]=z;
                break;
            }
            else if(rand() % 3 == 2 && rand() % 3 == 1 && spielfeld[2][1] == ' ')
            {
                spielfeld[2][1]=z;
                break;
            }
            else if(rand() % 3 == 2 && rand() % 3 == 2 && spielfeld[2][2] == ' ')
            {
                spielfeld[2][2]=z;
                break;
            }
        }while(1);
    }
    clrscr();
    print_spielfeld();
    win();
    if(win() == 1 || win() == 2 || win() == 3)
    {
        repeat();
    }
}
