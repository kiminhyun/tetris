#pragma once
#include<stdio.h>
#include<string.h>
#include<signal.h>
#include<time.h>

#define LEFT 0
#define RIGHT 1
#define DOWN 2
#define UP 3

#define I_BLOCK 0
#define T_BLOCK 1
#define Z_BLOCK 2
#define S_BLOCK 3
#define L1_BLOCK 4
#define L2_BLOCK 5
#define O_BLOCK 6

void block_shape(void);
int collision(int command);
int move_block(int command);
int drop(void);

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
extern long point;
