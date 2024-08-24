// /* Welcome to DSA */

// // /* Including both c and c++*/
// // #include<iostream>
// // #include<stdio.h>
// // using namespace std;
// // int main()
// // {
// //     cout<<"Hello World";
// //     printf("\nHeey Prince");
// //     return 0;
// // }

// /* Recursion */

// /* sum of n natural number using recursion */
// // #include<iostream>
// // using namespace std;

// // int sum(int n)
// // {
// //     if(n==0)
// //     return 0;
// //     else
// //     return sum(n-1)+n;
// // }
// // int main()
// // {
// //     int r;
// //     r = sum(5);
// //     cout<<"Sum is : "<<r;

// //     return 0;
// // }

// /* Factorial of a number */

// // #include<iostream>
// // using namespace std;

// //     int fact(int n)
// //     {
// //         if(n==0)
// //         return 1;
// //         else
// //         return fact(n-1)*n;
// //     }
// //     int main()
// //     {
// //         int r;
// //         r = fact(4);
// //         cout<<"The factorial is : "<<r;

// //     return 0;
// //     }

// /* Exponent (m)^n */
// // #include<iostream>

// // using namespace std;

// // int power(int m, int n)
// // {
// //     if(n==0)
// //     return 1;
// //     else
// //     return power(m,n-1)*m;
// // }
// // int main()
// // {
// //     int c;
// //     c=power(2,9);
// //     cout<<"THe result id : "<<c;

// //     return 0;
// // }


// /* Array Representations */

// /* Using array in heap */


// #include <stdio.h>
// #include <stdlib.h>



// int main()
// {

// int A[5]={2,4,6,8,10};
// int *p;
// int i;
// p=(int*)malloc(5*sizeof(int));
// p[0]=3;
// p[1]=5;
// p[2]=7;
// p[3]=9;
// p[4]=11;

// for(i=0; i<5; i++)
// {
//     printf("%d\n", A[i]);
// }
// for(i=0; i<5; i++)
// {
//     printf("%d\n", p[i]);
// }

// return 0;
// }

/* increasing the size of the array */

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int *p, *q;
//     int i;
//     p=(int *)malloc(5*sizeof(int));
//     q=(int *)malloc(10*sizeof(int));
//     p[0]=2, p[1]=4, p[2]=6, p[3]=8, p[4]=12,;

//     for(i=0; i<5; i++)
//     {
//         q[i]=p[i];
//     }
//     free(p);
//     p=q;
//     q=NULL;


//     for(i=0; i<5; i++)
//     {
//         printf("%d\n", p[i]);
//     }
//     return 0;

// }

/*  2D Array  */

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     int *B[3];
//     int **C;
//     int i,j;
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<4; j++)
//         {
//             printf("%d ", A[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     B[0]=(int *)malloc(4*sizeof(int));
//     B[1]=(int *)malloc(4*sizeof(int));
//     B[2]=(int *)malloc(4*sizeof(int));

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<4; j++)
//         {
//             printf("%d ", B[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
 
//     C=(int **)malloc(3*sizeof(int));
//     C[0]=(int *)malloc(4*sizeof(int));
//     C[1]=(int *)malloc(4*sizeof(int));
//     C[2]=(int *)malloc(4*sizeof(int));

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<4; j++)
//         {
//             printf("%d ", B[i][j]);
//         }
//         printf("\n");
//     }

// }

/* Array ADT */

/* Basic layout */
// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int *A;
//     int size;
//     int length;
// };

// void Display(struct array arr)
// {
//     int i;
//     for(i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }


// int main()
// {
//     struct array arr;
//     int n,i;
//     printf("Enter the size of array : ");
//     scanf("%d", &arr.size);
//     arr.A=(int *)malloc(arr.size*sizeof(int));
//     arr.length=0;

//     printf("\nEnter the number of numbers : ");
//     scanf("%d", &n);

//     printf("\n Enter the Elements : ");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d\n", &arr.A[i]);
//     }
//     arr.length=n;

//     Display(arr);
//     return 0;
    
