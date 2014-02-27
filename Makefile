all: usleep

usleep: usleep.c
	gcc -O2 -o usleep usleep.c

.PHONY : clean
clean:
	-rm usleep
