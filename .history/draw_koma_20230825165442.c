#include "Shogi.h"

void draw_koma(void) {
    int X_Img_Center, Y_Img_Center;
    double Img_Width, Img_Height;

    for (int y = 1; y < 10; y++) {
        Y_Img_Center = Y_BOARD_RU - Y_BOARD_LD * y;
        printf("Y_Img_Center : %d\n", Y_Img_Center);  // デバッグ用
        for (int x = 1; x < 10; x++) {
            X_Img_Center = X_BOARD_RU - X_BOARD_LD * x;
            printf("X_Img_Center : %d\n", X_Img_Center);  // デバッグ用
            if (board[x][y] == 自歩) {
                int img = HgImageLoad("images/01_歩兵.png");
                printf("img_ID : %d\n", img);  // デバッグ用

                HgImageSize(img, &Img_Width, &Img_Height);
                printf("Img_Width : %f\n", Img_Width);    // デバッグ用
                printf("Img_Height : %f\n", Img_Height);  // デバッグ用

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img, 1,
                            0);
            }
        }
    }
}