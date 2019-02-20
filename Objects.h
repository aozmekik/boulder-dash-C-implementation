/* DEFINED OBJECTS */
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>




typedef enum {EMPTY, MINER, EARTH, BORDER, ROCK, DIAMOND, SPIDER, MONSTER, WATER, DOOR}ID;

typedef struct
{
    int x, y;
}Position;

typedef struct
{
    int ObjectID;
    ALLEGRO_BITMAP *image;

}Object;

typedef struct
{
    int ObjectID;
    ALLEGRO_BITMAP *image;
    float speed;
    Position p;
    bool alive;
    unsigned int diamond, score, life;

}Miner;

typedef struct
{
    int ObjectID;
    ALLEGRO_BITMAP *image;
    Position p;
    bool is_falling, alive;
}FallingObject;


typedef struct
{
    int ObjectID;
    ALLEGRO_BITMAP *image;
    float speed;
    Position p;
    bool alive;
}MovingObject;


typedef struct
{
    int number;
    int total_diamond;
    char file_name[25];
    int row, col;
    int time;
    float y_radius, x_radius;
}Level;
