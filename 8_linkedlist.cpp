                                                    /* Code of displaying linked list */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first = NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct node *t, *last;
//     first = (struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->next=NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
//          t=(struct node*)malloc(sizeof(struct node));
//          t->data=A[i];
//          t->next=NULL;
//          last->next=t;
//          last=t;
//     }

// }

// void display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ",p->data);
//         p=p->next;
//     }
// }

// void Rdisplay1(struct node *p)
// {
//     if(p!=NULL)
//     {
//         printf("%d ", p->data);
//         Rdisplay1(p->next);
//     }
// }

// void Rdisplay2(struct node *p)
// {
//     if(p!=NULL)
//     {
//         Rdisplay2(p->next);
//         printf("%d ", p->data);
//     }
// }

// int main()
// {
//     struct node *temp;
//     int A[] = {2,3,4,5,6,7,8};
//     create(A,7);
//     display(first);
//     printf("\n");
//     Rdisplay1(first);
//     printf("\n");
//     Rdisplay2(first);
//     return 0;
// }

                                                    /* counting and sum of linked list  */


// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first=NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct node *t, *last;
//     first = (struct node*)malloc(sizeof(struct node));
//     first->data = A[0];
//     first->next = NULL;
//     last = first;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(n*sizeof(struct node));
//         t->data=A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }

// }

// int display(struct node *p)
// {
//     int c=0, sum=0;
//     while(p!=NULL)
//     {
        
//         printf("%d ", p->data);
//         sum=sum + p->data;
//         p=p->next;
//         c++;
//     }
//     printf("\n Total number is %d", c);                 /* its suggest to write separate function of count and sum or any function */
//     printf("\n The sum of linked list is %d", sum);
// }

// int count(struct node *p)           /* by using function*/
// {
//     int l=0;
//     while(p)
//     {
//         l++;
//         p=p->next;
//     }
//     return l;
// }

// int Rcount(struct node *p)          /* by Using recursive function*/
// {
//     if(p!=NULL)
//         return Rcount(p->next) + 1;
//     else
//         return 0;

// }

// int Rsum(struct node *p)        /* Recursive sum */
// {
//     if(p)
//         return Rsum(p->next) + p->data;
//     else
//         return 0;
// }

// int main()
// {
//     struct node *temp;
//     printf("The mumbers are : ");
//     int A[] = {2, 4, 3, 2, 6 ,7 ,8, 4};
//     create(A, 8);
//     printf("\n");
//     display(first);
//     printf("\n");
//     printf("Length of linked list is %d\n", count(first));
//     printf("Length of linked list is %d\n", Rcount(first));
//     printf("\n The sum of linked list is %d\n", Rsum(first));
//     return 0;

// }

                                                   /* maximum number in linked list  */
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first=NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct node *t, *last;
//     first=(struct node*)malloc(sizeof(struct node));
//     first->data = A[0];
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

// void display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int max(struct node *p)
// {
//     int max = -32768;
//     while(p)
//     {
//         if(p->data>max)
//             max=p->data;
//         p=p->next;
//     }
//     return max;

// }

// int RMax(struct node *p)       /* using recursive function */
// {
//  int x=0;
//     if(p==NULL)
//     return -32768;
//     else
//     x=RMax(p->next);
//         if(x > p->data)
//         return x;
//         else
//         return p->data;
// }

// int main()
// {
//     struct node *temp;
//     int A[]={3, 32, 43, 12, 4, 41, 7, 29};
//     create(A, 8);
//     display(first);
//     printf("\nThe maximum element is %d\n", max(first));
//     printf("\nThe maximum element is %d", RMax(first));
//     return 0;
// }

                                                      /*  Search and Linear Search  */
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first=NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct node *t, *last;
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

// void display(struct node *p)
// {
//     while(p)
//     {
//         if(p!=NULL)
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// /* Normal searching */
// struct node *search(struct node *p, int key)        
// {
//     while(p!=NULL)
//     {
//         if(p->data==key)
//             return p;
//         p=p->next;
//     }
// }

