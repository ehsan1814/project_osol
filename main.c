#include <stdio.h>
#include <stdlib.h>

// what is attack in standard ??

struct block{

    //blocks are in this group
    char solid , death , move , wall;
    int raindb;

};

struct keys{

    // keys of keyboard that we use in game are here
    char up , down , left , right ;
    char exit ;

};

struct put{

    //by push key character put object in its point and ...
    // number is limit of these objects

    char key , object ;
    int number;

};

struct coin{

    // number is number of coin , and point is point of it
    // shape is shape of coin in game => EX : "*"

    int number , point ;
    char shape ;

};

struct enemy{

    char enemy;
    char enemy_target;

};

struct character{

    char player ;
    char player_target ;
    char object ; // it is object that player should bring it to player_target

};

struct standard{

    // this structure has fields in standard pdf
    // '\0' for char type and 0 for int type means that feature...
    // was not used in game

    struct block blocks ;
    struct keys keys ;
    struct put put ;
    struct coin coin ;
    struct enemy ;
    struct player;

    int time;

};

int main( ){

    char *map;
    int is_finish;
    map = extract_map( FILE_NAME );

    while( !is_finish ){

        display( map , condition ) // condition : 0 => is playing & 1 => victory & 2 => losed
        engine()

    }





    return 0 ;

}
