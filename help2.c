#include <stdio.h>
#include <stdlib.h>

void read_from_file( char * , char * ) ;
char find_char( char * , char * ) ;


int main(){
	char a[] = "solidblock=D" ;
	char b ;
	b = find_char( a , "solidblock") ;
	printf("%c",b) ;

	return 0 ;
}

char *read_from_file( char *file_detail , char *file_name ){//bara proje asli

	FILE *fd ;
	fd = fopen( file_name , "r" ) ;
	int c , counter ;
	counter = 0 ;
	while ( ( c = fgetc(fd) ) != EOF ){

		if ( c != ' ' ){

			file_detail[counter++] = c ;

		}
	}
	file_detail[counter] = '\0' ;

	fclose( fd ) ;

}


char find_char( char *file_detail , char *char_for_find ){

	char *start ;
	start = strstr( file_detail , char_for_find ) ;

	if( start == NULL )
		return NULL ;

	return *( start + strlen( char_for_find ) + 1 ) ;
}











