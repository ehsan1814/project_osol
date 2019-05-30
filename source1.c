#include <stdio.h>
#include <stdlib.h>
#define FILE_NAME "map-pacman.txt"

// what is attack in standard ??

struct block{

    //blocks are in this group
    char solid , death , move , wall ;


};

struct keys{

    // keys of keyboard that we use in game are here
    char up , down , left , right ;

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

	char enemy , enemy_target ;

};

struct standard{

    // this structure has fields in standard pdf
    // '\0' for char type and 0 for int type means that feature...
    // was not used in game

    struct block blocks ;
    struct keys keys ;
    struct put put ;
    struct coin coin ;

    char character ;
    char our_target ;
    char object ; // object is what character should put it on our_target
    char exit ;

    int time , raindb ;

};

