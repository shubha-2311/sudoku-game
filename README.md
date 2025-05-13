# sudoku-game
A terminal-based Sudoku puzzle game implemented in C language, featuring 10 levels of difficulty, ASCII visuals, and interactive gameplay.

**🎮 Features**
✨ 10 Predefined Sudoku Levels
💬 Interactive console-based interface
❌ Validates Sudoku rules (row, column, 3×3 box)
↻ Retry, switch levels, or exit anytime
🎨 Colorful ASCII art splash screen and instructions
💪 Designed for Linux terminals or Android C compilers

**✨ How to Play**
The game board is a 9x9 grid.
Some cells are pre-filled, while others are shown as [ (row,col) ].
You must enter a number (1-9) in the correct position following Sudoku rules.
If your move is invalid, the game lets you retry or restart.

**Controls:**
P - Previous Level
N - Next Level
T - Try Current Level Again
E - Exit the Game

**🛠️ Installation & Compilation**
Linux / WSL / Android C Compiler:
gcc sudoku.c -o sudoku
./sudoku

Windows (with GCC/MinGW):
Replace system("clear") with system("cls") and use:
gcc sudoku.c -o sudoku.exe
sudoku.exe

**👨‍💼 Author**
Shubhadeep Sarkar
"This Sudoku game is made with C language for fun and learning. Tested on Linux terminal and Android C compilers. Enjoy solving!"

**📚 License**
Open-source project. Feel free to fork, modify, and distribute.

**🔗 Contribute**
Found a bug or want to add new features? Pull requests are welcome!
