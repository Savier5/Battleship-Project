#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <string>
#include<windows.h>
using namespace std;
const int ROWS = 10;
const int COLS = 10;

class board {

private:

public:

	void legalMoves(string[][COLS]);
};

#endif