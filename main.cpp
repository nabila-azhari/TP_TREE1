#include <iostream>
#include "header.h"

using namespace std;

int main() {
    int x[9] = {5, 3, 9, 10, 4, 7, 1, 8, 6};
    adr root = NULL;

    cout << "===============================================================================" << endl;
    cout << "5 3 9 10 4 7 1 8 6" << endl;
    /* 1. Tambahkan setiap elemen array x kedalam BST secara berurutan */
    for (int i = 0; i < 9; i++) {
        adr newNode = newNode_103012300316(x[i]);
        insertNode_103012300316(root, newNode);
    }

    /* 2. Tampilkan node dari BST secara Pre-Order */
    printf("\nPre Order\t\t:");
    printPreOrder_103012300316(root);
    printf("\n");

    /* 3. Tampilkan keturunan dari node 9 */
    printf("\nDescendent of Node 9\t:");
    printDescendant_103012300316(root, 9);
    printf("\n");

    /* 4. Tampilkan total info semua node pada BST */
    printf("\nSum of BST Info\t\t: %d\n", sumNode_103012300316(root));

    /* 5. Tampilkan banyaknya daun dari BST */
    printf("\nNumber of Leaves\t: %d\n", countLeaves_103012300316(root));

    /* 6. Tampilkan Tinggi dari Tree */
    printf("\nHeight of Tree\t\t: %d\n", heightTree_103012300316(root));

    cout << "===============================================================================" << endl;

    return 0;
}
