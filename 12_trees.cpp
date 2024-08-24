
                            /*      Formation of tree and its child using queue and linked list     */


// #include <stdio.h>
// #include <stdlib.h>

// struct node 
// {
//     struct node *lchild;
//     int data;
//     struct node *rchild;
// };


// struct queue
// {
//     int size;
//     int front;
//     int rear;
//     node **Q;
// };


// void create(struct queue *q)
// {
//     printf("Enter the size of Queue : ");
//     scanf("%d", &q->size);
//     q->rear=q->front=0;
//     q->Q=(node**)malloc(q->size*sizeof(node*));
//     printf("\n");
// }

// void enqueue(struct queue *q, node *x)
// {
//     if((q->rear+1)%q->size==q->front)
//         printf("\n queue is full");

//     else
//     {
//        q->rear = (q->rear+1)%q->size;
//        q->Q[q->rear]=x;
//     }
// }

// node *dequeue(struct queue *q)
// {
//     node *x=NULL;
//     if(q->front==q->rear)
//         printf("queue is empty\n");
//     else
//     {
//         q->front = q->front+1;
//         x=q->Q[q->front];
        
//     }
//     return x;
//     printf("\n");
// }

// int isEmpty(struct queue q)
// {
//     return q.front==q.rear;
// }

// struct node *root=NULL;

// void Tcreate()
// {
//     struct node *t, *p;
//     int x;
//     struct queue q;
//     create(&q);

//     printf("Enter the root node : ");
//     scanf("%d", &x);

//     root=(struct node*)malloc(sizeof(struct node));
//     root->data=x;
//     root->lchild=root->rchild=NULL;
//     enqueue(&q, root);

//     while(!isEmpty(q))
//     {
//         p=dequeue(&q);
//         printf("Enter the lchild of %d  ", p->data);
//         scanf("%d", &x);
//         if(x!=-1)
//         {
//             t=(struct node*)malloc(sizeof(struct node));
//             t->data=x;
//             t->lchild=t->rchild=NULL;
//             p->lchild=t;
//             enqueue(&q,t);
//         }

//         printf("\n");

//         printf("Enter the rchild of %d  ", p->data);
//         scanf("%d", &x);
//         if(x!=-1)
//         {
//             t=(struct node*)malloc(sizeof(struct node));
//             t->data=x;
//             t->lchild=t->rchild=NULL;
//             p->rchild=t;
//             enqueue(&q,t);
//         }

//     }

// }

// void preorder(struct node *p)
// {
//     if(p)
//     {
//         printf("%d ", p->data);
//         preorder(p->lchild);
//         preorder(p->rchild);

//     }
// }

// void inorder(struct node *p)
// {
//     if(p)
//     {
//         inorder(p->lchild);
//         printf("%d ", p->data);
//         inorder(p->rchild);

//     }
// }

// void postorder(struct node *p)
// {
//     if(p)
//     {
//         inorder(p->lchild);
//         inorder(p->rchild);
//         printf("%d ", p->data);
//     }
// }

// int main()
// {
    
//     Tcreate();
//     preorder(root);
// }



                                        /*          c++ program for trees           */

// #include <iostream>

// using namespace std;
 
// class Node{
// public:
//     Node* lchild;
//     int data;
//     Node* rchild;
// };
 
// class Queue{
// private:
//     int size;
//     int front;
//     int rear;
//     Node** Q;  // [Node*]*: Pointer to [Pointer to Node]
// public:
//     Queue(int size);
//     ~Queue();
//     bool isFull();
//     bool isEmpty();
//     void enqueue(Node* x);
//     Node* dequeue();
// };
 
// Queue::Queue(int size) {
//     this->size = size;
//     front = -1;
//     rear = -1;
//     Q = new Node* [size];
// }
 
// Queue::~Queue() {
//     delete [] Q;
// }
 
// bool Queue::isEmpty() {
//     if (front == rear){
//         return true;
//     }
//     return false;
// }
 
