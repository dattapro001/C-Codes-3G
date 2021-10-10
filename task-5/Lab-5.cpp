#include <iostream>
using namespace std;

const int node = 40;

int tree[node];

void PreOrder(int root);
void InOrder(int root);
void PostOrder(int root);


int main()
{
    int i;

    for(i=1; i<node; i++)
        tree[i] = '\0';
    tree[1] = 1,
    tree[2] = 2,
    tree[3] = 3,
    tree[4] = 4,
    tree[5] = 5,
    tree[6] = 6,
    tree[7] = 7;

    cout << "Pre-order:";
    PreOrder(1);
    cout << endl << endl;

    cout << "In-order :";
    InOrder(1);
    cout << endl << endl;

    cout << "Post-oder:";
    PostOrder(1);
    cout << endl << endl;

    return 0;
}


void PreOrder(int root)
{
    if(tree[root] == '\0')
        return;

    int left = root * 2;
    int right = left + 1;

    cout << "-> " << tree[root];
    PreOrder(left);
    PreOrder(right);
}

void InOrder(int root)
{
    if(tree[root] == '\0')
        return;

    int left = root * 2;
    int right = left + 1;

    InOrder(left);
    cout << "-> " << tree[root];
    InOrder(right);
}

void PostOrder(int root)
{
    if(tree[root] == '\0')
        return;

    int left = root * 2;
    int right = left + 1;

    PostOrder(left);
    PostOrder(right);
    cout << "-> " << tree[root];
}
