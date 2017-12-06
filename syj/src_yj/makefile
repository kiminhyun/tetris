libfuncs.a : background_screen.o line_clear.o level_up_check.o display_tetris.o
	ar rv libfuncs.a background_screen.o line_clear.o level_up_check.o display_tetris.o

background_screen.o : background_screen.c 
	gcc -c background_screen.c -I../header_yj -I../../kih/header_ih

line_clear.o : line_clear.c 
	gcc -c line_clear.c -I../header_yj -I../../kih/header_ih

level_up_check.o : level_up_check.c 
	gcc -c level_up_check.c -I../header_yj  -I../../kih/header_ih

display_tetris.o : display_tetris.c
	gcc -c display_tetris.c -I../header_yj  -I../../kih/header_ih


clean :
	rm  *.o *.a
