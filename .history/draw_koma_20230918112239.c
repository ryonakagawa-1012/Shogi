#include "Shogi.h"

void draw_koma(void) {
    int X_Img_Center, Y_Img_Center;
    double Img_Width, Img_Height;

    for (int y = 1; y < 10; y++) {
        Y_Img_Center = Y_BOARD_RU - CELL_SIZE / 2 + CELL_SIZE -
                       CELL_SIZE * y;  // 画像の中心のy座標
        for (int x = 1; x < 10; x++) {
            X_Img_Center = X_BOARD_RU - CELL_SIZE / 2 + CELL_SIZE -
                           CELL_SIZE * x;  // 画像の中心のx座標
            if (board[x][y] == 自歩) {
                int img_ID = HgImageLoad("images/01_歩兵.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            0.35, 0);

                printf("img_ID : %d\n", img_ID);  // デバッグ用

                printf("Img_Width : %f\n", Img_Width);    // デバッグ用
                printf("Img_Height : %f\n", Img_Height);  // デバッグ用

                printf("X_Img_Center : %d\n", X_Img_Center);  // デバッグ用
                printf("Y_Img_Center : %d\n", Y_Img_Center);  // デバッグ用
            } else if (board[x][y] == 敵歩) {
                /* code */
            }
        }
    }
}