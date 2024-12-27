#include "header.h"

adr newNode_103012300316(infotype x){
/* mengembalikan alamat dari node yang memiliki info sama dengan x, atau NULL
apabila tidak ditemukan, Catatan: implementasikan secara REKURSIF */

    adr N = new node;
    info(N) = x;
    right(N) = NULL;
    left(N) = NULL;
    return N;

}

adr findNode_103012300316(adr root, infotype x){
/* mengembalikan alamat dari node yang memiliki info sama dengan x, atau NULL
apabila tidak ditemukan, Catatan: implementasikan secara REKURSIF */
    if (root == NULL){
        return NULL;
    }
    if (info(root) == x){
        return root;
    }
    adr LEFT = findNode_103012300316(left(root), x);
    if (LEFT != NULL){
        return LEFT;
    }
    return findNode_103012300316(right(root), x);

}

void insertNode_103012300316(adr &root, adr P){
/* I.S. terdefinisi root dari BST (mungkin NULL), dan pointer p yang berisi
alamat node yang mau ditambahkan pada BST
 F.S. elemen yang ditunjuk oleh p ditambahkan sebagai node dari BST
Catatan: implementasikan secara REKURSIF */
    if (root == NULL){
        root = P;
    }else{
        if (info(P) < info(root)){
            insertNode_103012300316(left(root), P);
        }else{
            insertNode_103012300316(right(root), P);
        }
    }
}


void printPreOrder_103012300316(adr root){
    /* I.S. terdefinisi root dari BST (mungkin NULL)
 F.S. menampilkan node dari BST secara Preorder atau dengan urutan root, left
dan right
Catatan: implementasikan secara REKURSIF */
    if (root != NULL){
        cout << info(root) << " ";
        printPreOrder_103012300316(left(root));
        printPreOrder_103012300316(right(root));

    }
}


void printDescendant_103012300316(adr root, infotype x){
/* I.S. terdefinisi suatu root dari BST (mungkin NULL), dan infotype x
 F.S. menampilkan subtree atau keturunan dari node yang memiliki info x
Catatan: implementasikan secara REKURSIF */
    if (root != NULL){
        if (info(root) == x){
            printPreOrder_103012300316(left(root));
            printPreOrder_103012300316(right(root));
        }
        printDescendant_103012300316(left(root), x);
        printDescendant_103012300316(right(root), x);
    }
}


int sumNode_103012300316(adr root){
/* mengembalikan hasil penjumlahan semua info node yang terdapat pada BST
Catatan: implementasikan secara REKURSIF */
    if (root == NULL){
        return 0;
    }
    return info(root) + sumNode_103012300316(left(root)) + sumNode_103012300316(right(root));
}

int countLeaves_103012300316(adr root){
    if (root == NULL){
        return 0;
    }
    if ((right(root) == NULL) && (left(root) == NULL)){
        return 1;
    }
    return countLeaves_103012300316(left(root)) + countLeaves_103012300316(right(root));
}


int heightTree_103012300316(adr root){
    if (root == NULL){
        return -1; //level tree dimulai dari 0
    }
    int rightHeight = heightTree_103012300316(right(root));
    int leftHeight = heightTree_103012300316(left(root));

    int maxHeight;
    if (rightHeight >= leftHeight){
        maxHeight = rightHeight;
    }else if (rightHeight <= leftHeight){
        maxHeight = leftHeight;
    }
    return 1 + maxHeight;
}