// bool Queue::isFull() {
//     if (rear == size-1){
//         return true;
//     }
//     return false;
// }
 
// void Queue::enqueue(Node* x) {
//     if (isFull()){
//         cout << "Queue Overflow" << endl;
//     } else {
//         rear++;
//         Q[rear] = x;
//     }
// }
 
// Node* Queue::dequeue() {
//     Node* x = nullptr;
//     if (isEmpty()){
//         cout << "Queue Underflow" << endl;
//     } else {
//         front++;
//         x = Q[front];
//     }
//     return x;
// }
 
 
// class Tree{
// private:
//     Node* root;
// public:
//     Tree() { root = nullptr; }
//     ~Tree();
//     void CreateTree();
//     void Preorder(){ Preorder(root); }  // Passing Private Parameter in Constructor
//     void Preorder(Node* p);
//     void Postorder(){ Postorder(root); }  // Passing Private Parameter in Constructor
//     void Postorder(Node* p);
//     void Inorder(){ Inorder(root); }
//     void Inorder(Node* p);
//     void Levelorder(){ Levelorder(root); }  // Passing Private Parameter in Constructor
//     void Levelorder(Node* p);
//     int Height(){ return Height(root); }  // Passing Private Parameter in Constructor
//     int Height(Node* p);
//     Node* getRoot(){ return root; }
// };
 
// void Tree::CreateTree() {
//     Node* p;
//     Node* t;
//     int x;
 
//     Queue q(25);
//     root = new Node;
//     cout << "Enter root value: " << flush;
//     cin >> x;
//     root->data = x;
//     root->lchild = nullptr;
//     root->rchild = nullptr;
//     q.enqueue(root);
 
//     while (! q.isEmpty()){
//         p = q.dequeue();
 
//         cout << "Enter left child value of " << p->data << ": " << flush;
//         cin >> x;
//         if (x != -1){
//             t = new Node;
//             t->data = x;
//             t->lchild = nullptr;
//             t->rchild = nullptr;
//             p->lchild = t;
//             q.enqueue(t);
//         }
 
//         cout << "Enter right child value of " << p->data << ": " << flush;
//         cin >> x;
//         if (x != -1){
//             t = new Node;
//             t->data = x;
//             t->lchild = nullptr;
//             t->rchild = nullptr;
//             p->rchild = t;
//             q.enqueue(t);
//         }
//     }
// }
 
// void Tree::Preorder(Node *p) {
//     if (p){
//         cout << p->data << ", " << flush;
//         Preorder(p->lchild);
//         Preorder(p->rchild);
//     }
// }
 
// void Tree::Inorder(Node *p) {
//     if (p){
//         Inorder(p->lchild);
//         cout << p->data << ", " << flush;
//         Inorder(p->rchild);
//     }
// }
 
// void Tree::Postorder(Node *p) {
//     if (p){
//         Postorder(p->lchild);
//         Postorder(p->rchild);
//         cout << p->data << ", " << flush;
//     }
// }
 
// void Tree::Levelorder(Node *p) {
//     Queue q(100);
//     cout << root->data << ", " << flush;
//     q.enqueue(root);
 
//     while (! q.isEmpty()){
//         p = q.dequeue();
//         if (p->lchild){
//             cout << p->lchild->data << ", " << flush;
//             q.enqueue(p->lchild);
//         }
//         if (p->rchild){
//             cout << p->rchild->data << ", " << flush;
//             q.enqueue(p->rchild);
//         }
//     }
// }
 
// int Tree::Height(Node *p) {
//     int l = 0;
//     int r = 0;
//     if (p == nullptr){
//         return 0;
//     }
 
//     l = Height(p->lchild);
//     r = Height(p->rchild);
//     if (l > r){
//         return l + 1;
//     } else {
//         return r + 1;
//     }
// }
 
// Tree::~Tree() {
//     // TODO
// }
 
 
// int main(){
 
