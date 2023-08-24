#include "Shogi.h"

void BoardInitialValue() {
    int x, y;

    for (x = 1; x < 10; x++) {
        [x][7] = 自歩;
        board[x][3] = 敵歩;
    }

    board[1][9] = 自香;
    board[9][9] = 自香;

    board[2][9] = 自桂;
    board[8][9] = 自桂;

    board[3][9] = 自銀;
    board[7][9] = 自銀;

    board[4][9] = 自金;
    board[6][9] = 自金;

    board[2][8] = 自角;
    board[8][8] = 自飛;

    board[5][9] = 王;

    board[1][1] = 敵香;
    board[9][1] = 敵香;

    board[2][1] = 敵桂;
    board[8][1] = 敵桂;

    board[3][1] = 敵銀;
    board[7][1] = 敵銀;

    board[4][1] = 敵金;
    board[6][1] = 敵金;

    board[2][2] = 敵角;
    board[8][2] = 敵飛;

    board[5][1] = 玉;
}