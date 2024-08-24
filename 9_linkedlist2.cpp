                                    /* Circular Linked List  */

                                    /* code for displaying circular linked list */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*head;

// void create(int A[], int n)
// {
//     int i;
//     struct node *last, *t;
//     head=(struct node*)malloc(sizeof(struct node));
//     head->data = A[0];
//     head->next=head;
//     last=head;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=A[i];
//         t->next=last->next;
//         last->next=t;
//         last=t;
//     }  
// }

// void display(struct node *p)
// {
//     do{
//         printf("%d ", p->data);
//         p=p->next;

//     }while(p!=head);
// }

// void Rdisplay(struct node *h)
// {
//     static int flag=0;
//     if(h!=head || flag==0)
//     {
//         flag=1;
//         printf("%d ", h->data);
//         Rdisplay(h->next);
//     }
//     flag=0;
// }


// int main()
// {
//     int A[]={32, 43, 54, 65, 87};
//     create(A, 5);
//     Rdisplay(head);
//     return 0;
// }

                                    /* Inserting in a circular linked list */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*head;

// void create(int A[], int n)
// {
//     int i;
//     struct node *last, *t;
//     head=(struct node*)malloc(sizeof(struct node));
//     head->data = A[0];
//     head->next=head;
//     last=head;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=A[i];
//         t->next=last->next;
//         last->next=t;
//         last=t;
//     }  
// }

// void display(struct node *p)
// {
//     do{
//         printf("%d ", p->data);
//         p=p->next;

//     }while(p!=head);
// }

// int count(struct node *p)
// {
//     int count =0;
//     do
//     {
//         p=p->next;
//         count++;
//     }while(p!=head);
//     return count;
// }

// void insert(int pos, int x)
// {
//     struct node *p, *t;
//     int i;

//      if(pos<0 || pos<count(p))
//      return;
    
//     if(pos==0)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=x;

//         if(head==NULL)
//         {
//             head=t;
//             head->next=head;
//         }
//         else
//         {
//                 p=head;
//                 while(p->next!=head)
//                 {
//                     p=p->next;
//                 }
//                 p->next=t;
//                 t->next=head;
//                 head=t;
//         }
//     }
//     else
//     {
//         p=head;
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=x;
//         for(i=1; i<pos-1; i++)
//         {
//             p=p->next;
//         }
//         t->next=p->next;
//         p->next=t;
//     }
// }



// int main()
// {
//     int A[]={32, 43, 54, 65, 87};
//     create(A, 5);
//     insert(2, 98);
//     display(head);
//     return 0;
// }

                                    /* Deleting in a circular linked list  */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*head;

// void create(int A[], int n)
// {
//     int i;
//     struct node *last, *t;
//     head=(struct node*)malloc(sizeof(struct node));
//     head->data = A[0];
//     head->next=head;
//     last=head;


//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=A[i];
//         t->next=last->next;
//         last->next=t;
//         last=t;
//     }  
// }


// void display(struct node *p)
// {
//     do{
//         printf("%d ", p->data);
//         p=p->next;

//     }while(p!=head);
// }


// int count(struct node *p)
// {
//     int count =0;
//     do
//     {
//         count++;
//         p=p->next;
    
//     }while(p!=head);
//     return count;
// }


// int Delete(struct node *p, int pos)
// {
//     struct node *q;
//     int i, x;

//     if(pos<0 || pos>count(p))
//     return -1;

//     if(pos==1)
//     {
//         p=head;
//         while(p->next!=head)
//         p=p->next;
//         x=head->data;
        
//             if(p==head)
//             {
//                 free(head);
//                 head=NULL;
//             }
//             else
//             {
//                 p->next=head->next;
//                 free(head);
//                 head=p->next;
//             }
//     }
//     else
//     {
//         p=head;
//         for(i=0; i<pos-2; i++)
//         {
//             p=p->next;
//         }
//         q=p->next;
//         p->next=q->next;
//         x=q->data;
        
//         free(q);
        
//     }
//     return x;

// }

// void insert(int pos, int x)
// {
//     struct node *p, *t;
//     int i;

//    //  if(pos<0 || pos<count(p))
//      // return;
    
//     if(pos==0)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=x;

//         if(head==NULL)
//         {
//             head=t;
//             head->next=head;
//         }
//         else
//         {
//                 p=head;
//                 while(p->next!=head)
//                 {
//                     p=p->next;
//                 }
//                 p->next=t;
//                 t->next=head;
//                 head=t;
//         }
//     }
//     else
//     {
//         p=head;
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=x;
//         for(i=1; i<pos-1; i++)
//         {
//             p=p->next;
//         }
//         t->next=p->next;
//         p->next=t;
//     }
// }


// int main()
// {
//     int A[]={32, 43, 54, 65, 87};
//     create(A, 5);
//     insert(2, 98);
//    Delete(head, 4);
//     display(head);
//     return 0;
// }


                /* Code for doubly linked list  */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     struct node *prev;
//     int data;
//     struct node *next;
// }*first=NULL;

// void create(int A[], int n)
// {
//     struct node *t, *last;
//     int i;