// struct node *Lsearch(struct node *p, int key) /* Bringing key element at first. here we will use one more pointer previous to key element to keep track of elements */
// {
//     struct node *q;
//     while(p!=NULL)
//     {
//         if(key==p->data)
//         {
//         q->next=p->next;
//         p->next=first;
//         first=p;
//         return p;
//         }
//         q=p;                /* if key is not equal to p->data, Moving q by shifting p i.e p will shift by p=p->next and p will be assigned to q */
//         p=p->next;
//     }
//     return NULL;
// }

// struct node *Rsearch(struct node*p, int key) /* using recursive search */
// {
//     if(p==NULL)
//      return NULL;
//     if(p->data==key)
//     return p;
//     return Rsearch(p->next, key);
        
// }

// int main()
// {
//     struct node *temp1, *temp2, *temp3;
//     int A[]={3, 43, 12, 6, 41, 24, 1, 85};
//     create(A,8);
//     display(first);

//     temp1=search(first,43);
//     if(temp1)
//     printf("\nKey is found");
//     else
//     printf("\nkey is not found");

//     temp2=Rsearch(first, 85);
//     if(temp2)
//     printf("\nKey is found using recursion ");
//     else
//     printf("\nKey not found using recursion");

//     temp3=Lsearch(first, 24);
//     if(temp3)
//     printf("\n key is found by linearsearch by putting element at first \n");
//     else
//     printf("\n key is not found by linearsearch");
//     display(first);     /* the element 24 will now come at first */

//     return 0;

// }

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first = NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct node *t, *last;
//     first = (struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->next= NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
        
//         t = (struct node*)malloc(sizeof(struct node));
//         t->data=A[i];
//         t->next = NULL;
//         last->next=t;
//         last=t;
//     }
// }

// struct node *search(struct node *p, int key)
// {
//     while(p!=NULL)
//     {
//     if(key==p->data)
//         return p;
//         p=p->next;
        
//     }
// }

// struct node *Lsearch(struct node *p, int key)
// {
//     struct node *q;
//     while(p!=NULL)
//     {
//         if(key==p->data)
//         {
//         q->next=p->next;
//         p->next = first;
//         first=p;
//         return p;
//         }
//     q=p;
//     p=p->next;
//     }
// }

// int display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int main()
// {
//     struct node *temp1, *temp2;
//     int A[]={3, 5, 6, 24, 8};
//     create(A,5);
//     display(first);

//     temp1=search(first,41);
//     if(temp1)
//     printf("\nKey is found");
//     else
//     printf("\nkey not found");

//         temp2=Lsearch(first, 24);
//     if(temp2)
//     printf("\n key is found by linearsearch by putting element at first \n");
//     else
//     printf("\n key is not found by linearsearch");
//     display(first);     /* the element 24 will now come at first */


//     // temp2=Lsearch(first,6);
//     // if(temp2)
//     // printf("\nkey element is found by Lsearch \n");
//     // else
//     // printf("it didnt found");
//     //  display(first);

//     return 0;
// }

                                    /* for inserting  a number at any position in linked list */
                                    /* Also inserting  a number in sorted linked list */
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first=NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct node *t, *last;
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

// int display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int count(struct node *p)
// {
//     int count =0;
//     while(p!=NULL)
//     {
//         p=p->next;
//         count++;
//     }
//     return count;
// }

// void insert(struct node *p, int pos, int x)
// {
//     if(pos<0 || pos>count(p))
//     return;

//     struct node *t;
//     int i;
//     t=(struct node*)malloc(sizeof(struct node));
//         t->data=x;
//     if(pos==0)
//     {
//         t->next=first;
//         first=t;
//     }
//     else
//     {
//         p=first;
//         for(i=0; i<pos-1 && p; i++)
//         p=p->next;

