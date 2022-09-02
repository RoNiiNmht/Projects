#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
void printarray(int arr[][3]);
int wincondition(int arr[][3]);
void smartcom();
void evilcom();
void switchx(int arr[][3]);

void switchx(int arr[][3]) // player 1 can place his mark with the help of switchx()
{
    char x = getch();
    switch (x)
    {
    case '1':
        if (arr[0][0] != 'X')
            arr[0][0] = 'O';
        break;
    case '2':
        if (arr[0][1] != 'X')
            arr[0][1] = 'O';
        break;
    case '3':
        if (arr[0][2] != 'X')
            arr[0][2] = 'O';
        break;
    case '4':
        if (arr[1][0] != 'X')
            arr[1][0] = 'O';
        break;
    case '5':
        if (arr[1][1] != 'X')
            arr[1][1] = 'O';
        break;
    case '6':
        if (arr[1][2] != 'X')
            arr[1][2] = 'O';
        break;
    case '7':
        if (arr[2][0] != 'X')
            arr[2][0] = 'O';
        break;
    case '8':
        if (arr[2][1] != 'X')
            arr[2][1] = 'O';
        break;
    case '9':
        if (arr[2][2] != 'X')
            arr[2][2] = 'O';
        break;
    } // end of switch
} // end of switchx()
void smartcom()
{
    system("cls");
    char name[20];
    printf("Enter your Name : ");
    fflush(stdin);
    gets(name);

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int i, j, n = 1;
    for (i = 0; i < 3; i++)
    {
        printf("\t-------------\n");
        printf("\t|");
        for (j = 0; j < 3; j++)
        {
            printf(" %d |", arr[i][j]);
        }
        printf("\n");
        printf("\t-------------\n");
    } // end of for
    while (1)
    {
        n = n % 2;
        if (n)
        {
            printf("%s Turns \t Mark - 'O'   ", name);
            // end of switch
            switchx(arr);
            printarray(arr);
            n = 2;
        }    // end of if
        else // for condition check
        {
            if (((arr[0][1] & arr[0][2]) == 'X' || (arr[1][1] & arr[2][2]) == 'X' || (arr[1][0] & arr[2][0]) == 'X') & arr[0][0] != 'X' & arr[0][0] != 'O')
            {
                arr[0][0] = 'X';
            }
            else if (((arr[0][0] & arr[0][2]) == 'X' || (arr[1][1] & arr[2][1]) == 'X') & arr[0][1] != 'X' & arr[0][1] != 'O')
            {
                arr[0][1] = 'X';
            }
            else if (((arr[0][0] & arr[0][1]) == 'X' || (arr[1][1] & arr[2][1]) == 'X' || (arr[1][2] == 'X' & arr[2][2]) == 'X') & arr[0][2] != 'X' & arr[0][2] != 'O')
            {
                arr[0][2] = 'X';
            }
            else if (((arr[0][0] & arr[2][0]) == 'X' || (arr[1][1] & arr[1][2]) == 'X') & arr[1][0] != 'X' & arr[1][0] != 'O')
            {
                arr[1][0] = 'X';
            }
            else if (((arr[0][0] & arr[2][2]) == 'X' || (arr[0][1] & arr[2][1]) == 'X' || (arr[0][2] & arr[2][0]) == 'X' || (arr[1][0] & arr[1][2]) == 'X') & arr[1][1] != 'X' & arr[1][1] != 'O')
            {
                arr[1][1] = 'X';
            }
            else if (((arr[0][2] & arr[2][2]) == 'X' || (arr[1][0] & arr[1][1]) == 'X') & arr[1][2] != 'X' & arr[1][2] != 'O')
            {
                arr[1][2] = 'X';
            }
            else if (((arr[0][0] & arr[1][0]) == 'X' || (arr[0][2] & arr[1][1]) == 'X' || (arr[2][1] & arr[2][2]) == 'X') & arr[2][0] != 'X' & arr[2][0] != 'O')
            {
                arr[2][0] = 'X';
            }
            else if (((arr[0][1] & arr[1][1]) == 'X' || (arr[2][0] & arr[2][2]) == 'X') & arr[0][1] != 'X' & arr[2][1] != 'O')
            {
                arr[2][1] = 'X';
            }
            else if (((arr[0][0] & arr[1][1]) == 'X' || (arr[0][2] & arr[1][2]) == 'X' || (arr[2][0] & arr[2][1]) == 'X') & arr[2][2] != 'X' & arr[2][2] != 'O')
            {
                arr[2][2] = 'X';
            }
            else if (((arr[0][1] & arr[0][2]) == 'O' || (arr[1][1] & arr[2][2]) == 'O' || (arr[1][0] & arr[2][0]) == 'O') & arr[0][0] != 'X')
            {
                arr[0][0] = 'X';
            }
            else if (((arr[0][0] & arr[0][2]) == 'O' || (arr[1][1] & arr[2][1]) == 'O') & arr[0][1] != 'X')
            {
                arr[0][1] = 'X';
            }
            else if (((arr[0][0] & arr[0][1]) == 'O' || (arr[1][1] & arr[2][0]) == 'O' || (arr[1][2] & arr[2][2]) == 'O') & arr[0][2] != 'X')
            {
                arr[0][2] = 'X';
            }
            else if (((arr[0][0] & arr[2][0]) == 'O' || (arr[1][1] & arr[1][2]) == 'O') & arr[1][0] != 'X')
            {
                arr[1][0] = 'X';
            }
            else if (((arr[0][0] & arr[2][2]) == 'O' || (arr[0][1] & arr[2][1]) == 'O' || (arr[0][2] & arr[2][0]) == 'O' || (arr[1][0] & arr[1][2]) == 'O') & arr[1][1] != 'X')
            {
                arr[1][1] = 'X';
            }
            else if (((arr[0][2] & arr[2][2]) == 'O' || (arr[1][0] & arr[1][1]) == 'O') & arr[1][2] != 'X')
            {
                arr[1][2] = 'X';
            }
            else if (((arr[0][0] & arr[1][0]) == 'O' || (arr[0][2] & arr[1][1]) == 'O' || (arr[2][1] & arr[2][2]) == 'O') & arr[2][0] != 'X')
            {
                arr[2][0] = 'X';
            }
            else if (((arr[0][1] & arr[1][1]) == 'O' || (arr[2][0] & arr[2][2]) == 'O') & arr[2][1] != 'X')
            {
                arr[2][1] = 'X';
            }
            else if (((arr[0][0] & arr[1][1]) == 'O' || (arr[0][2] & arr[1][2]) == 'O' || (arr[2][0] & arr[2][1]) == 'O') & arr[2][2] != 'X')
            {
                arr[2][2] = 'X';
            }
            else if (arr[1][1] == 5)
            {
                arr[1][1] = 'X';
            }
            else if (arr[0][2] == 3)
            {
                arr[0][2] = 'X';
            }
            else if (arr[0][0] == 1)
            {
                arr[0][0] = 'X';
            }
            else if (arr[1][0] == 4)
            {
                arr[1][0] = 'X';
            }
            else if (arr[2][2] == 9)
            {
                arr[2][2] = 'X';
            }
            else if (arr[0][1] == 2)
            {
                arr[0][1] = 'X';
            }
            printarray(arr); // calling function for printing array
            n = 1;
        }                            // end of else
        int ans = wincondition(arr); // calling function for checking win condition
        if (ans == 1)
        {
            printf("\t%s Win! ", name);
            break;
        }
        else if (ans == 0)
        {
            printf("\tSmart Computer Win!");
            break;
        }
        else if (ans == 2)
        {
            printf("\tDraw");
            break;
        }
    } // end of while
    return;
} // end of smartcom()

