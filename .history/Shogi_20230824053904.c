/*
    将棋
*/

#include <handy.h>
#include <stdio.h>

#include "Koma.c"

#define WINDOW_MAIN_SIZE 950  // メインウィンドウのサイズ

#define CELL_SIZE 100  // 将棋盤の1マスのサイズ

#define X_BOARD_SP 25  // 将棋盤のx座標のスタート位置
#define Y_BOARD_SP 25  // 将棋盤のy座標のスタート位置

#define 先手 1
#define 後手 -1

int board[11][11] = {};  // 9*9の将棋盤(外枠を含めると11*11)

int turn = 先手;  // 1:先手, -1:後手

int main() {
    /**********どんなスクリーンでもウィンドウがスクリーンの真ん中に表示されるようにする**********/

    double x_screen_size;  // スクリーンの横幅
    double y_screen_size;  // スクリーンの縦幅

    HgScreenSize(&x_screen_size, &y_screen_size);  // スクリーンのサイズを取得

    double x_main_window_size =
        (x_screen_size - WINDOW_MAIN_SIZE) / 2;  // mainウィンドウのx座標
    double y_main_window_size =
        (y_screen_size - WINDOW_MAIN_SIZE) / 2;  // mainウィンドウのy座標

    /**********ここまで**********/

    /**********ウィンドウの作成**********/

    HgWOpen(x_main_window_size, y_main_window_size, WINDOW_MAIN_SIZE,
            WINDOW_MAIN_SIZE);  // mainウィンドウを作成

    HgWSetTitle(0, "将棋");  // mainウィンドウのタイトルを設定

    /**********ここまで**********/

    for (int i = 0; i < 11; i++) {
        HgWLine(0, X_BOARD_SP + i * CELL_SIZE, Y_BOARD_SP,
                X_BOARD_SP + i * CELL_SIZE,
                Y_BOARD_SP + 900);  // 縦線を描画
        HgWLine(0, X_BOARD_SP, Y_BOARD_SP + i * CELL_SIZE, X_BOARD_SP + 900,
                Y_BOARD_SP + i * CELL_SIZE);  // 横線を描画
    }

    HgGetChar();  // キー入力待ち
    HgClose();    // ウィンドウを閉じる

    return 0;
}