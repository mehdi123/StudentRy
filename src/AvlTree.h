// AvlTree.h: interface for the AvlTree class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_AVLTREE_H__83593A30_83A2_45F6_A2CD_BE38D7C53B60__INCLUDED_)
#define AFX_AVLTREE_H__83593A30_83A2_45F6_A2CD_BE38D7C53B60__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Score.h"

#define LH +1     // Left High 
#define EH  0     // Even High 
#define RH -1     // Right High 

// 	NODE Definitions
template <class TYPE> 
struct NODE 
	{
	 TYPE    data;
	 NODE   *left;
	 int     bal;
	 NODE   *right;
	} ; // NODE

template <class TYPE, class KTYPE> 
class AvlTree
	{
	 private: 
	    int          count;
	    NODE<TYPE>  *tree;

	    NODE<TYPE> *_insert          (NODE<TYPE>  *root, 
                                      NODE<TYPE>  *newPtr, 
	                                  bool&       taller);

	    NODE<TYPE>  *leftBalance     (NODE<TYPE>  *root, 
	                                  bool&        taller);

	    NODE<TYPE>  *rotateLeft      (NODE<TYPE>  *root);
	    NODE<TYPE>  *rightBalance    (NODE<TYPE>  *root, 
	                                  bool&        taller);
	    NODE<TYPE>  *rotateRight     (NODE<TYPE>  *root);
	    NODE<TYPE> *_delete          (NODE<TYPE>  *root, 
	                                  KTYPE        dltKey,
	                                  bool&        shorter,
	                                  bool&        success);

	    NODE<TYPE>  *dltLeftBalance  (NODE<TYPE>  *root,
	                                  bool&        smaller);
	    NODE<TYPE>  *dltRightBalance (NODE<TYPE>  *root, 
	                                  bool&        shorter);
	    NODE<TYPE> *_retrieve        (KTYPE        key, 
	                                  NODE<TYPE>  *root);
	                                  
	    void  _traversal  (void (*process)(TYPE dataProc),
	                              NODE<TYPE>    *root); 

	    void  _destroyAVL (NODE<TYPE>  *root);

//  	The following function is used for debugging.
	    void  _print      (NODE<TYPE> *root, int   level);

	 public:
	          AvlTree (void);
	         ~AvlTree  (void); 
	    bool  AVL_Insert   (TYPE   dataIn); 
	    bool  AVL_Delete   (KTYPE  dltKey);
	    bool  AVL_Retrieve (KTYPE  key,     TYPE& dataOut);
	    void  AVL_Traverse (void (*process)(TYPE  dataProc));

	    bool  AVL_Empty    (void);
	    bool  AVL_Full     (void);
	    int   AVL_Count    (void);
	    
//      The following function is used for debugging.
	    void  AVL_Print    (void);
} ; // class AvlTree
#endif // !defined(AFX_AVLTREE_H__83593A30_83A2_45F6_A2CD_BE38D7C53B60__INCLUDED_)
