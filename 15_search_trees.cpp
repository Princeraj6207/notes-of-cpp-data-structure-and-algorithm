
                                    /*              code of 2-3-4 trees         */

#include <stdio.h>
#include <stdlib.h>

#define MAX_KEYS 3
#define MAX_CHILDREN 4

typedef struct Node {
    int keys[MAX_KEYS];                // Array to hold the keys in the node
    struct Node* children[MAX_CHILDREN]; // Array to hold pointers to the child nodes
    int numKeys;                       // Number of keys currently in the node
    int isLeaf;                        // Boolean flag indicating if the node is a leaf
} Node;

Node* createNode(int isLeaf) {
    Node* node = (Node*)malloc(sizeof(Node)); // Allocate memory for a new node
    node->numKeys = 0;                        // Initialize the number of keys to 0
    node->isLeaf = isLeaf;                    // Set whether the node is a leaf
    for (int i = 0; i < MAX_CHILDREN; i++) {
        node->children[i] = NULL;             // Initialize all children pointers to NULL
    }
    return node;                              // Return the created node
}

void splitChild(Node* parent, int index, Node* child) {
    Node* newChild = createNode(child->isLeaf); // Create a new node to hold half of the child's keys
    newChild->numKeys = 1;                      // New child will have one key after the split
    newChild->keys[0] = child->keys[2];         // Move the third key of the child to the new child

    if (!child->isLeaf) {
        newChild->children[0] = child->children[2]; // Move the corresponding child pointers
        newChild->children[1] = child->children[3];
    }

    child->numKeys = 1;                        // The original child now has only one key

    for (int i = parent->numKeys; i >= index + 1; i--) {
        parent->children[i + 1] = parent->children[i]; // Shift the parent's child pointers to the right
    }
    parent->children[index + 1] = newChild;    // Link the new child to the parent

    for (int i = parent->numKeys - 1; i >= index; i--) {
        parent->keys[i + 1] = parent->keys[i]; // Shift the parent's keys to the right
    }
    parent->keys[index] = child->keys[1];      // Move the middle key of the child to the parent
    parent->numKeys++;                         // Increment the number of keys in the parent
}

void insertNonFull(Node* node, int key) {
    int i = node->numKeys - 1;                 // Start from the rightmost key

    if (node->isLeaf) {
        while (i >= 0 && key < node->keys[i]) {
            node->keys[i + 1] = node->keys[i]; // Shift keys to the right to make space for the new key
            i--;
        }
        node->keys[i + 1] = key;               // Insert the new key
        node->numKeys++;                       // Increment the number of keys in the node
    } else {
        while (i >= 0 && key < node->keys[i]) {
            i--;                               // Find the child that will have the new key
        }
        i++;
        if (node->children[i]->numKeys == MAX_KEYS) { // If the child is full, split it
            splitChild(node, i, node->children[i]);
            if (key > node->keys[i]) {
                i++;                           // Adjust index if the new key should go to the new child
            }
        }
        insertNonFull(node->children[i], key); // Recur to insert the key in the appropriate child
    }
}

void insert(Node** root, int key) {
    Node* r = *root;
    if (r->numKeys == MAX_KEYS) {              // If the root is full, then the tree grows in height
        Node* s = createNode(0);               // Create a new root
        *root = s;
        s->children[0] = r;                    // Old root becomes the child of the new root
        splitChild(s, 0, r);                   // Split the old root
        insertNonFull(s, key);                 // Insert the key into the new root
    } else {
        insertNonFull(r, key);                 // If the root is not full, insert the key into the root
    }
}

void traverse(Node* root) {
    if (root != NULL) {
        int i;
        for (i = 0; i < root->numKeys; i++) {
            if (!root->isLeaf) {
                traverse(root->children[i]);   // Recur on the child before the current key
            }
            printf("%d ", root->keys[i]);      // Print the current key
        }
        if (!root->isLeaf) {
            traverse(root->children[i]);       // Recur on the last child
        }
    }
}

int main() {
    Node* root = createNode(1);                // Start with an empty tree
    insert(&root, 10);                         // Insert keys into the tree
    insert(&root, 20);
    insert(&root, 5);
    insert(&root, 6);
    insert(&root, 12);
    insert(&root, 30);
    insert(&root, 7);
    insert(&root, 17);

    printf("Traversal of the constructed 2-3-4 tree is:\n");
    traverse(root);                            // Print the keys of the tree in order
    printf("\n");

    return 0;
}
