#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 10;
const int COLS = 10;
const int NUM_MINES = 20;// function to initialize the board
void init(int board[][COLS]) {    // fill the board with zeros
    for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                board[r][c] = 0;        }    }    // randomly place mines
int mines_placed = 0;
while (mines_placed < NUM_MINES) {
        int r = rand() % ROWS;
int c = rand() % COLS;
if (board[r][c] == 0) {
        board[r][c] = -1;
mines_placed++;        }    }    // fill in the rest of the cells with numbers
for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            if (board[r][c] != -1) {
                int count = 0;
if (r > 0 && c > 0 && board[r-1][c-1] == -1) count++; // top left
if (r > 0 && board[r-1][c] == -1) count++; // top
if (r > 0 && c < COLS-1 && board[r-1][c+1] == -1) count++; // top right
if (c > 0 && board[r][c-1] == -1) count++; // left
 if (c < COLS-1 && board[r][c+1] == -1) count++; // right
 if (r < ROWS-1 && c > 0 && board[r+1][c-1] == -1) count++; // bottom left
 if (r < ROWS-1 && board[r+1][c] == -1) count++; // bottom
 if (r < ROWS-1 && c < COLS-1 && board[r+1][c+1] == -1) count++; // bottom right
  board[r][c] = count;            }        }    }}// function to print the board
  void printBoard(int board[][COLS], bool reveal = false)
  {    cout << "  ";
   for (int c = 0; c < COLS; c++) {
                cout << c << " ";    }
   cout << endl;
   for (int r = 0; r < ROWS; r++) {
        cout << r << " ";
   for (int c = 0; c < COLS; c++) {
        if (board[r][c] == -1 && reveal) { // show mines
            cout << "* ";            }
   else if (board[r][c] >= 0) { // show numbers
        cout << board[r][c] << " ";            }
   else {                cout << ". "; // show unexplored cells
   }        }        cout << endl;    }}// function to play the game
   void play(int board[][COLS]) {
        bool gameOver = false;
         while (!gameOver) {
                printBoard(board);
         int r, c;
