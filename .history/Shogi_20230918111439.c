/*
    将棋

    *MEMO*
    ベースレイヤー：将棋盤
    メインレイヤー：駒



    使用した素材：https://putiya.com/html/hobby/syougi_koma01.html
*/

#include "Shogi.h"

#include <handy.h>
#include <stdio.h>

#include "Shogi_ initialize.c"
#include "draw_koma.c"

int main(void) {
    int i, j;  // カウンタ変数

    int xCell, yCell;  // マスの座標

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

    Main_Layer_ID = HgWAddLayer(0);  // メインレイヤーのID

    HgWSetTitle(0, "将棋");  // mainウィンドウのタイトルを設定

    /**********ここまで**********/

    /**********将棋盤の描画**********/

    HgSetWidth(2.0);

    for (i = 0; i < 11; i++) {
        HgWLine(0, X_BOARD_LD + i * CELL_SIZE, Y_BOARD_LD,
                X_BOARD_LD + i * CELL_SIZE,
                Y_BOARD_LD + 900);  // 縦線を描画
        HgWLine(0, X_BOARD_LD, Y_BOARD_LD + i * CELL_SIZE, X_BOARD_LD + 900,
                Y_BOARD_LD + i * CELL_SIZE);  // 横線を描画
    }

    HgSetFillColor(HG_BLACK);

    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 2; j++) {
            HgWCircleFill(0, X_BOARD_LD + 3 * CELL_SIZE * j,
                          Y_BOARD_LD + 3 * CELL_SIZE * i, 7,
                          1);  // 円を描画
        }
    }

    /**********ここまで**********/

    /**********駒の描画**********/

    BoardInitialize();  // 駒の初期値を設定

    /*
        for (i = 1; i < 10; i++) {
            for (j = 1; j < 10; j++) {
                printf("%2d ", board[j][i]);  //デバッグ用
            }
            printf("\n");
        }
    */

    /**********ここまで**********/

    HgSetEventMask(HG_MOUSE_DOWN);  // キー入力を受け付ける

    /**********ゲームのメインループ**********/

    for (turn = 1; turn <= 1; turn++) {
        draw_koma();  // 駒を描画
    }

    /**********ここまで**********/

    HgGetChar();  // キー入力待ち
    HgClose();    // ウィンドウを閉じる

    return 0;
}