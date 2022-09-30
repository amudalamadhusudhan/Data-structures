#include "tree.h"
#include <stdio.h>

int main( )
{
    SearchTree T;
    Position P;
    int i;
    int j =8;

    T = MakeEmpty( NULL );
    for( i = 0; i < 50; i++, j = ( i + 7 ) % 50 ) {
        T = Insert( j, T );
	printf("j=%d has been inserted\n",j);
    }
    T =Find (8, T);		
	printf("The element at T =%p found is %d\n", T,T->Element);

    for( i = 0; i < 50; i += 2 ) {
        T = Delete( i, T );
    }	
    printf( "Min is %d, Max is %d\n", Retrieve( FindMin( T ) ),
               Retrieve( FindMax( T ) ) );

    return 0;
}