//         if(p)
//         {
//             t->next=p->next;
//             p->next=t;
//         }
//     }
// }

// void sortedinsert(struct node *p, int x)
// {
//     struct node *t, *q;
//     t=(struct node*)malloc(sizeof(struct node));
//     t->data=x;
//     t->next=NULL;
    
//     if(first==NULL)
//     {
//         first->data=x;
//         first=t;
//     }
//     while(p && p->data<x)
//     {
//         q=p;
//         p=p->next;
//     }
//     if(p==first)
//     {
//         t->next=first;
//         first=t;
//     }
//     else
//     {
//         t->next=q->next;
//         q->next=t;
//     }
// }

// int main()
// {
//     int A[]= {32, 42, 65, 75, 92};
//     create(A, 5);
//     // display(first);
//     // // count(first);
//     // // printf("\nThe length of linkedlist is %d\n", count(first));
//     // insert(first,0,20);
//     //  insert(first,1,10);
//     //   insert(first,2,30);
//     //       display(first);
//           sortedinsert(first, 100);
          
//           display(first);
//     return 0;
// }

                /* Deleting in a linked list */
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first=NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct node *t, *last;
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

// int display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int count(struct node *p)
// {
//     int count =0;
//     while(p!=NULL)
//     {
//         p=p->next;
//         count++;
//     }
//     return count;
// }

// int Delete(struct node *p, int pos)
// {
//     struct node *q;

//     int i, x=-1;
//     if(pos<1 || pos>count(p))
//     return -1;

//     if(pos==1)
//     {
//     p=first;
//     x=first->data;
//     first=first->next;
//     free(p);
//     return x;
//     }

//     else
//     {
//     p=first;
//     q=NULL;

//     for(i=0; i<pos-1; i++)
//     {
//         q=p;
//         p=p->next;
//     }
//         q->next=p->next;
//         x=p->data;
//         free(p);
//         return x;
//      }


    
// }

// int main()
// {
//     int A[]= {32, 42, 65, 75, 92};
//     create(A, 5);
//     Delete(first, 2);
    
//     display(first);
//     return 0;
// }

                            /* To check linked list is sorted or not */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first=NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct node *last, *t;
//     first=(struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->next=NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data = A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }

// }

// void display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int sorted(struct node *p)
// {
//     struct node *q;
//     int x=-3212;
//     p=first;
//     while(p!=NULL)
//     {
//         if(p->data<x)
//         return 0;
//         else
//         {
//         x=p->data;
//         p=p->next;
        
//         }
        
//     }
//     return 1;
// }

// int main()
// {
//     int A[]= {43, 52, 62, 76, 84};
//     create(A, 5);
//     printf("%d\n", sorted(first));
//     display(first);
// }

                                             /* To finding duplicate in a linked list */
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first=NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct node *last, *t;
//     first=(struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->next=NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data = A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }

// }

// void display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// void duplicate(struct node *p)
// {
//     int i;
//     struct node *q;
//     p=first;
//     q=first->next;

//     while(q!=NULL)
//     {
//         if(p->data != q->data)
//         {
//             p=q;
//             q=q->next;
//         }
//         else
//         {
//             p->next=q->next;
//             free(q);
//             q=p->next;
//         }
//     }
// }


// int main()
// {
//     int A[]= {43, 52, 52, 76, 84, 84, 84, 92};
//     create(A, 8);
//     duplicate(first);
//     display(first);
// }

                                /* for reversing linked list - 2 ways - either by reversing elements or reversing linked list */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first=NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct node *last, *t;
//     first=(struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->next=NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data = A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }

// }

// void display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int count(struct node *p)
// {
//     int count =0;
//     while(p!=NULL)
//     {
//         p=p->next;
//         count++;
//     }
//     return count;
// }

// void reverse1(struct node *p)
// {
//     struct node *q=p;
//     int *A, i=0;
//     A = (int*)malloc(sizeof(int)*count(p));
//     while(q!=NULL)
//     {
//         A[i]=q->data;
//         q=q->next;
//         i++;
//     }
//     q=p;
//     i--;