void evilcom() // for evil computer
{
    system("cls");
    char name[20];
    printf("Enter your Name : ");
    fflush(stdin);
    gets(name);

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int i, j, n = 1;
    for (i = 0; i < 3; i++)
    {
        printf("\t-------------\n");
        printf("\t|");
        for (j = 0; j < 3; j++)
        {
            printf(" %d |", arr[i][j]);
        }
        printf("\n");
        printf("\t-------------\n");
    } // end of for
    while (1)
    {
        n = n % 2;
        if (n)
        {
            printf("%s Turns \t Mark - 'O'   ", name);
            switchx(arr); // for player 1 playing
            printarray(arr);
            n = 2;
        } // end of if
        else
        {
            int check = 0;
            if (((arr[0][1] & arr[0][2]) == 'X' || (arr[1][1] & arr[2][2]) == 'X' || (arr[1][0] & arr[2][0]) == 'X') & arr[0][0] != 'X' & arr[0][0] != 'O')
            {
                arr[0][0] = 'X';
                check = 1;
            }
            else if (((arr[0][0] & arr[0][2]) == 'X' || (arr[1][1] & arr[2][1]) == 'X') & arr[0][1] != 'X' & arr[0][1] != 'O')
            {
                arr[0][1] = 'X';
                check = 1;
            }
            else if (((arr[0][0] & arr[0][1]) == 'X' || (arr[1][1] & arr[2][1]) == 'X' || (arr[1][2] == 'X' & arr[2][2]) == 'X') & arr[0][2] != 'X' & arr[0][2] != 'O')
            {
                arr[0][2] = 'X';
                check = 1;
            }
            else if (((arr[0][0] & arr[2][0]) == 'X' || (arr[1][1] & arr[1][2]) == 'X') & arr[1][0] != 'X' & arr[1][0] != 'O')
            {
                arr[1][0] = 'X';
                check = 1;
            }
            else if (((arr[0][0] & arr[2][2]) == 'X' || (arr[0][1] & arr[2][1]) == 'X' || (arr[0][2] & arr[2][0]) == 'X' || (arr[1][0] & arr[1][2]) == 'X') & arr[1][1] != 'X' & arr[1][1] != 'O')
            {
                arr[1][1] = 'X';
                check = 1;
            }
            else if (((arr[0][2] & arr[2][2]) == 'X' || (arr[1][0] & arr[1][1]) == 'X') & arr[1][2] != 'X' & arr[1][2] != 'O')
            {
                arr[1][2] = 'X';
                check = 1;
            }
            else if (((arr[0][0] & arr[1][0]) == 'X' || (arr[0][2] & arr[1][1]) == 'X' || (arr[2][1] & arr[2][2]) == 'X') & arr[2][0] != 'X' & arr[2][0] != 'O')
            {
                arr[2][0] = 'X';
                check = 1;
            }
            else if (((arr[0][1] & arr[1][1]) == 'X' || (arr[2][0] & arr[2][2]) == 'X') & arr[0][1] != 'X' & arr[2][1] != 'O')
            {
                arr[2][1] = 'X';
                check = 1;
            }
            else if (((arr[0][0] & arr[1][1]) == 'X' || (arr[0][2] & arr[1][2]) == 'X' || (arr[2][0] & arr[2][1]) == 'X') & arr[2][2] != 'X' & arr[2][2] != 'O')
            {
                arr[2][2] = 'X';
                check = 1;
            }
            int num = 1;

            while (num != 0) // while for evilness means if player is going to win in 2 position then while and  if is do his work
            {
                if (((arr[0][1] & arr[0][2]) == 'O' || (arr[1][1] & arr[2][2]) == 'O' || (arr[1][0] & arr[2][0]) == 'O') & arr[0][0] != 'X')
                {
                    arr[0][0] = 'X';
                    check = 1;
                }
                if (((arr[0][0] & arr[0][2]) == 'O' || (arr[1][1] & arr[2][1]) == 'O') & arr[0][1] != 'X')
                {
                    arr[0][1] = 'X';
                    check = 1;
                }
                if (((arr[0][0] & arr[0][1]) == 'O' || (arr[1][1] & arr[2][0]) == 'O' || (arr[1][2] & arr[2][2]) == 'O') & arr[0][2] != 'X')
                {
                    arr[0][2] = 'X';
                    check = 1;
                }
                if (((arr[0][0] & arr[2][0]) == 'O' || (arr[1][1] & arr[1][2]) == 'O') & arr[1][0] != 'X')
                {
                    arr[1][0] = 'X';
                    check = 1;
                }
                if (((arr[0][0] & arr[2][2]) == 'O' || (arr[0][1] & arr[2][1]) == 'O' || (arr[0][2] & arr[2][0]) == 'O' || (arr[1][0] & arr[1][2]) == 'O') & arr[1][1] != 'X')
                {
                    arr[1][1] = 'X';
                    check = 1;
                }
                if (((arr[0][2] & arr[2][2]) == 'O' || (arr[1][0] & arr[1][1]) == 'O') & arr[1][2] != 'X')
                {
                    arr[1][2] = 'X';
                    check = 1;
                }
                if (((arr[0][0] & arr[1][0]) == 'O' || (arr[0][2] & arr[1][1]) == 'O' || (arr[2][1] & arr[2][2]) == 'O') & arr[2][0] != 'X')
                {
                    arr[2][0] = 'X';
                    check = 1;
                }
                if (((arr[0][1] & arr[1][1]) == 'O' || (arr[2][0] & arr[2][2]) == 'O') & arr[2][1] != 'X')
                {
                    arr[2][1] = 'X';
                    check = 1;
                }
                if (((arr[0][0] & arr[1][1]) == 'O' || (arr[0][2] & arr[1][2]) == 'O' || (arr[2][0] & arr[2][1]) == 'O') & arr[2][2] != 'X')
                {
                    arr[2][2] = 'X';
                    check = 1;
                }
                num--;
                if (check == 1)
                {
                    break;
                }
                else if (arr[1][1] == 5)
                {
                    arr[1][1] = 'X';
                }
                else if (arr[0][1] == 2)
                {
                    arr[0][1] = 'X';
                }
                else if (arr[0][0] == 1)
                {
                    arr[0][0] = 'X';
                }
                else if (arr[1][0] == 4)
                {
                    arr[1][0] = 'X';
                }
                else if (arr[2][2] == 9)
                {
                    arr[2][2] = 'X';
                }
                else if (arr[1][2] == 6)
                {
                    arr[1][2] = 'X';
                }
                else if (arr[2][1] == 8)
                {
                    arr[2][1] = 'X';
                }
                else if (arr[2][0] == 7)
                {
                    arr[2][0] = 'X';
                }

            } // end of 2nd while

            printarray(arr); // calling function for printing array
            n = 1;
        }                            // end of else
        int ans = wincondition(arr); // calling function to check win condition
        if (ans == 1)
        {
            printf("\t%s Win! ", name);
            break;
        }
        else if (ans == 0)
        {
            printf("\tEvil Computer Win!");
            break;
        }
        else if (ans == 2)
        {
            printf("\tDraw");
            break;
        }
    } // end of while
    return;
} // end of evilcom()

