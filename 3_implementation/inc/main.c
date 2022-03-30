#include <stdio.h>
#include "function.h"
#include "brain.h"


int main() {
/*

Board is character array, it is used to store positons of the "O" or "X"
*/
  char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

  print_pattern(board);
  /*
Print_pattern prints the characters of board in 3x3 matrix
*/

  int position;

  /*
p is the pointer addressing to position
*/
  int *p = &position;

  
/*
positon takes the number in the range from 1 to 9 to store "O" or "X" in the board
*/
  printf("Player 1  symbol is  X\nPlayer 2 symbol  is O\n");

 
  for (int i = 0; i < 6; i++) {
   


    
  label1:
     printf("select board position between 1 to 9 to mark X : ");
    scanf("%d", &position);

      /*
This 'IF' condition is used to check the player typed position in the range of 1-9 and also player is not allowed to change the previous positions 
*/
    if (position > 9 || board[position-1]=='X' || board[position-1]=='O') {
      printf("enter a number between 1 to 9 only \n");
      *p = 0;
      if(draw(board)==1){
        goto label1;
      }else{
        printf("Game is Draw");
        break;
      }
    }

    board[position - 1] = 'X';
    print_pattern(board);
printf("=============================================================\n");
 /*
This if condition is used to check the player 1 is going to win or not 
*/
    
    if (check(board) == 1) {
      printf("player 1 won the game");
      break;
    }

  label2:
     printf("select board position between 1 to 9 to mark O : ");
    scanf("%d", &position);
  

    /*
This 'IF' condition is used to check the player typed position in the range of 1-9 and also player is not allowed to change the previous positions 
*/
    if (position > 9 || board[position-1]=='X' || board[position-1]=='O') {
      
     *p = 0;
       if(draw(board)==1){
        goto label2;
      }else{
         printf("enter a valid board positon\n");
        printf("Game is Draw");
        break;
      }
    }

    board[position - 1] = 'O';
    print_pattern(board);
printf("=============================================================\n");

    /*
This if condition is used to check the player 2 is going to win or not 
*/
    if (check(board) == 1) {
      printf("player 2 won the game");
      break;
    }
  }

  return 0;
}
