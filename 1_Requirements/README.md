## Introducion

Tic-Tac-Toe game is very popular and is fairly simple by itself. It is a computer based game for two players X and O. They take turns marking the spaces in the 3 x 3 grid with X and O alternatively. The player who succeeds in placing three successive marks either in horizontal, diagonal or vertical wins the game.

## RESEARCH

It is often used as a pedagogical tool for teaching the concepts of good sportsmanship and the branch of artificial intelligence that deals with the searching of game trees. It is straightforward to write a computer program to play tic-tac-toe perfectly or to enumerate the 765 essentially different positions (the state space complexity) or the 26,830 possible games up to rotations and reflections (the game tree complexity) on this space. If played optimally by both players, the game always ends in a draw, making tic-tac-toe a futile game.

## Cost and Features and Timeline

| Time | Feature | Cost |
| ---- | ------- | ---- |
| 1558 | Started as a pen and paper game in Roman Emire, earlier it was called tic tac. | Free (Pen and Paper) |
| 1952 | In 1952, OXO (or Noughts and Crosses), developed by British computer scientist Sandy Douglas for the EDSAC computer at the University of Cambridge, became one of the first known video games. | $5 |
| 2000-2021 | After Digitalisation, this game is almost free for everyone on multiple mediums. It is played by anyone at anytime. | Cost-efective |

## DEFINING OUR SYSTEM

- The game starts giving you three input options(1, 2, 3):
  - 1 means you play using "X".
  - 2 means you play using "O".
  - 3 means you exit the game.
- The game ends when:
  - It is in a draw situation , i.e, a total of 9 moves have been completed and novody has won.
  - You win.
  - The computer wins.
- The game continues in the beginning if the check for draw is false.
- Then it checks if anyone has won yet.
- If not, then it again checks if it is a draw situation.

## SWOT ANALYSIS

#### STRENGTH

1. The game can help the player to predict the outcome of anothers move.
2. It helps to improve logic building and problem solving ability.
3. It helps develop coordination, fine motor skills and visual skills.
4. It can help to improve a person's concentration as well as strategic thinking

#### WEAKNESS

This game is addictive.

#### OPPORTUNITIES

Computer gaming

#### THREATS

Game can crash due to some technical errors.

## 4 W’s and 1 H

#### WHO

Anyone can play this game.

#### WHAT

It is a game played by two players for fun and recreational purpose.

#### WHEN

This game can be played whenever you are feeling bored or want to figure out ways, outcomes and situations of this game

#### WHERE

A variety of websites make a simple tic tac toe game available.

#### HOW

This project is implemented by using loops, function call and other functionalities of C.

## DETAIL REQUIREMENTS

### HIGH LEVEL REQUIREMENTS

| ID | Description | Status |
| -- | ----------- | ------ |
| HLR1 | User shall be able to choose 'X' to play. | Implemented |
| HLR2 | User shall be able to choose 'O' to play. | Implemented |
| HLR3 | User shall be able to Exit the game. | Implemented |
| HLR4 | User shall lose. | Implemented |
| HLR5 | User shall win. | Implemented |
| HLR6 | User shall end up in a Draw situation. | Implemented |

### LOWER LEVEL REQUIRMENTS

| ID | Description | Status |
| -- | ----------- | ------ |
| LLR1 | If the user presses '1', he'll be play with 'X'. | Implemented |
| LLR2 | If the user is playing with 'X', he'll get the first turn. | Implemented |
| LLR3 | If the user presses '2', he'll be play with 'O'. | Implemented |
| LLR4 | If the user is playing with 'O', he'll get the second turn. | Implemented |
| LLR5 | If the user presses '3', it'll exit the game. | Implemented |
| LLR6 | If the computer gets 3 Xs or 3 Os in vertical,horizontal or diagonal row, User will lose. | Implemented |
| LLR7 | If the user gets 3 Xs or 3 Os(as per his choice), in vertical,horizontal or diagonal row, he'll win. | Implemented |
| LLR8 | If the total number of moves, i.e., 9 moves have been completed and neithe the user nor the computer has won, it'll end up in a draw. | Implemented |
