#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1024
#define BOOL int
#define TRUE 1
#define FALSE 0


int main()
{
    int total=0;
    int tens;
    int units;    
    BOOL first_flag= TRUE;
    char c;

    c=getchar();
    while( c != EOF)
    {
        switch (c)
        {
            case '\n':
                total+= tens * 10 + units;
                first_flag= TRUE;

                printf("Running total is %d\n", total);
            break;
        
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                if( first_flag) {
                    tens= (int) c - '0';
                    units= tens;
                    first_flag= FALSE;
                }
                else {
                    units= (int) c - '0';
                }
            default:
                break;
        }

        c=getchar();
    }

    printf("Final total is %d\n", total);

    return 0;
}