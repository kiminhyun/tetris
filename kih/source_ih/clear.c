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

	//clear

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

	return 0;
}
