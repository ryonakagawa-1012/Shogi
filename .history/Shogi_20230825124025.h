#ifndef _SHOGI_H_
#define _SHOGI_H_

#define 先手 1
#define 後手 -1

#define 自歩 1
#define 敵歩 -1

#define 自香 2
#define 敵香 -2

#define 自桂 3
#define 敵桂 -3

#define 自銀 4
#define 敵銀 -4

#define 自金 5
#define 敵金 -5

#define 自角 6
#define 敵角 -6

#define 自飛 7
#define 敵飛 -7

#define 王 8
#define 玉 -8

#define 自と 11
#define 敵と -11

#define 自成香 12
#define 敵成香 -12

#define 自成桂 13
#define 敵成桂 -13

#define 自成銀 14
#define 敵成銀 -14

#define 自馬 16
#define 敵馬 -16

#define 自竜 17
#define 敵竜 -17

#define WINDOW_MAIN_SIZE 950  // メインウィンドウのサイズ

#define CELL_SIZE 100  // 将棋盤の1マスのサイズ

#define X_BOARD_LD \
    (WINDOW_MAIN_SIZE - CELL_SIZE * 9) / 2  // 将棋盤の右下のx座標
#define Y_BOARD_LD \
    (WINDOW_MAIN_SIZE - CELL_SIZE * 9) / 2  // 将棋盤の右下のy座標

#define X_BOARD_RU 925  // 将棋盤の左上のx座標
#define Y_BOARD_RU 925  // 将棋盤の左上のy座標

extern int board[11][11];
extern int turn;

void BoardInitialize(void);

void draw_koma(int, int);

#endif  // _SHOGI_H_