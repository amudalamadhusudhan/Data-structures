 #ifndef _Tree_H
#define _Tree_H

        typedef struct TreeNode *Position;
        typedef struct TreeNode *SearchTree;
	struct TreeNode
		{
		    int Element;
		    SearchTree  Left;
		    SearchTree  Right;
		};


        SearchTree MakeEmpty( SearchTree T );
        Position Find( int X, SearchTree T );
        Position FindMin( SearchTree T );
        Position FindMax( SearchTree T );
        SearchTree Insert( int X, SearchTree T );
        SearchTree Delete( int X, SearchTree T );
        int Retrieve( Position P );

        #endif  /* _Tree_H */
