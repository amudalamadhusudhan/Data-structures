#ifndef _HashSep_H
#define _HashSep_H

typedef unsigned int Index;
struct ListNode;
typedef struct ListNode *Link;
struct HashTbl;
typedef struct HashTbl *HashTable;

struct ListNode
{
    int Element;
    Link    Next;
};

typedef Link List;

struct HashTbl
{
    int TableSize;
    List *TheLists;
};


HashTable InitializeTable( int TableSize );
void DestroyTable( HashTable H );
Link Find( int Key, HashTable H );
void Insert( int Key, HashTable H );
int Retrieve( Link P );

#endif  /* _HashSep_H */
