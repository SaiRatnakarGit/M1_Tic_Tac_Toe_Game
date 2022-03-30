#include <stdio.h>

/*red function converts text colour printing in console to red colour*/
void red() { printf("\033[1;31m"); }

/*yellow function converts text colour printing in console to yellow colour*/
void yellow() { printf("\033[1;33m"); }

/*reset function converts text colour printing in console to default colour*/
void reset() { printf("\033[0m"); }

/*
colour_char function changes the colour of the character while printing on cosole, it takes character as a parameter. "O" printed in red colour, "X" is printed in yellow colour, remaining in default colour.
*/





void colour_char(char c) {

  if (c == 'O') {
    red();
    printf("%c", c);
    reset();
  } else if (c == 'X') {
    yellow();
    printf("%c", c);
    reset();
  } else {
    printf("%c", c);
  };
}

/*
print_pattern funtion prints the board on the console by taking characters  array  as parameter
*/
void print_pattern(char board[]) {

  for (int i = 0; i < 9; i++) {
    if ((i + 1) % 3 == 0) {
      printf("_");
      colour_char(board[i]);
      // printf("%c",board[i]);
      printf("_|");
      printf("\n");
    } else {

      printf("_");
      colour_char(board[i]);
      printf("_|");
    }
  }
}
