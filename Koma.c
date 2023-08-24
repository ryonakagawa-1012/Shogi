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

void BoardInitialValue() {
    int x, y;

    for (x = 1; x < 10; x++) {
        board[x][7] = 自歩;
        board[x][3] = 敵歩;
    }

    board[1][9] = 自香;
    board[9][9] = 自香;

    board[2][9] = 自桂;
    board[8][9] = 自桂;

    board[3][9] = 自銀;
    board[7][9] = 自銀;

    board[4][9] = 自金;
    board[6][9] = 自金;

    board[2][8] = 自角;
    board[8][8] = 自飛;

    board[5][9] = 王;

    board[1][1] = 敵香;
    board[9][1] = 敵香;

    board[2][1] = 敵桂;
    board[8][1] = 敵桂;

    board[3][1] = 敵銀;
    board[7][1] = 敵銀;

    board[4][1] = 敵金;
    board[6][1] = 敵金;

    board[2][2] = 敵角;
    board[8][2] = 敵飛;

    board[5][1] = 玉;
}