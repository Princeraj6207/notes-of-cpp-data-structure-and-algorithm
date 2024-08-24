
/* Sparse matrix = if many terms is zero then how to display it. */

/* code of creating and displaying sparse matrix */
// #include<stdio.h>
// #include<stdlib.h>

// struct element
// {
//     int i;
//     int j;
//     int x;
// };

// struct sparse
// {
//     int m;
//     int n;
//     int num;
//     struct element *ele;
// };

// void create(struct sparse *s)
// {
//     int i;
//     printf("Enter the dimensions of matrix : ");
//     scanf("%d%d", &s->m, &s->n);
//     printf("Enter the number of non-zero elements : ");
//     scanf("%d", &s->num);
//     s->ele=(struct element *)malloc(s->num*sizeof(struct element));
//     printf("Enter non-zero Elements : ");
//     for(i=0; i<s->num; i++)
//     scanf("%d%d%d", &s->ele[i].i, &s->ele[i].j, &s->ele[i].x);
// }

// void display(struct sparse s)
// {
//     int i, j, k=0;
//     for(i=0; i<s.m; i++)
//     {
//         for(j=0; j<s.n; j++)
//         {
//             if(i==s.ele[k].i && j==s.ele[k].j)
//             printf("%d ", s.ele[k++].x);
//             else
//             printf("0 ");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     struct sparse s;
//     create(&s);
//     display(s);
//     return 0;
// }


/* code to add two matrix */
// #include <stdio.h>
// #include<stdlib.h>
// struct Element
// {
//  int i;
//  int j;
//  int x;
// };
// struct Sparse
// {
//  int m;
//  int n;
//  int num;
//  struct Element *ele;
// };
// void create(struct Sparse *s)
// {
//  int i;

//  printf("Eneter Dimensions");
//  scanf("%d%d",&s->m,&s->n);
//  printf("Number of non-zero");
//  scanf("%d",&s->num);

//  s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));
//  printf("Eneter non-zero Elements");
//  for(i=0;i<s->num;i++)
//  scanf("%d%d%d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);

// }
// void display(struct Sparse s)
// {
//  int i,j,k=0;

//  for(i=0;i<s.m;i++)
//  {
//  for(j=0;j<s.n;j++)
//  {
//  if(i==s.ele[k].i && j==s.ele[k].j)
//  printf("%d ",s.ele[k++].x);
//  else
//  printf("0 ");
//  }
//  printf("\n");
//  }
// }
// struct Sparse * add(struct Sparse *s1,struct Sparse *s2)
// {
//  struct Sparse *sum;
//  int i,j,k;
//  i=j=k=0;

//  if(s1->n != s2->n && s1->m != s2->m)
//  return NULL;
//  sum=(struct Sparse *)malloc(sizeof(struct Sparse));
// sum->ele=(struct Element *)malloc((s1->num+s2->num)*sizeof(struct Element));
//  while(i<s1->num && j<s2->num)
//  {
//  if(s1->ele[i].i<s2->ele[j].i)
//  sum->ele[k++]=s1->ele[i++];
//  else if(s1->ele[i].i>s2->ele[j].i)
//  sum->ele[k++]=s2->ele[j++];
//  else
//  {
//  if(s1->ele[i].j<s2->ele[j].j)
//  sum->ele[k++]=s1->ele[i++];
//  else if(s1->ele[i].j>s2->ele[j].j)
//  sum->ele[k++]=s2->ele[j++];
//  else
//  {
//  sum->ele[k]=s1->ele[i];
//  sum->ele[k++].x=s1->ele[i++].x+s2->ele[j++].x;
//  }

//  }
//  }
//  for(;i<s1->num;i++)sum->ele[k++]=s1->ele[i];
//  for(;j<s2->num;j++)sum->ele[k++]=s2->ele[j];
//  sum->m=s1->m;
//  sum->n=s1->n;
//  sum->num=k;


//  return sum;
// }
// int main()
// {
//  struct Sparse s1,s2,*s3;

//  create(&s1);
//  create(&s2);

//  s3=add(&s1,&s2);

//  printf("First Matrix\n");
//  display(s1);
//  printf("Second Matrix\n");
//  display(s2);
//  printf("Sum Matrix\n");
//  display(*s3);


//  return 0;
// }

/* Sparse matrix addition using c++ lecture 165 and 166 */


// #include <stdio.h>
// #include<stdlib.h>
// struct Element
// {
//  int i;
//  int j;
//  int x;
// };
// struct Sparse
// {
//  int m;
//  int n;
//  int num;
//  struct Element *ele;
// };
// void create(struct Sparse *s)
// {
//  int i;

//  printf("Eneter Dimensions");
//  scanf("%d%d",&s->m,&s->n);
//  printf("Number of non-zero");
//  scanf("%d",&s->num);

//  s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));
//  printf("Eneter non-zero Elements");
//  for(i=0;i<s->num;i++)
//  scanf("%d%d%d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);

// }
// void display(struct Sparse s)
// {
//  int i,j,k=0;

