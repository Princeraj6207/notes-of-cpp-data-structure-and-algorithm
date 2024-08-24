 /* Matrices */

/* TO display diagonal Matrix using c code */

// #include<stdio.h>

// struct matrix
// {
//     int A[10];
//     int n;
// };

// void Set(struct matrix *m, int i, int j, int x)
// {
//     if(i==j)
//     m->A[i-1]=x;
// }

// int Get(struct matrix m, int i, int j)
// {
//     if(i==j)
//     return m.A[i-1];
//     else
//     return 0;
// }
// void Display(struct matrix m)
// {
//     int i,j;
//     for(i=0; i<m.n; i++)
//     {
//         for(j=0; j<m.n; j++)
//         {
//             if(i==j)
//             printf("%d ", m.A[i]);
//             else
//             printf("0 ");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     struct matrix m;
//     m.n=4;
//     Set(&m, 1,1,5); Set(&m, 2,2,6);Set(&m, 3,3,7);Set(&m, 4,4,8);
//     printf("%d \n", Get(m, 2, 2));
//     Display(m);

//     return 0;
// }

/* displaying diagonal matrix using claass in c++ */

// #include <iostream>
// using namespace std;
// class Diagonal
// {
//     private :
//         int *A;
//         int n;
//     public :
//         Diagonal()     /* Non Parameterized Constructor */
//         {
//             n=2;
//             A=new int [2];
//         }
//         Diagonal(int n)     /* Parameterized Constructor */
//         {
//             this->n=n;           /* to differentiate n as there is one more n in private */
//             A=new int [n];
//         }
//         ~Diagonal()
//         {
//             delete[]A;
//         }

// void Set(int i, int j, int x);
// int Get(int i, int j);
// void Display();
 
// };

// void Diagonal::Set(int i, int j, int x)
// {
//     if(i==j)
//         A[i-1]=x;
// }

// int Diagonal::Get(int i, int j)
// {
//     if(i==j)
//     return A[i-1];
//     else
//     return 0;
// }

// void Diagonal::Display()
// {
//     int i,j;
//     for(i=0; i<n; i++)
//     {
//         for(j=0; j<n; j++)
//         {
//             if(i==j)
//             cout<<A[i]<<" ";
//             else
//             cout<<"0 "; 
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     Diagonal d(4);

//     d.Set(1,1,5);
//     d.Set(2,2,6);
//     d.Set(3,3,7);
//     d.Set(4,4,12);

//     d.Display();
//     return 0;
// }

/* Code for lower triangular matrices in c prog. by using row mwthod */
// #include<stdio.h>
// #include<stdlib.h>

// struct matrix
// {
//     int *A;
//     int n;
// };

// void Set(struct matrix *m, int i, int j, int x)
// {
//     if(i>=j)
//     m->A[i*(i-1)/2+j-1]=x;
// }

// int Get(struct matrix m, int i, int j)
// {
//     if(i>=j)
//         return m.A[i*(i-1)/2+j-1];
//     else
//         return 0;
// }

// void display(struct matrix m)
// {
//     int i,j;
//     for(i=1; i<=m.n; i++)
//     {
//         for(j=1; j<=m.n; j++)
//         {
//             if(i>=j)
//             printf("%d ", m.A[i*(i-1)/2+j-1]);
//             else
//             printf("0 ");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     struct matrix m;
//     int i, j, x;
//     printf("Enter the Dimenstions of matrix : ");
//     scanf("%d", &m.n);
//     m.A=(int *)malloc(m.n*(m.n - 1)/2*sizeof(int));

//     printf("Enter all the elements : \n");
//     for(i=1; i<=m.n; i++)
//     {
//         for(j=1; j<=m.n; j++)
//         {
            
            
//             scanf("%d", &x);
//             Set(&m,i,j,x);
            
            
//         }
//     }
//     printf("\n\n");
//     display(m);
//     free(m.A);
//     return 0;
// }

/* Code for lower triangular matrices in c prog. by using column mwthod */
// #include<stdio.h>
// #include<stdlib.h>

// struct matrix
// {
//     int *A;
//     int n;
// };

// void Set(struct matrix *m, int i, int j, int x)
// {
//     if(i>=j)
//     m->A[m->n*(j-1)-(j-2)*(j-1)/2 + i-j]=x;
// }

// int Get(struct matrix m, int i, int j)
// {
//     if(i>=j)
//         return m.A[m.n*(j-1)-(j-2)*(j-1)/2 + i-j];
//     else
//         return 0;
// }

// void display(struct matrix m)
// {
//     int i,j;
//     for(i=1; i<=m.n; i++)
//     {
//         for(j=1; j<=m.n; j++)
//         {
//             if(i>=j)
//             printf("%d ", m.A[m.n*(j-1)-(j-2)*(j-1)/2 + i-j]);
//             else
//             printf("0 ");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     struct matrix m;
//     int i, j, x;
//     printf("Enter the Dimenstions of matrix : ");
//     scanf("%d", &m.n);
//     m.A=(int *)malloc(m.n*(m.n - 1)/2*sizeof(int));

//     printf("Enter all the elements : \n");
//     for(i=1; i<=m.n; i++)
//     {
//         for(j=1; j<=m.n; j++)
//         {
            
            
//             scanf("%d", &x);
//             Set(&m,i,j,x);
            
            
//         }
//     }
//     printf("\n\n");
//     display(m);
//     free(m.A);
//     return 0;
// }

/* Code for lower triangular matrices in c++ prog. by using row mwthod */
#include <iostream>
using namespace std;

class lowertri
{
private :
    int *A;
    int n;
public :
    lowertri()
    {
        n =2;
        A = new int(2*(2+1)/2);
    }
    lowertri(int n)
    {
        this->n=n;
        A=new int(n*(n+1)/2);
    }
    ~lowertri()
    {
        delete []A;
    }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void display();
    int Getdimension(){return n;}
    
};

void lowertri :: Set(int i, int j, int x)
{
    if(i>=j)
    {
        A[i*(i-1)/2+j-1]=x;
    }
}

int lowertri :: Get(int i, int j)
{
    if(i>=j)
    {
        return A[i*(i-1)/2+j-1];
    }
}

void lowertri :: display()
{
    cout<<" The lower triangular matrices are : "<<endl;
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i>=j)
                cout<< A[i*(i-1)/2+j-1] << " ";
                else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    int d;
    cout<<"Enter the dimension : ";
    cin>>d;
    lowertri lm(d);
    int x;
    cout<<"Enter all the elements : "<<endl;
    for(int i=1; i<=d; i++)
    {
        for(int j=1; j<=d; j++)
        {
            cin>>x;
            lm.Set(i,j,x);
        }
    }
    lm.display();
    return 0;

}