// }

/* Using 1. append means adding a element at last, 2.Inserting an element. 3. Deleting an element */

// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// void Display(struct array arr)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }
// // void Append(struct array *arr, int x)
// // {
// //     if(arr->length<arr->size)
// //     {
// //         arr->A[arr->length++] = x;
// //     }
    
// // }

// // void Insert(struct array *arr, int index, int x)
// // {
// //     if(index>=0 && index <= arr->length)
// //     {
// //     for(int i=arr->length; i>index; i--)
// //     {
// //         arr->A[i]=arr->A[i-1];
// //     }
// //     arr->A[index]=x;
// //     arr->length++;
// //     }

// // }

// int Delete(struct array *arr, int index)
// {
//     int x=0;
//     if(index>=0 && index <= arr->length)
//     {
//     x=arr->A[index];
//     for(int i=index; i<arr->length-1; i++)
//     {
//         arr->A[i]=arr->A[i+1];
//     }
//     arr->length--;
    
//     return x;
//     }
//     return 0;
// }


// int main()
// {
//     struct array arr = {{2,4,6,5,7},10,5};
//     //Append(&arr, 10);
//     printf("The deleted element is %d\n",Delete(&arr,3));
//     printf("\nRemaining elements are : \n");
//     Display(arr);
//     return 0;

// }

/* Liner Search */

// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// int LinearSearch(struct array arr, int key)
// {
//     int i;
//     for(i=0; i<arr.length; i++)
//     {
//         if(key==arr.A[i])
//         return i;
//     }
//     return -1;
// }
// int main()
// {
//     struct array arr = {{2,4,6,7,8},10,5};

//     LinearSearch(arr,6);
//     printf("The number is at index : %d", LinearSearch(arr,8));
    
//     return 0;
// }

/* By using swaping */
// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// void swap(int *x, int *y)
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;

// }
// void Display(struct array arr)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }

// int LinearSearch(struct array *arr, int key)
// {
//     int i;
//     for(i=0; i<arr->length; i++)
//     {
//         if(key==arr->A[i])
//         {
//         swap(&arr->A[i], &arr->A[0]);
//         return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     struct array arr = {{2,4,6,7,8},10,5};


//     printf("The number is at index : %d\n", LinearSearch(&arr,8));
//     Display(arr);
    
//     return 0;
// }

/* Binary Search */

// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// int BinarySearch(struct array arr, int key)
// {
//     int l, h,mid;
//     l=0;
//     h=arr.length-1;
//     while(l<=h)
//     {
//         mid=(l+h)/2;
//         if(key==arr.A[mid])
//         return mid;
//         if(key<arr.A[mid])
//         h=mid-1;
//         if(key>arr.A[mid])
//         l=mid+1;
//     }
//     return -1;
// }
// void Display(struct array arr)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }

// int main()
// {
//     struct array arr = {{2,4,6,7,8},10,5};


//     printf("The number found is at index %d\n", BinarySearch(arr, 7));
//     Display(arr);
    
//     return 0;
// }

/* binary search using recursion */

// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// // int BinarySearch(struct array arr, int key)
// // {
// //     int l, h,mid;
// //     l=0;
// //     h=arr.length-1;
// //     while(l<=h)
// //     {
// //         mid=(l+h)/2;
// //         if(key==arr.A[mid])
// //         return mid;
// //         else if(key<arr.A[mid])
// //         h=mid-1;
// //         else(key>arr.A[mid])
// //         l=mid+1;
// //     }
// //     return -1;
// // }

// int RBinarySearch(int a[], int l, int h, int key)
// {
//     int mid;
//     if(l<=h)
//     {
//         mid = (l+h)/2;
//         if(key==a[mid])
//         return mid;
//         else if(key<a[mid])
//         return RBinarySearch(a, l, mid-1, key);
//         else
//         return RBinarySearch(a,mid+1, h, key);



//     }
// }
// void Display(struct array arr)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }

// int main()
// {
//     struct array arr = {{2,4,6,7,8},10,5};


