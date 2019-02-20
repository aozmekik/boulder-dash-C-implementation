CC = gcc
FLAGS = -pedantic -g -Wall `pkg-config --cflags --libs allegro-5 allegro_dialog-5 allegro_ttf-5 allegro_image-5 allegro_dialog-5 allegro_audio-5 allegro_acodec-5 `
BIN = bd
SOURCE = bd.c 
HEADER = Objects.h bd.h 

target : all

all: $(HEADER) $(SOURCE)
	$(CC) $(SOURCE) $(FLAGS) -o $(BIN) && ./bd

clean :
	rm all

