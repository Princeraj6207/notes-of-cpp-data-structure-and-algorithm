
                                        /*           Code of bubble sort          */

// #include <stdio.h>
// #include <stdlib.h>

// void swap(int *x, int *y)
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// void Bubble(int A[], int n)
// {
//     int i,j;
//     for(i=0; i<n-1; i++)
//     {
//         int flag=0;
//         for(j=0; j<n-i-1; j++)
//         {
//             if(A[j]>A[j+1])
//             swap(&A[j], &A[j+1]);
//             flag=1;
//         }
//         if(flag==0)
//         {
//             break;
//         }

//     }
// }
// int main()
// {
//     int i,n;
//     int A[50];
//     printf("Enter the total number of elements : ");
//     scanf("%d", &n);

//     printf("\nEnter the numbers : ");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &A[i]);
//     }

//     Bubble(A, n);

//     printf("\n The result of bubble sort is given below \n");
//     for(i=0; i<n; i++)
//     {
//         printf("%d ", A[i]);
//     }

//     return 0;
// }

                                        /*   Code of insertion sort      */

// #include <stdio.h>
// #include <stdlib.h>

// void insertion(int A[], int n)
// {
//     int i,j,x;
   

//     for(i=1; i<n; i++)          // because starting from index 2 onwards and n-1 pass
//     {
//          j=i-1;
//         x=A[i];
//     while(j>-1 && A[j]>x)
//     {
//         A[j+1]=A[j];
//         j--;
//     }
    
//     A[j+1]=x;
//     }
// }

// int main()
// {
//     int i, n;
//     int A[50];
//     printf("Enter the number of elements : ");
//     scanf("%d", &n);

//     printf("Enter all the elements : ");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     insertion(A,n);
//     for(i=0; i<n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     return 0;


// }

                                /*              Code for selection sort             */

// #include <stdio.h>
// #include <stdlib.h>

// void swap(int *x, int *y)
// {
//     int temp;

//     temp=*x;
//     *x=*y;
//     *y=temp;

// }

// void selectionsort(int A[], int n)
// {
//     int i, j, k;
    
//     for(i=0; i<n-1; i++)
//     {
        
//         for(j=k=i; j<n; j++)
//         {
//             if(A[j]<A[k])
//             k=j;

//         }
//         swap(&A[i], &A[k]);
//     }
// }

// int  main()
// {
//     int i, n;
//     int A[50];
//     printf(" Enter the total number of elements : ");
//     scanf("%d", &n);
//     printf("\nEnter all the elements : ");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &A[i]);
//     }

//     selectionsort(A, n);

//     printf("The elements by selection sort is ");
//     for(i=0; i<n; i++)
//     {
//         printf("%d ", A[i]);
//     }

// }

                                                  /*      code for quick sort         */

// #include <stdio.h>

// void swap(int *x, int *y)
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int partition(int A[], int l, int h)
// {
//     int pivot=A[l];
//     int i=l;
//     int j=h;

//     do{
//         do{i++;}while(A[i]<=pivot);
//         do{j--;}while(A[j]>pivot);
//     if(i<j)
//     swap(&pivot, &A[l]);

//     }while(j>i);
//     swap(&A[l], &A[j]);
//     return j;
// }

// void Quicksort(int A[], int l, int h)
// {
//     int j;
//     if(l<h)
//     {
//         j=partition(A, l, h);
//         Quicksort(A,l,j);
//         Quicksort(A,j+1,h);
//     }
// }

// int main()
// {
//     int i,n;
//     int A[50];
//     printf("Enter the size of array : ");
//     scanf("%d", &n);

//     printf("\nEnter the numbers : ");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &A[i]);
//     }

//     Quicksort(A,0,n-1);

//     printf("\n");

//      for(i=0; i<n-1; i++)
//     {
//         printf("%d  ", A[i]);
//     }

    

// }