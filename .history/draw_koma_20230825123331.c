#include "Shogi.h"

void draw_koma(X, Y) {
    int x = board[X][Y];
    int y = board[X][Y];

    if (board[x][y] == 自歩) {
        printf("歩");
    }
}