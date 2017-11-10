#include<stdio.h>
#include<string.h>

void block_shape(void);

extern char I_block[4][4][4];
extern char T_block[4][4][4];
extern char Z_block[4][4][4];
extern char S_block[4][4][4];
extern char L1_block[4][4][4];
extern char L2_block[4][4][4];
extern char O_block[4][4][4];
extern char tetris_table[21][10];

extern int x;
extern int y;
extern int block_state;
extern int block_num;
extern int next_block_num;
extern int point;
extern int game;
