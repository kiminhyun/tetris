#include "tetris.h"

int collision(int command)
{
	int i,j;
	int tempx,tempy;
	int oldx,oldy;
	int temp_block_state;
	char (*block_pointer)[4][4][4];
	char temp_tetris_table[21][10];

	oldx = tempx = x;
	oldy = tempx = y;
	temp_block_state = block_state;

	switch(command)
	{
		case LEFT : tempx--; break;
		case RIGHT : tempx++; break;
		case DOWN : tempy++; break;
		case UP : ++temp_block_state%4; break;
	}
	switch(block_num)
	{
		case I_BLOCK : block_pointer = &I_block; break;
		case T_BLOCK : block_pointer = &T_block; break;
		case Z_BLOCK : block_pointer = &Z_block; break;
		case S_BLOCK : block_pointer = &S_block; break;
		case L1_BLOCK : block_pointer = &L1_block; break;
		case L2_BLOCK : block_pointer = &L2_block; break;
		case O_BLOCK : block_pointer = &O_block; break;
	}
	for(i=0; i<21 ;i++)
	{
		for(j=0; j<10; j++)
		{
			temp_tetris_table[i][j] = tetris_table[i][j];
		}
	}
	for(i=0,oldy=y; i<4;i++,oldy++;)
	{
		for(j=0,oldx=x; j<4; j++,oldx++;)
		{
			if(oldx>0 && oldx<9 && oldy<20 && oldy>0)
			{
				if((*block_pointer)[block_state][i][j] == 1)
				{
					temp_tetris_table[oldy][oldx] = 0;
				}
			}
		}
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			if(temp_tetris_table[tempy+i][tempx+j] == 1 && (*block_pointer)[temp_block_state][i][j] == 1)
			{
				return 1;
			}
		}
	}

	return 0;
}