//     Tree t;
 
//     t.CreateTree();
 
//     cout << "Preorder: " << flush;
//     t.Preorder(t.getRoot());
//     cout << endl;
 
//     cout << "Inorder: " << flush;
//     t.Inorder(t.getRoot());
//     cout << endl;
 
//     cout << "Postorder: " << flush;
//     t.Postorder(t.getRoot());
//     cout << endl;
 
//     cout << "Levelorder: " << flush;
//     t.Levelorder(t.getRoot());
//     cout << endl;
 
//     cout << "Height: " << t.Height(t.getRoot()) << endl;
 
//     cout << "Recursive Passing Private Parameter in Constructor" << endl;
 
//     cout << "Preorder: " << flush;
//     t.Preorder();
//     cout << endl;
 
//     cout << "Inorder: " << flush;
//     t.Inorder();
//     cout << endl;
 
//     cout << "Postorder: " << flush;
//     t.Postorder();
//     cout << endl;
 
//     cout << "Levelorder: " << flush;
//     t.Levelorder();
//     cout << endl;
 
//     cout << "Height: " << t.Height() << endl;
 
// }


                                     /*                  Trees using stl              */

// #include <iostream>
// #include <queue>

// using namespace std;
 
// class Node{
// public:
//     Node* lchild;
//     int data;
//     Node* rchild;
// };
 
// class Tree{
// private:
//     Node* root;
// public:
//     Tree();
//     ~Tree();
//     void CreateTree();
//     void Preorder(Node* p);
//     void Preorder() { Preorder(root); }  // Passing Private Parameter in Constructor
//     void Inorder(Node* p);
//     void Inorder() { Inorder(root); }
//     void Postorder(Node* p);
//     void Postorder() { Postorder(root); }
//     void Levelorder(Node* p);
//     void Levelorder() { Levelorder(root); }
//     int Height(Node* p);
//     int Height() { return Height(root); }
// };
 
// Tree::Tree() {
//     root = nullptr;
// }
 
// Tree::~Tree() {
//     // TODO
// }
 
// void Tree::CreateTree() {
//     Node* p;
//     Node* t;
//     int x;
//     queue<Node*> q;
 
//     root = new Node;
//     cout << "Enter root data: " << flush;
//     cin >> x;
//     root->data = x;
//     root->lchild = nullptr;
//     root->rchild = nullptr;
//     q.emplace(root);
 
//     while (! q.empty()){
//         p = q.front();
//         q.pop();
 
//         cout << "Enter left child data of " << p->data << ": " << flush;
//         cin >> x;
//         if (x != -1){
//             t = new Node;
//             t->data = x;
//             t->lchild = nullptr;
//             t->rchild = nullptr;
//             p->lchild = t;
//             q.emplace(t);
//         }
 
//         cout << "Enter right child data of " << p->data << ": " << flush;
//         cin >> x;
//         if (x != -1){
//             t = new Node;
//             t->data = x;
//             t->lchild = nullptr;
//             t->rchild = nullptr;
//             p->rchild = t;
//             q.emplace(t);
//         }
//     }
// }
 
// void Tree::Preorder(Node *p) {
//     if (p){
//         cout << p->data << ", " << flush;
//         Preorder(p->lchild);
//         Preorder(p->rchild);
//     }
// }
 
// void Tree::Inorder(Node *p) {
//     if (p){
//         Inorder(p->lchild);
//         cout << p->data << ", " << flush;
//         Inorder(p->rchild);
//     }
// }
 
// void Tree::Postorder(Node *p) {
//     if (p){
//         Postorder(p->lchild);
//         Postorder(p->rchild);
//         cout << p->data << ", " << flush;
//     }
// }
 
// void Tree::Levelorder(Node *p) {
//     queue<Node*> q;
//     cout << root->data << ", " << flush;
//     q.emplace(root);
 
//     while (! q.empty()){
//         p = q.front();
//         q.pop();
 
