#include <stdio.h>
#include <stdlib.h>
#include "hashsep.h"

#define MinTableSize (10)



Index
Hash( int Key, int TableSize )
{
    return Key % TableSize;
}

HashTable
InitializeTable( int TableSize )
{
    HashTable H;
    int i;

     if( TableSize < MinTableSize )
    {
          fprintf(stderr,"Table size too small" );
          return NULL;
    }

    /* Allocate table */
      H = malloc( sizeof( struct HashTbl ) );
      if( H == NULL )
          fprintf(stderr,"Out of space!!!" );

      H->TableSize = TableSize ;

    /* Allocate array of lists */
      H->TheLists = malloc( sizeof( List ) * H->TableSize );
      if( H->TheLists == NULL )
          fprintf(stderr,"Out of space!!!" );

    /* Allocate list headers */
      for( i = 0; i < H->TableSize; i++ ) {
          H->TheLists[ i ] = malloc( sizeof( struct ListNode ) );
          if( H->TheLists[ i ] == NULL )
              fprintf(stderr,"Out of space!!!" );
	else
              H->TheLists[ i ]->Next = NULL;
	}

      return H;
}

Link
Find( int Key, HashTable H )
{
    Link P;
    List L;

	L = H->TheLists[ Hash( Key, H->TableSize ) ];
	P = L->Next;
	while( P != NULL && P->Element != Key )
			  /* Probably need strcmp */
	  P = P->Next;
	return P;
}



void
Insert( int Key, HashTable H )
{
    Link Pos, NewCell;
    List L;

	Pos = Find( Key, H );
	if( Pos == NULL )   /* Key is not found */
	{
	  NewCell = malloc( sizeof( struct ListNode ) );
	  if( NewCell == NULL )
	      fprintf(stderr,"Out of space!!!" );
	  else
	 {
	      L = H->TheLists[ Hash( Key, H->TableSize ) ];
	      NewCell->Next = L->Next;
	      NewCell->Element = Key;  /* Probably need strcpy! */
	      L->Next = NewCell;
	  }
	}
} 

int
Retrieve( Link P )
{
    return P->Element;
}

void
DestroyTable( HashTable H )
{
    int i;

    for( i = 0; i < H->TableSize; i++ )
    {
	Link P = H->TheLists[ i ];
	Link Tmp;

	while( P != NULL )
	{
	    Tmp = P->Next;
	    free( P );
	    P = Tmp;
	}
    }

    free( H->TheLists );
    free( H );
}
