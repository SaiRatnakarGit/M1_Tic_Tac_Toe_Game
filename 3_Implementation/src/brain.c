#include <stdio.h>
/*
check funtion checks the board in the vertical, horizontal and diagonal manner,
if any character occupies the board in any one of the above pattern, check
function return 1 otherwise returns 0

*/
int check(char board[]) {
  int con = 0;

  if (board[0] == board[3] && board[3] == board[6]) {
    con = 1;
  } else if (board[1] == board[4] && board[4] == board[7]) {
    con = 1;
  } else if (board[2] == board[5] && board[5] == board[8]) {
    con = 1;
  } else if (board[0] == board[1] && board[1] == board[2]) {
    con = 1;
  } else if (board[3] == board[4] && board[4] == board[5]) {
    con = 1;
  } else if (board[6] == board[7] && board[7] == board[8]) {
    con = 1;
  } else if (board[0] == board[4] && board[4] == board[8]) {
    con = 1;
  } else if (board[2] == board[4] && board[4] == board[6]) {
    con = 1;
  }

  return con;
}




/*
This function cheks the all board position is occupies with "o" or "x" ,if occupies it returns 1 otherwise returns 0*/

int draw(char board[]) {
  char dummy_board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  int draw_game = 0;
  for (int i = 0; i < 9; i++) {
    if (dummy_board[i] != board[i]) {
      draw_game = 1;
    }
  }
}