void printarray(int arr[][3])
{
    system("cls");
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("\t-------------\n");
        printf("\t|");
        for (j = 0; j < 3; j++)
        {

            if (arr[i][j] == 'O' || arr[i][j] == 'X')
            {
                printf(" %c |", arr[i][j]);
            }
            else
            {
                printf(" %d |", arr[i][j]);
            }
        }
        printf("\n");
        printf("\t-------------\n");
    }
} // end of printarray()

void friend()
{
    system("cls");
    char player1[20];
    char player2[20];
    fflush(stdin);
    printf("Enter First Player Name : ");
    gets(player1);
    printf("Enter Second Player Name : ");
    gets(player2);
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int i, j, n = 1;
    for (i = 0; i < 3; i++)
    {
        printf("\t-------------\n");
        printf("\t|");
        for (j = 0; j < 3; j++)
        {
            printf(" %d |", arr[i][j]);
        }
        printf("\n");
        printf("\t-------------\n");
    }
    while (1)
    {

        n = n % 2;
        if (n)
        {
            printf("%s turns  \t Mark - 'O'   ", player1);
            switchx(arr); // end of switch
            printarray(arr);
            n = 2;
        } // end of if
        else
        {
            printf("%s turns  \t Mark - 'X'   ", player2);
            char x = getch();
            switch (x)
            {
            case '1':
                if (arr[0][0] != 'O')
                    arr[0][0] = 'X';
                break;

            case '2':
                if (arr[0][1] != 'O')
                    arr[0][1] = 'X';
                break;

            case '3':
                if (arr[0][2] != 'O')
                    arr[0][2] = 'X';
                printarray(arr);
                break;

            case '4':
                if (arr[1][0] != 'O')
                    arr[1][0] = 'X';
                break;

            case '5':
                if (arr[1][1] != 'O')
                    arr[1][1] = 'X';
                break;

            case '6':
                if (arr[1][2] != 'O')
                    arr[1][2] = 'X';
                break;

            case '7':
                if (arr[2][0] != 'O')
                    arr[2][0] = 'X';
                break;

            case '8':
                if (arr[2][1] != 'O')
                    arr[2][1] = 'X';
                break;

            case '9':
                if (arr[2][2] != 'O')
                    arr[2][2] = 'X';
                break;
            } // end of 2nd switch
            printarray(arr);
            n = 1;
        } // end of else
        int ans = wincondition(arr);
        if (ans == 1)
        {
            printf("\t%s Win ! ", player1);
            break;
        }
        else if (ans == 0)
        {
            printf("\t%s Win ! ", player2);
            break;
        }
        else if (ans == 2)
        {
            printf("\tDraw ");
            break;
        }
    } // end of while
    return;
} // end of friend()
int wincondition(int arr[][3])
{
    int i, j;
    printf("\n");
    if (((arr[0][0] & arr[1][0] & arr[2][0]) == 'O') || (arr[0][0] & arr[0][1] & arr[0][2]) == 'O')
        return 1;
    // 1
    else if (((arr[0][0] & arr[1][1] & arr[2][2]) == 'O') || (arr[0][1] & arr[1][1] & arr[2][1]) == 'O')
        return 1;
    // 2
    else if (((arr[1][0] & arr[1][1] & arr[1][2]) == 'O') || (arr[2][0] & arr[2][1] & arr[2][2]) == 'O')
        return 1;
    // 3
    else if (((arr[0][2] & arr[1][2] & arr[2][2]) == 'O') || (arr[0][2] & arr[1][1] & arr[2][0]) == 'O')
        return 1;
    // 4
    else if (((arr[0][0] & arr[1][0] & arr[2][0]) == 'X') || (arr[0][0] & arr[0][1] & arr[0][2]) == 'X')
        return 0;
    // 1
    else if (((arr[0][0] & arr[1][1] & arr[2][2]) == 'X') || (arr[0][1] & arr[1][1] & arr[2][1]) == 'X')
        return 0;
    // 2
    else if (((arr[1][0] & arr[1][1] & arr[1][2]) == 'X') || (arr[2][0] & arr[2][1] & arr[2][2]) == 'X')
        return 0;
    // 3
    else if (((arr[0][2] & arr[1][2] & arr[2][2]) == 'X') || (arr[0][2] & arr[1][1] & arr[2][0]) == 'X')
        return 0;
    // 4
    int c = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] >= 1 && arr[i][j] <= 9)
            {
                c = 1;
                break;
            }
        }
    }
    if (c == 0)
    {
        return 2;
    }
}
int main()
{

    printf("\n...................Welcome to Tic-Tac-Toe Game....................\n \n");
    printf("\n        Here are some Rules of Game          \n");
    printf("  1. The game is played on a grid that's 3 squares by 3 squares \n");
    printf("  2. You are O, your friend or computer is X\n");
    printf("  3. The first player to get 3 of marks in a row (up,down,across or diagonally )is the winner \n");
    printf("  4. When all 9 squares are full, the game is over \n");
    printf("\n \n");
    printf("         How to play : \n");
    printf("  1. In the game 3X3 grid square has numbers between 1-9 \n");
    printf("  2. Choose a number to place your mark 'O' or 'X'\n");
    printf("\n                                      Let's Begain \n \n");
a:
    char opt;
    printf("You like to play with : \n");
    printf("1. Play with Smart Computer \n");
    printf("2. Play wit Evil Computer \n");
    printf("3. Play with Friend \n");
    printf("4. Exit");

    opt = getch();
    switch (opt)
    {
    case '1':
        smartcom();
        break;
    case '2':
        evilcom();
        break;

    case '3':
        friend();
        break;
    case '4':
        exit(0);

    default:
        printf("Invalid ! Enter valid option");
        break;
    }
    char op;

    printf("\n\nYou want to play agin \nPress 'Y' to yes or Press any key to exit : \n \n");

    op = getch();
    if (op == 'Y' || op == 'y')
        goto a;
    else if (op == 'N' || op == 'n')
        exit(0);
    return 0;
} // end of main()