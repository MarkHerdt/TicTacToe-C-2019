//file"main.c"
//#include<bot.c>
#include<stdio.h>
#include<stdlib.h>
#ifdef __unix__
    #define clrscr() printf("\x1B[2J")
#elif __BORLANDC__ && __MSDOS__
    #include <conio.h>
#elif __WIN32__ || _MSC_VER
    #define clrscr() system("cls")
#else
    #define clrscr() printf("clrscr() - Fehler\n")
#endif

extern void bot();

char spielfeld[3][3]={{' ',' ',' '},
                      {' ',' ',' '},
                      {' ',' ',' '} };

char jain='n';
int rpt=1;
int Spieler=0, Bot=0, U=0;
char spieler1, spieler2;
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void print_spielfeld()
{
    int i;

    clrscr();
    printf("    1   2   3\n  +---+---+---+\n");
    for(i=0; i < 3; i++)
    {
        printf("%d |",i+1);
        printf(" %c |",spielfeld[i][0]);
        printf(" %c |",spielfeld[i][1]);
        printf(" %c |\n  +---+---+---+\n",spielfeld[i][2]);
    }
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int win()
{
    if(spielfeld[0][0]==spieler1 &&
       spielfeld[0][1]==spieler1 &&
       spielfeld[0][2]==spieler1 ||
       spielfeld[1][0]==spieler1 &&
       spielfeld[1][1]==spieler1 &&
       spielfeld[1][2]==spieler1 ||
       spielfeld[2][0]==spieler1 &&
       spielfeld[2][1]==spieler1 &&
       spielfeld[2][2]==spieler1 ||
       spielfeld[0][0]==spieler1 &&
       spielfeld[1][0]==spieler1 &&
       spielfeld[2][0]==spieler1 ||
       spielfeld[0][1]==spieler1 &&
       spielfeld[1][1]==spieler1 &&
       spielfeld[2][1]==spieler1 ||
       spielfeld[0][2]==spieler1 &&
       spielfeld[1][2]==spieler1 &&
       spielfeld[2][2]==spieler1 ||
       spielfeld[0][0]==spieler1 &&
       spielfeld[1][1]==spieler1 &&
       spielfeld[2][2]==spieler1 ||
       spielfeld[0][2]==spieler1 &&
       spielfeld[1][1]==spieler1 &&
       spielfeld[2][0]==spieler1   )
        return 1;
    else if
      (spielfeld[0][0]==spieler2 &&
       spielfeld[0][1]==spieler2 &&
       spielfeld[0][2]==spieler2 ||
       spielfeld[1][0]==spieler2 &&
       spielfeld[1][1]==spieler2 &&
       spielfeld[1][2]==spieler2 ||
       spielfeld[2][0]==spieler2 &&
       spielfeld[2][1]==spieler2 &&
       spielfeld[2][2]==spieler2 ||
       spielfeld[0][0]==spieler2 &&
       spielfeld[1][0]==spieler2 &&
       spielfeld[2][0]==spieler2 ||
       spielfeld[0][1]==spieler2 &&
       spielfeld[1][1]==spieler2 &&
       spielfeld[2][1]==spieler2 ||
       spielfeld[0][2]==spieler2 &&
       spielfeld[1][2]==spieler2 &&
       spielfeld[2][2]==spieler2 ||
       spielfeld[0][0]==spieler2 &&
       spielfeld[1][1]==spieler2 &&
       spielfeld[2][2]==spieler2 ||
       spielfeld[0][2]==spieler2 &&
       spielfeld[1][1]==spieler2 &&
       spielfeld[2][0]==spieler2   )
        return 2;
    else if
      (spielfeld[0][0] != ' ' &&
       spielfeld[0][1] != ' ' &&
       spielfeld[0][2] != ' ' &&
       spielfeld[1][0] != ' ' &&
       spielfeld[1][1] != ' ' &&
       spielfeld[1][2] != ' ' &&
       spielfeld[2][0] != ' ' &&
       spielfeld[2][2] != ' ' &&
       spielfeld[2][2] != ' '   )
        return 3;
    else
        return 0;

}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void repeat()
{
    int i,j;

    do
    {
        clrscr();
        print_spielfeld();
        if(win() == 1)
        {
            printf("Spieler \"%c\" hat gewonnen",spieler1);
            Spieler++;
        }
        else if(win() == 2)
        {
            printf("Spieler \"%c\" hat gewonnen",spieler2);
            Bot++;
        }
        else if(win() == 3)
        {
            printf("Unentschieden");
            U++;
        }
        printf("\nNochmal spielen? (j)a/(n)ein: ");
        fflush(stdin);
        scanf("%2c",&jain);
        fflush(stdin);
        if(jain == 'j')
        {
            jain='j';
            break;
        }
        else if(jain == 'n')
        {
            jain='j';
            rpt=0;
            break;;
        }
        else if(jain != ((char)'j' | (char)'n' ))
        {
            clrscr();
            print_spielfeld();
        }
        else
        {
            clrscr();
            print_spielfeld();
            printf("Ung\x81ltige Eingabe");
        }
    }while(1);
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
char neuer_zug(char zchn)
{
    int z,s;

    do
    {
        do
        {
            printf("Spieler \"%c\" ist an der Reihe\n\n",zchn);
            printf("(0) = Exit\nZeile (1-3) : ");
            fflush(stdin);
            scanf("%2d",&z);
            fflush(stdin);
            if(z == 1 & z == 2 & z == 3)
            {
                clrscr();
                print_spielfeld();
                break;
            }
            else if(z == 0)
            {
                jain='j';
                break;
            }
            else if((z == (char)z) || z < 0 & z > 3 )
            {
                clrscr();
                print_spielfeld();
            }
        }while(z != 1 & z != 2 & z != 3 & z !=0);
        do
        {
            if(z == 0 || s == 0)
            {
                return 0;
                break;
            }
            printf("Spieler %c ist an der Reihe\n\n",zchn);
            printf("(0) = Exit\nSpalte (1-3): ");
            fflush(stdin);
            scanf("%2d",&s);
            fflush(stdin);
            if(s == 1 & s == 2 & s == 3)
            {
                break;
            }
            else if(s == 0)
            {
                jain='j';
                break;
            }
            else if((s == (char)s) || s < 0 & s > 3)
            {
                clrscr();
                print_spielfeld();
            }
        }while(s != 1 & s != 2 & s != 3 != 0);

        if(s == 0)
        {
            return 0;
            break;
        }
        if(spielfeld[z-1][s-1] == ' ')
        {
            spielfeld[z-1][s-1]=zchn;
            print_spielfeld();
            win();
            if(win() == 1 || win() == 2 || win() == 3)
            {
                repeat();
                break;
            }
            break;
        }

    }while(1);
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    int i,j;

    do
    {
        jain='n';
        clrscr();
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                spielfeld[i][j]=' ';
            }
        }
        do
        {
            printf("Bilanz: Spieler:%d | Bot:%d | Unentschieden:%d\n\n",Spieler,Bot,U);
            printf("Zeichen w\x84hlen (X|O) (e)=Exit: ");
            fflush(stdin);
            scanf("%2c",&spieler1);
            if(spieler1 == 'x')
            {
                spieler1='X';
            }
            else if(spieler1 == 'o')
            {
                spieler1='O';
            }
            if(spieler1 == 'e')
                goto ENDE;
            clrscr();
        }while((spieler1 != 'X') && (spieler1 != 'O'));
        print_spielfeld();
        if(spieler1 == 'X')
            {
                spieler2='O';
            }
            else if(spieler1 == 'O')
            {
                spieler2='X';
            }
        do
        {
            neuer_zug(spieler1);
            if(win() == 1 || win() == 2 || win() == 3 || jain == 'j')
            {
                break;
            }
            bot(spieler2);
        }while(jain == 'n');
    }while(rpt == 1);
    ENDE:;
    return EXIT_SUCCESS;
}
