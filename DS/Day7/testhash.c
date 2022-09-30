#include "hashsep.h"
#include <stdlib.h>

#include <stdio.h>

#define NumItems 400

main( )
{
    HashTable H;
    Link P;
    int i;
    int j = 0;

    H = InitializeTable( 10007 );

    for( i = 0; i < NumItems; i++, j += 71 )
    {
	printf("Element to be inserted =%d\n ", j);
        Insert( j, H );
    }

    for( i = 0, j = 0; i < NumItems; i++, j += 71 )
        if( ( P = Find( j, H ) ) == NULL || Retrieve( P ) != j )
            printf( "Error at %d\n", j );

    return 0;
}
