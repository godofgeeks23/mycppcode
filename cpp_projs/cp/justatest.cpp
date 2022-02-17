#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct tree
{
    struct tree *left;
    int val;
    struct tree *right;
};

struct tree *search(struct tree *t, int value)
{
    if (t == NULL)
    {
        return NULL;
    }
    else if (t->val == value)
    {
        return t;
    }
    else if (t->val > value)
    {
        return search(t->left, value);
    }
    else
    {
        return search(t->right, value);
    }
}
// struct tree *root=NULL; int  findmin(struct  tree  *t){
if (t->left)
    t = t->left;
return t->val;
}

struct tree *findMin(struct tree *t)
{
    if (t->left)
        t = t->left;

    return t;
}
int findmax(struct tree *t)
{
    if (t->right)
        t = t->right;

    return t->val;
}

int height(struct tree *t)
{

    if (t == NULL)
        return 0;
    int left = height(t->left);
    int right = height(t->right);

    return (left > right) ? left + 1 : right + 1;
}

struct tree *addnode(struct tree *t, int value)
{

    struct tree *temp = (struct tree *)malloc(sizeof(struct tree));
    temp->val = value;
    temp->left = NULL;
    temp->right = NULL;

    if (t == NULL)
        return temp;

    if (t->val > value)
    {
        t->left = addnode(t->left, value);
    }

    else if (t->val < value)
    {
        t->right = addnode(t->right, value);
    }

    return t;
}

void postorder(struct tree *t)
{
    if (t != NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d", t->val);
    }
}
void preorder(struct tree *t)
{
    if (t != NULL)
    {
        printf("%d", t->val);
        preorder(t->left);
        preorder(t->right);
    }
}
void inorder(struct tree *t)
{

    if (t != NULL)
    {

        inorder(t->left);
        printf("%d", t->val);
        inorder(t->right);
    }
}
struct tree *delete (struct tree *t, int value)
{
    if (t == NULL)
        return t;
    else if (t->val > value)
    {
        t->left = delete (t->left, value);
        return t;
    }
    else if (t->val < value)
    {
        t->right = delete (t->right, value);
        return t;
    }
    else
    {
        // cases
        // case 2

        if (t->left == NULL && t->right == NULL)
        {
            free(t);
            return NULL;
        }
        if (t->left == NULL)
        {
            struct tree *temp = t->right;
            free(t);
            return temp;
        }
        else if (t->right == NULL)
        {
            struct tree *temp = t->left;
            free(t);
            return temp;
        }
        // case-3
        struct tree *temp = findMin(t->right);
        t->val = temp->val;
        t->right = delete (t->right, temp->val);
    }
    return t;
}
int main()
{
    struct tree *root = NULL;
    // sending node value root=addnode(root, 65);

    for (int i = 0; i < 10; i++)
    {
        // binary tree	== randomly select left or right, if selected pointer is null  --  then  connect
        // int r=rand()%2; if(root->val>i)
        root->left = addnode(root->left, i);
        else root->right = addnode(root->right, i);
    }
    preorder(root);
    printf("======\n");
    inorder(root);
    printf("\n  height  of  the  tree  %d  \n", height(root));
    printf("Minimum  value  in  tree  is  %d\n", findmin(root));
    printf("Maximum  value  in  tree  is  %d\n", findmax(root));
    struct tree *t = search(root, 8);
    if (t != NULL)
    {
        printf("node  found  %p:\n", t);
    }

    else
    {
        printf("node  not  found\n");
    }
    t = delete (root, 5);
    postorder(root);
    return 0;
}
