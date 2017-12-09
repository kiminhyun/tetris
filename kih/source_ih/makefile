libih.so lib.so.1 : libih.so.1.0
	ln -s libih.so.1.0 libih.so
	ln -s libih.so.1.0 libih.so.1
libih.so.1.0 : block_shape.o drop.o clear.o collision.o game_start.o move_block.o
	ld -shared -soname=libih.so.1 *.o -o libih.so.1.0 -lc
block_shape.o : block_shape.c
	gcc -fPIC -c block_shape.c -I../header_ih
drop.o : drop.c
	gcc -fPIC -c drop.c -I../header_ih
clear.o : clear.c
	gcc -fPIC -c clear.c -I../header_ih -L/../../syj/syj_src -lfuncs
collision.o : collision.c
	gcc -fPIC -c collision.c -I../header_ih
game_start.o : game_start.c
	gcc -fPIC -c game_start.c -I../header_ih -L/../../syj/syj_src -lfuncs
move_block.o : move_block.c
	gcc -fPIC -c move_block.c -I../header_ih
clean :
	rm *.o

