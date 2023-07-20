/*
    将棋
*/

#include <handy.h>
#include <stdio.h>

#include "Koma.c"

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 600

int board[11][11] = {};  // 9*9の将棋盤(外枠を含めると11*11)
