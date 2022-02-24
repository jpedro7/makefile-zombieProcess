all: main.c bin run clean

bin: main.c
	gcc $< -o $@

run: bin
	./$<

clean: bin
	rm $<
