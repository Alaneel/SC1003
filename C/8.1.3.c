#include <stdio.h>

void Flush(void);
char GetCommand(void);

int main(void){
    GetCommand();
    return 0;
}

char GetCommand( void )
{
    char command;

    do {
        printf( "Enter command (q=quit, n=new, l=list):  " );
        command = getchar();
        Flush();
    }
    while ( (command != 'q') && (command != 'n')
           && (command != 'l') );

    printf( "\n----------\n" );
    return( command );
}

void Flush( void ) {
    while ( getchar() != '\n' );
}