//         if (p->lchild){
//             cout << p->lchild->data << ", " << flush;
//             q.emplace(p->lchild);
//         }
 
//         if (p->rchild){
//             cout << p->rchild->data << ", " << flush;
//             q.emplace(p->rchild);
//         }
//     }
// }
 
// int Tree::Height(Node *p) {
//     int l = 0;
//     int r = 0;
//     if (p == nullptr){
//         return 0;
//     }
 
//     l = Height(p->lchild);
//     r = Height(p->rchild);
 
//     if (l > r){
//         return l + 1;
//     } else {
//         return r + 1;
//     }
// }
 
 
// int main() {
 
//     Tree bt;
 
//     bt.CreateTree();
//     cout << endl;
 
//     cout << "Preorder: " << flush;
//     bt.Preorder();
//     cout << endl;
 
//     cout << "Inorder: " << flush;
//     bt.Inorder();
//     cout << endl;
 
//     cout << "Postorder: " << flush;
//     bt.Postorder();
//     cout << endl;
 
//     cout << "Levelorder: " << flush;
//     bt.Levelorder();
//     cout << endl;
 
//     cout << "Height: " << bt.Height() << endl;
 
//     return 0;
// }


                            /*   Just basic program of stack as we will use further      */
// #include <stdio.h>
// #include <stdlib.h>

// struct stack
// {
//     int size;
//     int top;
//     int *s;
// };

// void create(struct stack *st)
// {
//     int x;
//     printf("Enter the size of stack : ");
//     scanf("%d", &x);
//     st->top=-1;
//     st->s=(int*)malloc(st->size*sizeof(int));
// }

// void push(struct stack *st, int x)
// {
//     if(st->top==st->size-1)
//         printf("Stack is full\n");
//     else
//     {
//         st->top++;
//         st->s[st->top]=x;
//     }
// }

// int pop(struct stack *st)
// {
//     int x=-1;
//     if(st->top==-1)
//         printf("Stack is empty \n");
//     else
//     {
//         x=st->s[st->top--];
//     }
//     return x;
// }

// int isEmpty(struct stack st)
// {
//     if(st.top==-1)
//     return 1;
//     return 0;
// }

// int isFull(struct stack st)
// {
//     return st.top=st.size-1;
// }

// void display(struct stack st)
// {
//     int i;
//     for(i=st.top; i>=0; i--)
//     {
//         printf("%d  ", st.s[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     struct stack st;
//     create(&st);
//     push(&st, 60);
//     push(&st, 50);
//     push(&st, 30);
//     display(st);
//     printf("\n");
//     pop(&st);
//     display(st);
// }

                                    /*  iterative preorder, inorder, postorder which uses stacks  */


// #include <stdio.h>
// #include <stdlib.h>
// #include <queue>
// #include <stack>

// struct node 
// {
//     struct node *lchild;
//     int data;
//     struct node *rchild;
// };


// struct queue
// {
//     int size;
//     int front;
//     int rear;
//     node **Q;
// };

// struct stack
// {
//     int size;
//     int top;
//     struct node **s;                            //changed here pointer to pointer to s
// };

// void screate(struct stack *st, int size)                  //pointer to pointer to stack and stack create function
// {
//     st->size=size;
//     st->top=-1;
//     st->s=(struct node**)malloc(st->size*sizeof(struct node*));         //changed here
// }

// void push(struct stack *st, struct node *x)                         // struct node *x
// {
//     if(st->top==st->size-1)
//         printf("Stack is full\n");
//     else
//     {
//         st->top++;
//         st->s[st->top]=x;
//     }
// }

// struct node *pop(struct stack *st)                  //changed here
// {
//     struct node * x=NULL;                           //changed here
//     if(st->top==-1)
//         printf("Stack is empty \n");
//     else
//     {
//         x=st->s[st->top--];
//     }
//     return x;
// }