//     printf("The number found is at index %d\n", RBinarySearch(arr.A, 0, arr.length, 7));
//     Display(arr);
    
//     return 0;
// }

/* Using get, set, max, min, avg, sum 109 */

/* Using Reverse function */
// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// void swap(int *x, int *y)
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;

// }
// // int reverse(struct array *arr)              /* Method 1 */
// // {
// //     int *B;
// //     int i,j;
// //     B=(int *)malloc(arr->length*sizeof(int));
// //     for(i=arr->length-1, j=0; i>=0; i--, j++)
// //     {
// //         B[j]=arr->A[i];
// //     }
// //     for(i=0; i<arr->length; i++)
// //     {
// //         arr->A[i]=B[i];
// //     }
// // }

// int reverse2(struct array *arr)                 /* Method 2 */
// {
//     int i, j;
//     for(i=0, j=arr->length-1; i<j; i++, j--)
//     swap(&arr->A[i], &arr->A[j]);

// }
// void Display(struct array arr)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }

// int main()
// {
//     struct array arr = {{2,4,6,7,8},10,5};


//     reverse2(&arr);
//     Display(arr);
    
//     return 0;
// }

/* 1. Insert an element in sorted array  2. To check array is sorted or not */
// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// void Insertsort(struct array *arr, int x)
// {
//     int i=arr->length-1;
//     if(arr->length==arr->size)
//     {
//         return;
//     }
//     while(i>=0 && arr->A[i]>x)
//     {
//         arr->A[i+1]=arr->A[i];
//         i--;
//     }
//     arr->A[i+1]=x;
//     arr->length++;

// }

// int isSorted(struct array arr)
// {
//     int i;
//     for(i=0; i<arr.length-1; i++)
//     {
//         if(arr.A[i]>arr.A[i+1])
//         return 0;
//     }
//     return 1;
// }

// void Display(struct array arr)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }

// int main()
// {
//     struct array arr = {{2,4,6,7,8},10,5};


//     Insertsort(&arr, 5);
//     printf("result is %d\n", isSorted(arr));
//     Display(arr);
    
//     return 0;
// }

/* Negative numbers on left side and positive on right */

// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// void swap(int *x, int *y)
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// void Rearrange(struct array *arr)
// {
//     int i=0;
//     int j=arr->length-1;
//     while(i<j)
//     {
//         while(arr->A[i]<0) i++;
//         while(arr->A[j]>0) j--;
//         if(i<j)swap(&arr->A[i], &arr->A[j]);
//     }
// }


// void Display(struct array arr)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }

// int main()
// {
//     struct array arr = {{2,-4,6,-7,-8,34,54,-20},10,8};


//     Rearrange(&arr);
//     Display(arr);
    
//     return 0;
// }

/* Merging of two arrays */

// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// struct array* Merge(struct array *arr1, struct array *arr2)
// {
//     int i,j,k;
//     i=0;
//     j=0;
//     k=0;
//     struct array *arr3=(struct array *)malloc(sizeof(struct array));
//     while(i<arr1->length && j<arr2->length)
//     {
//         if(arr1->A[i]<arr2->A[j])
//             arr3->A[k++]=arr1->A[i++];
//         if(arr1->A[i]>arr2->A[j])
//             arr3->A[k++]=arr2->A[j++];
//     }
//     for(; i<arr1->length; i++)
//     arr3->A[k++]=arr1->A[i];
//     for(; j<arr2->length; j++)
//     arr3->A[k++]=arr2->A[j];

//     arr3->length=arr1->length+arr2->length;
//     arr3->size=10;
// }


// void Display(struct array arr)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }

// int main()
// {
//     struct array arr1 = {{2, 4, 6, 8, 10},10, 5};
//     struct array arr2 = {{3, 5, 7, 9, 11}, 10, 5};
//     struct array *arr3;
//     arr3=Merge(&arr1, &arr2);

    
//     Display(*arr3);
//     free(arr3);                         /* we should deallocate memory after using in heap */
    
//     return 0;
// }

/* Union of two array */

// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// struct array* Union(struct array *arr1, struct array *arr2)
// {
//     int i,j,k;
//     i=0;
//     j=0;
//     k=0;
//     struct array *arr3=(struct array *)malloc(sizeof(struct array));
//     while(i<arr1->length && j<arr2->length)
//     {
//         if(arr1->A[i]<arr2->A[j])
//             arr3->A[k++]=arr1->A[i++];
//         else if(arr1->A[i]>arr2->A[j])
//             arr3->A[k++]=arr2->A[j++];
//         else{
//             arr3->A[k++]=arr1->A[i++];
//             j++;
//         }
//     }
//     for(; i<arr1->length; i++)
//     arr3->A[k++]=arr1->A[i];
//     for(; j<arr2->length; j++)
//     arr3->A[k++]=arr2->A[j];

//     arr3->length=k;
//     arr3->size=10;
// }


// void Display(struct array arr)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }

// int main()
// {
//     struct array arr1 = {{2, 4, 6, 8, 10},10, 5};
//     struct array arr2 = {{4, 5, 7, 8, 20}, 10, 5};
//     struct array *arr3;
//     arr3=Union(&arr1, &arr2);

    
//     Display(*arr3);
//     free(arr3);
    
//     return 0;
// }

/* Intersection of two arrays */

// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// struct array* Intersection(struct array *arr1, struct array *arr2)
// {
//     int i,j,k;
//     i=0;
//     j=0;
//     k=0;
//     struct array *arr3=(struct array *)malloc(sizeof(struct array));
//     while(i<arr1->length && j<arr2->length)
//     {
//         if(arr1->A[i]<arr2->A[j])
//             i++;                 /* No need to copy only equal number will be copied*/
//         else if(arr1->A[i]>arr2->A[j])
//             j++;
//         else if(arr1->A[i]==arr2->A[j])
//         {
//             arr3->A[k++]=arr1->A[i++];
//             j++;
//         }
//     }
//     // for(; i<arr1->length; i++)       no need of loop
//     // arr3->A[k++]=arr1->A[i];
//     // for(; j<arr2->length; j++)
//     // arr3->A[k++]=arr2->A[j];

//     arr3->length=k;
//     arr3->size=10;
// }


// void Display(struct array arr)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }

// int main()
// {
//     struct array arr1 = {{2, 4, 6, 8, 10},10, 5};
//     struct array arr2 = {{4, 5, 7, 8, 20}, 10, 5};
//     struct array *arr3;
//     arr3=Intersection(&arr1, &arr2);

    
//     Display(*arr3);
//     free(arr3);
    
//     return 0;
// }

/* Difference of two arrays A-B */

// #include <stdio.h>
// #include <stdlib.h>

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// struct array* Difference(struct array *arr1, struct array *arr2)
// {
//     int i,j,k;
//     i=0;
//     j=0;
//     k=0;
//     struct array *arr3=(struct array *)malloc(sizeof(struct array));
//     while(i<arr1->length && j<arr2->length)
//     {
//         if(arr1->A[i]<arr2->A[j])
//              arr3->A[k++]=arr1->A[i++];               /* as it is difference so only this will be copied */
//         else if(arr1->A[i]>arr2->A[j])
//             j++;
//         else if(arr1->A[i]==arr2->A[j])
//         {
//             i++;
//             j++;
//         }
//     }
//     // for(; i<arr1->length; i++)       no need of loop
//     // arr3->A[k++]=arr1->A[i];
//     // for(; j<arr2->length; j++)
//     // arr3->A[k++]=arr2->A[j];

//     arr3->length=k;
//     arr3->size=10;
// }


// void Display(struct array arr)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }

// int main()
// {
//     struct array arr1 = {{2, 4, 6, 8, 10},10, 5};
//     struct array arr2 = {{4, 5, 7, 8, 20}, 10, 5};
//     struct array *arr3;
//     arr3=Difference(&arr1, &arr2);

    
//     Display(*arr3);
//     free(arr3);
    
//     return 0;
// }

