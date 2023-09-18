#include "Shogi.h"

void draw_koma(void) {
#define IMG_SIZE 0.35  // 駒の画像のサイズ
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
                            IMG_SIZE, 0);
            } else if (board[x][y] == 敵歩) {
                int img_ID = HgImageLoad("images/01_歩兵.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, M_PI);

            } else if (board[x][y] == 自香) {
                int img_ID = HgImageLoad("images/02_香車.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, 0);
            } else if (board[x][y] == 敵香) {
                int img_ID = HgImageLoad("images/02_香車.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, M_PI);
            } else if (board[x][y] == 自桂) {
                int img_ID = HgImageLoad("images/03_桂馬.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, 0);
            } else if (board[x][y] == 敵桂) {
                int img_ID = HgImageLoad("images/03_桂馬.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, M_PI);
            } else if (board[x][y] == 自銀) {
                int img_ID = HgImageLoad("images/04_銀将.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, 0);
            } else if (board[x][y] == 敵銀) {
                int img_ID = HgImageLoad("images/04_銀将.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, M_PI);
            } else if (board[x][y] == 自金) {
                int img_ID = HgImageLoad("images/05_金将.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, 0);
            } else if (board[x][y] == 敵金) {
                int img_ID = HgImageLoad("images/05_金将.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, M_PI);
            } else if (board[x][y] == 自角) {
                int img_ID = HgImageLoad("images/06_角行.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, 0);
            } else if (board[x][y] == 敵角) {
                int img_ID = HgImageLoad("images/06_角行.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, M_PI);
            } else if (board[x][y] == 自飛) {
                int img_ID = HgImageLoad("images/07_飛車.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, 0);
            } else if (board[x][y] == 敵飛) {
                int img_ID = HgImageLoad("images/07_飛車.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, M_PI);
            } else if (board[x][y] == 王) {
                int img_ID = HgImageLoad("images/08_王将.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, 0);
            } else if (board[x][y] == 玉) {
                int img_ID = HgImageLoad("images/08_王将.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center + 5, Y_Img_Center + 5,
                            img_ID, IMG_SIZE, M_PI);
            } else if (board[x][y] == 自と) {
                int img_ID = HgImageLoad("images/11_と金.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, 0);
            } else if (board[x][y] == 敵と) {
                int img_ID = HgImageLoad("images/11_と金.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, M_PI);
            } else if (board[x][y] == 自成香) {
                int img_ID = HgImageLoad("images/12_成香車.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, 0);
            } else if (board[x][y] == 敵成香) {
                int img_ID = HgImageLoad("images/12_成香車.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, M_PI);
            } else if (board[x][y] == 自成桂) {
                int img_ID = HgImageLoad("images/13_成桂馬.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, 0);
            } else if (board[x][y] == 敵成桂) {
                int img_ID = HgImageLoad("images/13_成桂馬.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, M_PI);
            } else if (board[x][y] == 自成銀) {
                int img_ID = HgImageLoad("images/14_成銀将.png");

                HgImageSize(img_ID, &Img_Width, &Img_Height);

                HgWImagePut(Main_Layer_ID, X_Img_Center, Y_Img_Center, img_ID,
                            IMG_SIZE, 0);
            }
        }