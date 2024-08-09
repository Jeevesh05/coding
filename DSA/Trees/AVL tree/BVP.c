#include <stdio.h>
#include <stdlib.h>

// Structure for AVL tree node
struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

// Function to create a new node
struct Node* createNode(int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}

// Function to get height of the node
int height(struct Node* node) {
    if (node == NULL)
        return 0;
    return node->height;
}

// Function to get maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to right rotate subtree rooted with y
struct Node* rightRotate(struct Node* y) {
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    // Return new root
    return x;
}

// Function to left rotate subtree rooted with x
struct Node* leftRotate(struct Node* x) {
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    // Return new root
    return y;
}

// Get Balance factor of node
int getBalance(struct Node* node) {
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

// Recursive function to insert a key in the subtree rooted with node and returns the new root of the subtree
struct Node* insert(struct Node* node, int key, int *left_rotations, int *right_rotations) {
    // Perform the normal BST insertion
    if (node == NULL)
        return createNode(key);

    if (key < node->key) {
        node->left = insert(node->left, key, left_rotations, right_rotations);
    } else if (key > node->key) {
        node->right = insert(node->right, key, left_rotations, right_rotations);
    } else {
        // Duplicate keys are not allowed in AVL trees
        return node;
    }

    // Update height of this ancestor node
    node->height = 1 + max(height(node->left), height(node->right));

    // Get the balance factor of this ancestor node to check whether this node became unbalanced
    int balance = getBalance(node);

    // If this node becomes unbalanced, then there are four cases

    // Left Left Case
    if (balance > 1 && key < node->left->key) {
        (*right_rotations)++;
        return rightRotate(node);
    }

    // Right Right Case
    if (balance < -1 && key > node->right->key) {
        (*left_rotations)++;
        return leftRotate(node);
    }

    // Left Right Case
    if (balance > 1 && key > node->left->key) {
        (*left_rotations)++;
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key) {
        (*right_rotations)++;
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    // Return the unchanged node pointer
    return node;
}

// Function to print inorder traversal of the AVL tree
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int left_rotations = 0;
    int right_rotations = 0;

    // Inserting elements into the AVL tree
    root = insert(root, 16, &left_rotations, &right_rotations);
    root = insert(root, 27, &left_rotations, &right_rotations);
    root = insert(root, 9, &left_rotations, &right_rotations);
    root = insert(root, 11, &left_rotations, &right_rotations);
    root = insert(root, 36, &left_rotations, &right_rotations);
    root = insert(root, 54, &left_rotations, &right_rotations);
    root = insert(root, 81, &left_rotations, &right_rotations);
    root = insert(root, 63, &left_rotations, &right_rotations);
    root = insert(root, 72, &left_rotations, &right_rotations);
    root = insert(root, 78, &left_rotations, &right_rotations);

    // Print inorder traversal of the AVL tree
    printf("Inorder traversal of the AVL tree: ");
    inorder(root);
    printf("\n");

    // Print total number of left and right rotations
    printf("Total number of left rotations: %d\n", left_rotations);
    printf("Total number of right rotations: %d\n", right_rotations);

    return 0;
}
