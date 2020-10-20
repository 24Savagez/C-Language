#include <stdio.h>
#define LINE printf("---+---+---\n")

void main()
{
    int player,winner,choice,row,column,line;
    player = winner = choice = row = column = line = 0;
    char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

    //display the board
    for(int i=0 ; i<9&&winner==0 ;i++)
    {
        printf("\n\n");
        printf(" %c | %c | %c\n",board[0][0],board[0][1],board[0][2]);
        LINE;
        printf(" %c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
        LINE;
        printf(" %c | %c | %c\n",board[2][0],board[2][1],board[2][2]);

        player = i%2+1;     //select player 1 or 2

        //get valid player square selection
        do
        {
            printf("\nPlayer %d ,Please enter your go %c :" ,player,(player == 1)?'X':'O');
            scanf("%d",&choice);
            row = --choice / 3;             //put x or o in row
            column = choice % 3;            //put x or o in column
        }while(choice<0 || choice>9 || board[row][column]>'9');

        //insert player symbol
        board[row][column] = (player == 1)? 'x':'O';

        //check for a winning line - diagonals first
        if( (board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
            (board[0][2] == board[1][1] && board[0][2] == board[2][0]))
            winner = player;
        else
            //check rows and columns for a winning line
            for(line=0 ; line<=2 ; line++)
            {
                if( (board[line][0] == board[line][1] && board[line][0] == board[line][2]) ||
                    (board[0][line] == board[1][line] && board[0][line] == board[2][line]))
                    winner = player;
            }
    }//end loop i

    //games is over,display the final board
    printf("\n\n");
    printf(" %c | %c | %c\n",board[0][0],board[0][1],board[0][2]);
    LINE;
    printf(" %c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
    LINE;
    printf(" %c | %c | %c\n",board[2][0],board[2][1],board[2][2]);
    LINE;

    //display result message
    if(winner == 0)
        printf("\nHow boring,it is a draw\n");
    else
        printf("\nPlayer %d YOU ARE THE WINNER!\n\n",winner);

}
