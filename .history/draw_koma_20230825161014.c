#include "Shogi.h"

void draw_koma(void) {
    int X_Img_Center, Y_Img_Center;
    int Img_Width, Img_Height;

    for (int y = 0; y < 9; y++) {
        Y_Img_Center = (Y_BOARD_RU - CELL_SIZE) - CELL_SIZE * y;
        for (int x = 0; x < 9; x++) {
            X_Img_Center = (X_BOARD_RU - CELL_SIZE) + CELL_SIZE * x;
            if (board[x][y] == 自歩) {
                int img = HgImageLoad("iimages/01_歩兵.png");
                HgImageSize
            }
        }
    }
}