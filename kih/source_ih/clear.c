#include "teteis.h"

int clear(int num)
{
	static int down_cnt=0;
	static int set_cnt=0;
	static long spd_cnt=0;
	static int cnt_range=5;
	static int fst_start=0;

	char c;

	srand((unsigned)time(NULL));
	cnt_range=5;
	if(fst_start == 0)
	{
		block_num=rand()%7;
		if(fst_start == 0)
		{
			fst_start++;
		}
	}
	printf("\n Score: %ld || Speed: %d || Deleted Line: %d\n",point,cnt_range,delete_line);

	display_tetris();
	line_clear();

	if(down_cnt == cnt_range-1)
	{
		point+=1;
		move_block(DOWN);
	}
	if(spd_cnt == 499)
	{
		if(cnt_range != 1)
		{
			cnt_range--;
		}
	}
	down_cnt++;
	down_cnt %= cnt_range;
	spd_cnt++;
	spd_cnt %= 500;

	if(x==3 && y==0)
	{
		if(collision(LEFT) || collision(RIGHT) || collision(DOWN) || collision(UP))
		{
			printf("\n Game End\n");
			down_cnt = 0;
			set_cnt = 0;
			spd_cnt = 0;
			cnt_range = 5;
			fst_start = 0;
			game= GAME_END;
		}
	}
	if(collision(DOWN))
	{
		if(set_cnt == 9)
		{
			block_num = next_block_num;
			next_block_num = rand()%7;
			block_state = 0;
			x = 3;
			y = 0;
		}
		set_cnt++;
		set_cnt%=10;
	}
	c = getch();

	switch(c)
	{
		case 74 :
		case 106 : move_block(LEFT); break;
		case 76 :
		case 108 : move_block(RIGHT); break;
		case 75 :
		case 107 : move_block(DOWN); break;
		case 73 :
		case 105 : move_block(UP); break;
		case 65 :
		case 97 : drop(); break;
		case 80 :
		case 112 : down_cnt = 0;
			   set_cnt = 0;
			   spd_cnt = 0;
			   cnt_range: 5;
			   fst_start = 0;
			   game = GAME_END;
			   break;
		default : break;
	}

	return 0;
}
