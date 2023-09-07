#include "Shogi.h"

void draw_koma() {
    for (int y = 1; y < 10; y++) {
        for (int x = 1; x < 10; x++) {
            x = x * CELL_SIZE;
            if (board[x][y] == 自歩) {
            }
        }
    }
}