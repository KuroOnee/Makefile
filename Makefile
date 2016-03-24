Path: obj/main.o obj/func.o
	gcc -o bin/Path obj/*.o
    
obj/main.o: src/main.c
	gcc -c -o obj/main.o  src/main.c

obj/func.o: src/func.c
	gcc -c -o obj/func.o src/func.c