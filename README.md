# 🎮 Tic-Tac-Toe Game

Welcome to the classic **Tic-Tac-Toe** game! This simple yet engaging project is a console-based implementation of the timeless game we all know and love. Whether you're reliving childhood memories or just need a quick break from coding, this game has got you covered!

## 🎯 Game Objective

The objective of Tic-Tac-Toe is to be the first player to get three of your marks (either `X` or `O`) in a row, column, or diagonal on a 3x3 grid. The game ends when a player achieves this, or the grid is completely filled, resulting in a draw.

## 🛠️ How to Play

1. **Start the Game**: Run the program to start the game.
2. **Player Turns**: The game begins with Player `X`. Players take turns entering their move.
3. **Input Move**: Enter the row and column where you want to place your mark. The input should be two integers representing the row and column (both ranging from 0 to 2).
4. **Winning or Drawing**: The game announces a winner if a player successfully places three of their marks in a row, column, or diagonal. If the grid is filled with no winner, the game ends in a draw.

## ✨ Features

- **Interactive Gameplay**: The game prompts you for your moves and checks if they are valid.
- **Win Detection**: The game automatically checks for a win or draw after each move.
- **Turn Switching**: After each valid move, the turn alternates between Player `X` and Player `O`.
- **Simple and Clean UI**: The game board is displayed in a clean, easy-to-read format.

## 📝 Code Overview

### Classes and Methods

- **`TicTacToe` Class**: The main class that encapsulates the game logic.
  - **`resetBoard()`**: Resets the game board to its initial state.
  - **`printBoard()`**: Prints the current state of the board.
  - **`makeMove(int row, int col)`**: Places the player's mark on the board and checks for a win or draw.
  - **`checkWin()`**: Checks if the current player has won the game.
  - **`getCurrentPlayer()`**: Returns the current player (`X` or `O`).

### Flow of the Game

1. **Initialization**: The game board is initialized, and Player `X` starts the game.
2. **Gameplay Loop**: The game runs in a loop where players input their moves until a win or draw is detected.
3. **Endgame**: The game announces the winner or declares a draw and then terminates.

## 📷 Preview

```
-------------
|   |   |   |
-------------
|   |   |   |
-------------
|   |   |   |
-------------

Player X, enter your move (row and column): 1 1
-------------
|   |   |   |
-------------
|   | X |   |
-------------
|   |   |   |
-------------
```

## 🚀 Getting Started

To run this game on your local machine:

1. **Clone the Repository**: 
   ```sh
   git clone https://github.com/yourusername/tictactoe-game.git
   cd tictactoe-game
   ```
2. **Compile the Code**:
   ```sh
   g++ -o tictactoe TicTacToe.cpp
   ```
3. **Run the Game**:
   ```sh
   ./tictactoe
   ```

## 🎉 Enjoy the Game!

Feel free to play, modify, and improve the code. Contributions and feedback are welcome!
