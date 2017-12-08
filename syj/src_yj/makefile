libfuncs.a : init_tetris_table.o start_screen.o line_clear.o display_tetris.o
	ar rv libfuncs.a init_tetris_table.o start_screen.o line_clear.o display_tetris.o

start_screen.o : start_screen.c 
	gcc -c start_screen.c -I../header_yj

line_clear.o : line_clear.c 
	gcc -c line_clear.c -I../header_yj -I../../kih/header_ih

init_tetris_table.o : init_tetris_table.c 
	gcc -c init_tetris_table.c -I../header_yj  -I../../kih/header_ih

display_tetris.o : display_tetris.c
	gcc -c display_tetris.c -I../header_yj  -I../../kih/header_ih


clean :
	rm  *.o *.a
