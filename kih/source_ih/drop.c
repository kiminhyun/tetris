#include "tetris.h"

int drop(void)
{
	while(!collision(DOWN))
	{
		move_block(DOWN);
	}
	return 0;
}
