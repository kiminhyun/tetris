#include <stdio.h>
#include <stdlib.h>


int start_screen(void)
{
	int speed;

        system("clear");
        printf("************Tetris*************\n");
	printf("Speed Level (1~10) : ");
	scanf("%d",&speed);
	return speed;
}
