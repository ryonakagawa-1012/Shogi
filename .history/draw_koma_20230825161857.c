#include "Shogi.h"

void draw_koma(void) {
    int X_Img_Center, Y_Img_Center;
    double Img_Width, Img_Height;

    for (int y = 0; y < 9; y++) {
        Y_Img_Center = (Y_BOARD_RU - CELL_SIZE) - CELL_SIZE * y;
        for (int x = 0; x < 9; x++) {
            X_Img_Center = (X_BOARD_RU - CELL_SIZE) + CELL_SIZE * x;
            if (board[x][y] == 自歩) {
                int img = HgImageLoad("images/01_歩兵.png");
                printf("img_ID : %d\n", img);  // デバッグ用

                HgImageSize(img, &Img_Width, &Img_Height);
                printf("Img_Width : %f\n", Img_Width);    // デバッグ用
                printf("Img_Height : %f\n", Img_Height);  // デバッグ用
            }
        }
    }
}