//     first=(struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->prev=first->next=NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=A[i];
//         t->next=last->next;
//         t->prev=last;
//         last->next=t;
//         last=t;
//     }

// }

// void display(struct node*p)
// {
//     while(p)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int count(struct node *p)
// {
//     int count =0;

//     while(p)
//     {
//         count++;
//         p=p->next;
//     }
//     return count;
// }

// int main()
// {
//     int A[]={32, 54, 65, 76, 86};
//     create(A, 5);
//     printf("\n the length of linked list is %d", count(first));
//     printf("\n");
//     display(first);
// }

                    /* inserting in a doubly linked list */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     struct node *prev;
//     int data;
//     struct node *next;
// }*first = NULL;

// void create(int A[], int n)
// {
//     struct node *t, *last;
//     int i;

//     first=(struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->prev=first->next=NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=A[i];
//         t->next=last->next;
//         t->prev=last;
//         last->next=t;
//         last=t;
//     }
// }

// void display(struct node *p)
// {
//     while(p)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int count(struct node *p)
// {
//     int count =0;

//     while(p)
//     {
//         count ++;
//         p=p->next;
//     }
//     return count;
// }

// void insert(struct node *p, int pos, int x)
// {
//     struct node *t;
//     int i;

//     if(pos<0 || pos>count(p))
//         return ;

//     if(pos==1)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=x;
//         t->prev=NULL;
//         t->next=first;
//         first->prev=t;
//         first=t;
//     }
//     else
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=x;

//         for(i=1; i<pos-1; i++)
//         {
//             p=p->next;
//         }
//         t->prev=p;
//         t->next=p->next;
//         if(p->next)
//         p->next->prev=t;
//         p->next=t;
        
//     }
// }

// int main()
// {
//     int A[]={43, 65, 76, 63, 87};
//     create(A, 5);
//     display(first);
//     printf("\n\n");
//     insert(first, 3, 54);
//     insert(first, 1, 54);
//     display(first);
// }

                /* Deleting from a doubly linked list  */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     struct node *prev;
//     int data;
//     struct node *next;
// }*first = NULL;

// void create(int A[], int n)
// {
//     struct node *t, *last;
//     int i;

//     first=(struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->prev=first->next=NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=A[i];
//         t->next=last->next;
//         t->prev=last;
//         last->next=t;
//         last=t;
//     }
// }

// void display(struct node *p)
// {
//     while(p)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int count(struct node *p)
// {
//     int count =0;

//     while(p)
//     {
//         count ++;
//         p=p->next;
//     }
//     return count;
// }

// int Delete(struct node *p, int pos)
// {
//     int x=-1, i;

//     if(pos<1 || pos>count(p))
//     return -1;

//     if(pos==1)
//     {
//         first=first->next;
//         if(first)
//         first->prev=NULL;
//         x=p->data;
//         free(p);
//     }
//     else
//     {
//         for(i=0; i<pos-1; i++)
//         {
//             p=p->next;
//         }

//         p->prev->next=p->next;
//         if(p->next)
//         p->next->prev=p->prev;

//         x=p->data;
//         free(p);
//     }
//     return x;

// }

    

// int main()
// {
//     int A[]={43, 65, 76, 63, 87};
//     create(A, 5);
//     display(first);
//     printf("\n\n");
//     Delete(first, 2);
//     display(first);
//     printf("\nThe deleted element is %d", Delete(first, 2));
    
// }

                                        /*  code for reversing a linked list*/

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     struct node *prev;
//     int data;
//     struct node *next;
// }*first = NULL;

// void create(int A[], int n)
// {
//     struct node *t, *last;
//     int i;

//     first=(struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->prev=first->next=NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=A[i];
//         t->next=last->next;
//         t->prev=last;
//         last->next=t;
//         last=t;
//     }
// }

// void display(struct node *p)
// {
//     while(p)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int count(struct node *p)
// {
//     int count =0;

//     while(p)
//     {
//         count ++;
//         p=p->next;
//     }
//     return count;
// }

// void Reverse(struct node *p)
// {
//     struct node *temp;

//     p=first;
//     while(p)
//     {
//     temp=p->next;
//     p->next=p->prev;
//     p->prev=temp;
//     p=p->prev;
//     if(p!=NULL && p->next==NULL)
//     first=p;
//     }
    
// }

    

// int main()
// {
//     int A[]={43, 65, 76, 63, 87};
//     create(A, 5);
//     display(first);
//     printf("\n\n");
//     Reverse(first);
//     display(first);
    
// }

                            /* finding middle element of a linked list */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first=NULL;

// void create(int A[], int n)
// {
//     struct node *t, *last;
//     int i;

//     first=(struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->next=NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data=A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }
// }

// int middle(struct node *p)
// {
//     struct node *q;
    
//     p=q=first;
//     while(q!=NULL)
//     {
//         q=q->next;
//         if(q)q=q->next;
//         if(q)p=p->next;
//     }
//     return p->data;

// }

// void display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int main()
// {
//     int A[]= {34, 54, 65, 23, 45};
//     create(A, 5);
//     display(first);
//     printf("\nThe middle element is %d ", middle(first));
// }