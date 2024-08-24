
                                /*      Creating and display queue   */

// #include <stdio.h>
// #include <stdlib.h>

// struct queue
// {
//     int size;
//     int front;
//     int rear;
//     int *Q;
// };

// void create(struct queue *q)
// {
//     printf("Enter the size of queue : ");
//     scanf("%d", &q->size);
//     q->front=q->rear=-1;
//     q->Q=(int*)malloc(q->size*sizeof(int));
// }

// void enqueue(struct queue *q, int x)
// {
//         if(q->rear==q->size-1)
//             printf("\n queue is full ");
//         else
//         {
//             q->rear++;
//             q->Q[q->rear]=x;
//         }
// }

// int dequeue(struct queue *q)
// {
//     int x= -1;
//     if(q->front==q->rear)
//         printf("queue is empty\n");
//     else
//     {
//         q->front++;
//         x=q->Q[q->front];
//     }
//     return x;
//     printf("\n");


// }

// void display(struct queue q)
// {
//     int i;
//     for(i=q.front+1; i<=q.rear; i++)
//     {
//         printf("%d  ", q.Q[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     struct queue q;
//     create(&q);
//     enqueue(&q, 10);
//     enqueue(&q, 20);
//     enqueue(&q, 30);

//     display(q);

//     printf("\nthe deleted element is %d", dequeue(&q));
// }

                    /*  creating and displaying queue using c++  */

// #include <iostream>
// using namespace std;

// class queue
// {
//     private :

//     int size;
//     int front;
//     int rear;
//     int *Q;

//     public :
//     queue(){front=rear=-1; size=10; Q=new int[size];}
//     queue(int size){front = rear = -1; this->size=size; Q=new int[this->size];}
//     void enqueue(int x);
//     int dequeue();
//     void display();
// };

// void queue::enqueue(int x)
// {
//     if(rear==size-1)
//         cout<<"queue is full\n";
//     else
//     {
//         rear++;
//         Q[rear]=x;
//     }
// }

// int queue::dequeue()
// {
//     int x=-1;
//     if(front==rear)
//         cout<<"queue is empty\n ";
//     else
//     {
//         front++;
//         x=Q[front];
//     }
//     return x;
// }

// void queue::display()
// {
//     int i;
//     for(i=front+1; i<=rear; i++)
//     {
//         // printf("%d  ", Q[i]);
//         cout<<Q[i]<<"  ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     queue q(5);

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);

//     q.display();
//     return 0;
// }


                                    /*       Circular queue       */
// #include <stdio.h>
// #include <stdlib.h>

// struct queue
// {
//     int size;
//     int front;
//     int rear;
//     int *Q;
// };

// void create(struct queue *q)
// {
//     printf("Enter the size of Queue : ");
//     scanf("%d", &q->size);
//     q->rear=q->front=0;
//     q->Q=(int*)malloc(q->size*sizeof(int));
// }

// void enqueue(struct queue *q, int x)
// {
//     if((q->rear+1)%q->size==q->front)
//         printf("\n queue is full");

//     else
//     {
//        q->rear = (q->rear+1)%q->size;
//        q->Q[q->rear]=x;
//     }
// }

// int dequeue(struct queue *q)
// {
//     int x=-1;
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

// void display(struct queue q)
// {
//     int i = q.front+1;

//     do{
//         printf("%d  ", q.Q[i]);
//         i=(i+1)%q.size;
//     }while(i!=(q.rear+1)%q.size);

//     printf("\n");
// }

// int main()
// {
//     struct queue q;
//     create(&q);
//     enqueue(&q, 10);
//     enqueue(&q, 20);
//     enqueue(&q, 30);
//     enqueue(&q, 50);
//     enqueue(&q, 60);


//     display(q);

//     printf("\nthe deleted element is %d", dequeue(&q));
// }

                                                  /*      Queue using linked list      */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*front =NULL, *rear=NULL;

// void enqueue(int x)
// {
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     if(p==NULL)
//         printf("queue is full\n");
//     else
//     {
//         if(front==NULL)
//         {
//             p->data=x;
//             p->next=NULL;
//             front=rear=p;
//         }
//         else
//         {
//             p->data=x;
//             p->next=NULL;
//             rear->next=p;
//             rear=p;
//         }

//     }
// }

// int dequeue()
// {
//     struct node *q;
//     int x= -1;
//     if(front==NULL)
//     printf("queue is empty\n");
//     else
//     {
//         q=front;
//         front=front->next;
//         x=q->data;
//         free(q);
//     }
//     return x;
//     printf("\n");
    
// }

// void display()
// {
//     struct node *p;
//     p=front;
//     while(p!=NULL)
//     {
//         printf("%d  ", p->data);
//         p=p->next;
//     }
//     printf("\n");
// }

// int main()
// {
//     enqueue(50);
//     enqueue(30);
//     enqueue(20);
//     enqueue(80);
//     enqueue(54);
//     enqueue(65);
//     display();
//     printf("\n the deleted element is %d\n", dequeue());
//     display();

// }