// int isEmpty(struct stack st)
// {
//     if(st.top==-1)
//     return 1;
//     return 0;
// }

// int isFull(struct stack st)
// {
//     return st.top=st.size-1;
// }



// void qcreate(struct queue *q, int size)                       // queue create function
// {
//     q->size=size;
//     q->rear=q->front=0;
//     q->Q=(node**)malloc(q->size*sizeof(node*));
//     printf("\n");
// }

// void enqueue(struct queue *q, node *x)
// {
//     if((q->rear+1)%q->size==q->front)
//         printf("\n queue is full");

//     else
//     {
//        q->rear = (q->rear+1)%q->size;
//        q->Q[q->rear]=x;
//     }
// }

// node *dequeue(struct queue *q)
// {
//     node *x=NULL;
//     if(q->front==q->rear)
//         printf("queue is empty\n");
//     else
//     {
//         q->front = q->front+1;
//         x=q->Q[q->front];
        
//     }
//     return x;
//     printf("\n");
// }

// int isEmpty(struct queue q)
// {
//     return q.front==q.rear;
// }


// struct node *root=NULL;

// void Tcreate()
// {
//     struct node *t, *p;
//     int x;
//     struct queue q;
//     qcreate(&q,100);

//     printf("Enter the root node : ");
//     scanf("%d", &x);

//     root=(struct node*)malloc(sizeof(struct node));
//     root->data=x;
//     root->lchild=root->rchild=NULL;
//     enqueue(&q, root);

//     while(!isEmpty(q))
//     {
//         p=dequeue(&q);
//         printf("Enter the lchild of %d  ", p->data);
//         scanf("%d", &x);
//         if(x!=-1)
//         {
//             t=(struct node*)malloc(sizeof(struct node));
//             t->data=x;
//             t->lchild=t->rchild=NULL;
//             p->lchild=t;
//             enqueue(&q,t);
//         }

//         printf("\n");

//         printf("Enter the rchild of %d  ", p->data);
//         scanf("%d", &x);
//         if(x!=-1)
//         {
//             t=(struct node*)malloc(sizeof(struct node));
//             t->data=x;
//             t->lchild=t->rchild=NULL;
//             p->rchild=t;
//             enqueue(&q,t);
//         }

//     }

// }


// void Ipreorder(struct node *p)                  // Iterative pre order
// {
//     struct stack st;
//     screate(&st,20);

//     while(p || !isEmpty(st))
//     {
//         if(p)
//         {
//             printf("%d  ", p->data);
//             push(&st, p);
//             p=p->lchild;
//         }
//         else
//         {
//             p=pop(&st);
//             p=p->rchild;
//         }
//     }
// }

// void IInorder(struct node *p)              // Iterative in order
// {
//     struct stack st;
//     screate(&st, 20);

//     while(p || !isEmpty(st))
//     {
//         if(p)
//         {
           
//             push(&st, p);
//             p=p->lchild;
//         }
//         else
//         {
//             p=pop(&st);
//              printf("%d  ", p->data);
//             p=p->rchild;
//         }
//     }
// }

// void levelorder(struct node *p)
// {
//     struct queue q;
//     qcreate(&q, 100);

//     printf("%d  ", root->data);
//     enqueue(&q, root);

//     while(!isEmpty(q))
//     {
//         root=dequeue(&q);
//         if(root->lchild)
//         {
//             printf("%d  ", root->lchild->data);
//             enqueue(&q, root->lchild);
//         }
//         if(root->rchild)
//         {
//             printf("%d  ", root->rchild->data);
//             enqueue(&q, root->rchild);
//         }
//     }

// }

// int main()
// {
//    // struct stack st;
//    Tcreate();

//    printf("preorder is given below \n");
//    Ipreorder(root);
//    printf("\n");
//     printf("Inorder is given below \n");
//    IInorder(root);
//    printf("\n");
//    printf("levelorder is given below \n");
//    levelorder(root);

//    return 0;
// }