#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define right(P) (P)->right
#define left(P) (P)->left

typedef int infotype;

typedef struct node *adr;

struct node{
    infotype info;
    adr right;
    adr left;
};
typedef adr BinTree;

adr newNode_103012300316(infotype x);
adr findNode_103012300316(adr root, infotype x);
void insertNode_103012300316(adr &root, adr P);
void printPreOrder_103012300316(adr root);
void printDescendant_103012300316(adr root, infotype x);
int sumNode_103012300316(adr root);
int countLeaves_103012300316(adr root);
int heightTree_103012300316(adr root);

#endif // HEADER_H_INCLUDED
