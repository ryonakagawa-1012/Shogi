#include "Shogi.h"

void draw_koma() {
    int X_Img_Center;
    int Y_Img_Center;

    for (int y = 1; y < 10; y++) {
        for (int x = 1; x < 10; x++) {
            x = X_BOARD_RU - CELL_SIZE * x;
            if (board[x][y] == 自歩) {
            }
        }
    }
}