//     while(q!=NULL)
//     {
//         q->data=A[i];
//         q=q->next;
//         i--;
//     }


// } 

// void reverse2(struct node *p)
// {
//     struct node *q;
//     struct node *r;

//     p=first;
//     q=NULL;
//     r=NULL;

//     while(p!=NULL)
//     {
//         r=q;
//         q=p;
//         p=p->next;
//         q->next=r;
//     }
//     first=q;
// }

// void reverse3(struct node *q, struct node *p)
// {
//     if(p!=NULL)
//     {
//         reverse3(p, p->next);
//         p->next=q;
//     }
//     else
//     {
//         first=q;
//     }
// }



// int main()
// {
//     int A[]= {43, 52, 52, 76, 84, 84, 84, 92};
//     create(A, 8);
//    // reverse1(first);
//     reverse3(NULL, first);
//     display(first);
// }

                                    /* merging(concating) two linked list  & merging two linked list in sorted way */
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first=NULL, *second=NULL, *third=NULL;

// void create1(int A[], int n)
// {
//     int i;
//     struct node *last, *t;
//     first=(struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->next=NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data = A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }

// }

// void create2(int A[], int n)
// {
//     int i;
//     struct node *last, *t;
//     second=(struct node*)malloc(sizeof(struct node));
//     second->data=A[0];
//     second->next=NULL;
//     last=second;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data = A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }

// }

// void display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// void concat(struct node *p, struct node *q)
// {
//     third=p;

//     while(p->next != NULL)
//     {
//         p=p->next;
//     }
//     p->next=q;
// }

// void merge(struct node *p, struct node *q)
// {
//     struct node *last;
//     if(p->data < q->data)
//     {
//           third=last=p;
//           p=p->next;
//           third->next=NULL;
//     }
//     else
//     {
//           third=last=q;
//           q=q->next;
//           third->next=NULL;
//     }

//     while(p!=NULL && q!=NULL)
//     {
//         if(p->data < q->data)
//         {
//             last->next=p;
//             last=p;
//             p=p->next;
//             last->next=NULL;

//         }
//         else
//         {
//             last->next=q;
//             last=q;
//             q=q->next;
//             last->next=NULL;

//         }
//     }
//     if(first!=NULL)
//     {
//         last->next = p;
//     }
//     else
//         last->next=q;
// }


// int main()
// {
//     int A[]= {43, 52, 76, 84, 92};
//     int B[]= {23, 42, 54, 87, 90};
//     create1(A, 5);
//     display(first);
//     printf("\n\n");
//     create2(B, 5);
//     display(second);
//     printf("\n\n");
//     // concat(first, second);
//     // display(third);
//     printf("\n\n");
//     merge(first, second);
//     display(third);

// }


                            /* To check loops in linked list */
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*first=NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct node *last, *t;
//     first=(struct node*)malloc(sizeof(struct node));
//     first->data=A[0];
//     first->next=NULL;
//     last=first;

//     for(i=1; i<n; i++)
//     {
//         t=(struct node*)malloc(sizeof(struct node));
//         t->data = A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }

// }

// void display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }

// int isLoop(struct node *f)
// {
//     struct node *p;
//     struct node *q;

//     p=q=f;
//     do{
//         p=p->next;
//         q=q->next;
//         q=q!=NULL ? q->next : NULL;
//     }while(p && q && p!=q);

//     if(p==q)
//     return 1;
//     else
//     return 0;

// }


// int main()
// {
//     struct node *t1, *t2;
//     int A[]= {43, 52, 76, 84, 92};
//     create(A, 8);
//     t1 = first->next->next;
//     t2= first->next->next->next->next;
//     t2->next=t1;
    
//     printf("%d \n", isLoop(first));
//     return 0;
// }

                /* student work - write a c++ class for linked list   */