//  for(i=0;i<s.m;i++)
//  {
//  for(j=0;j<s.n;j++)
//  {
//  if(i==s.ele[k].i && j==s.ele[k].j)
//  printf("%d ",s.ele[k++].x);
//  else
//  printf("0 ");
//  }
//  printf("\n");
//  }
// }
// struct Sparse * add(struct Sparse *s1,struct Sparse *s2)
// {
//  struct Sparse *sum;
//  int i,j,k;
//  i=j=k=0;

//  if(s1->n != s2->n && s1->m != s2->m)
//  return NULL;
//  sum=(struct Sparse *)malloc(sizeof(struct Sparse));
// sum->ele=(struct Element *)malloc((s1->num+s2->num)*sizeof(struct Element));
//  while(i<s1->num && j<s2->num)
//  {
//  if(s1->ele[i].i<s2->ele[j].i)
//  sum->ele[k++]=s1->ele[i++];
//  else if(s1->ele[i].i>s2->ele[j].i)
//  sum->ele[k++]=s2->ele[j++];
//  else
//  {
//  if(s1->ele[i].j<s2->ele[j].j)
//  sum->ele[k++]=s1->ele[i++];
//  else if(s1->ele[i].j>s2->ele[j].j)
//  sum->ele[k++]=s2->ele[j++];
//  else
//  {
//  sum->ele[k]=s1->ele[i];
//  sum->ele[k++].x=s1->ele[i++].x+s2->ele[j++].x;
//  }

//  }
//  }
//  for(;i<s1->num;i++)sum->ele[k++]=s1->ele[i];
//  for(;j<s2->num;j++)sum->ele[k++]=s2->ele[j];
//  sum->m=s1->m;
//  sum->n=s1->n;
//  sum->num=k;


//  return sum;
// }
// int main()
// {
//  struct Sparse s1,s2,*s3;

//  create(&s1);
//  create(&s2);

//  s3=add(&s1,&s2);

//  printf("First Matrix\n");
//  display(s1);
//  printf("Second Matrix\n");
//  display(s2);
//  printf("Sum Matrix\n");
//  display(*s3);


//  return 0;
// }

// /* Polynomial representation */

// #include <stdio.h>
// #include <stdlib.h>

// struct term
// {
//     int coeff;
//     int exp;
// };

// struct poly
// {
//     int n;
//     struct term *terms;
// };

// void create(struct poly *p)
// {
//     int i;
//     printf("Enter the number of terms : ");
//     scanf("%d", &p->n);
//     p->terms = (struct term*)malloc(p->n*sizeof(struct term));
//     printf("Enter the coefficient and exponent : ");
//     for(i=0; i<p->n; i++)
//     scanf("%d%d", &p->terms[i].coeff, &p->terms[i].exp);
// }

// void display(struct poly p)
// {
//     int i;
//     for(i=0; i<p.n; i++)
//     {
//        printf("%dx^%d+",p.terms[i].coeff,p.terms[i].exp);// printf("%dx%d+", p.term[i].coeff, p.term[i].exp);
//     }
//     printf("\n");
// }

// int main()
// {
// struct poly p1;

// create(&p1);
// display(p1);

// return 0;
// }


/* Polynomial evaluation */

#include <stdio.h>
#include <stdlib.h>

struct term
{
    int coeff;
    int exp;
};

struct poly
{
    int n;
    struct term *terms;
};

void create(struct poly *p)
{
    int i;
    printf("Enter the number of terms : ");
    scanf("%d", &p->n);
    p->terms = (struct term*)malloc(p->n*sizeof(struct term));
    printf("Enter the coefficient and exponent : ");
    for(i=0; i<p->n; i++)
    scanf("%d%d", &p->terms[i].coeff, &p->terms[i].exp);
}

void display(struct poly p)
{
    int i;
    for(i=0; i<p.n; i++)
    {
       printf("%dx^%d+",p.terms[i].coeff,p.terms[i].exp);// printf("%dx%d+", p.term[i].coeff, p.term[i].exp);
    }
    printf("\n");
}

struct poly *add(struct poly *p1, struct poly *p2)
{
    int i,j,k;
    struct poly *sum;

    sum = (struct poly*)malloc(sizeof(struct poly));
    sum->terms=(struct term*)malloc((p1->n+p2->n)*sizeof(struct term));
    i=j=k=0;

    while(i<p1->n && j<p2->n)
    {
        if(p1->terms[i].exp>p2->terms[j].exp)
        sum->terms[k++]=p1->terms[i++];
        else if(p1->terms[i].exp<p2->terms[j].exp)
        sum->terms[k++]=p2->terms[j++];
        else
        {
            sum->terms[k].exp=p1->terms[i].exp;
            sum->terms[k++].coeff=p1->terms[i++].coeff + p2->terms[j++].coeff;
        }


    }
    for(;i<p1->n;i++)sum->terms[k++]=p1->terms[i];
 for(;j<p2->n;j++)sum->terms[k++]=p2->terms[j];

 sum->n=k;
 return sum;
        
}

int main()
{
struct poly p1, p2, *p3;

create(&p1);
printf("\n");
create(&p2);
printf("\n");

p3 = add(&p1, &p2);
printf("\n");
display(p1);
printf("\n");
display(p2);
printf("\n");
display(*p3);

return 0;
}




