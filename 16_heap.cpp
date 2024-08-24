                                                    /*      c programming for insert, delete and heap sort      */


#include <stdio.h>
#include <stdlib.h>

void create(int H[], int n)
{
    int temp, i=n;
    temp = H[i];

    while(i>1 && temp > H[i/2])
    {
        H[i]=H[i/2];
        i=i/2;
    }

    H[i]=temp;
}

int Delete(int A[], int n)
{
    int i,j,temp,x,val;
    x=A[1];
    val=A[n];
    A[1]=A[n];
    A[n]=x;

    i=1;
    j=2*i;

    while(j<n-1)
    {
        if(A[j+1]>A[j])
            j=j+1;
        if(A[i]<A[j])
            {
                temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        else
            {
                break;
            }
    }
    return x;


}

int  main()
{
    int H[] = {0,10,20,30,25,5,40,35};

    int i;
    for(i=1; i<8; i++)
    create(H, i);

    // printf("The deleted element is %d ", Delete(H,7));       //  for deleting elements
    // printf("The deleted element is %d ", Delete(H,6));      // because heap size is updated to 6
    // printf("\n");

    for(i=7; i>=1; i--)
    {
        Delete(H,i);                // for heap sort (it will give element in sorted order)
    }

    
    for(i=1; i<8; i++)
     printf("%d  ", H[i]);
     printf("\n");

    return 0;

}


                                                    /*      c++ programming for insert in heap      */

// #include <iostream>
// #include <vector>

// using namespace std;
 
// // Lecture based
// void InsertA(int A[], int n){
//     int i = n;
//     int temp = A[n];
//     while (i > 0 && temp > A[i % 2 == 0 ? (i/2)-1 : i/2]){
//         A[i] = A[i % 2 == 0 ? (i/2)-1 : i/2];
//         i = i % 2 == 0 ? (i/2)-1 : i/2;
//     }
//     A[i] = temp;
// }
 
 
// // STL vector based
// void Insert(vector<int>& vec, int key){
//     // Insert key at the end
//     auto i = vec.size();
//     vec.emplace_back(key);
 
//     // Rearrange elements: Indices are not DRY :-(
//     while (i > 0 && key > vec[i % 2 == 0 ? (i/2)-1 : i/2]){
//         vec[i] = vec[i % 2 == 0 ? (i/2)-1 : i/2];
//         i = i % 2 == 0 ? (i/2)-1 : i/2;
//     }
//     vec[i] = key;
// }
 
// template <class T>
// void Print(T& vec, int n){
//     cout << "Max Heap: [" << flush;
//     for (int i=0; i<n; i++){
//         cout << vec[i] << flush;
//         if (i < n-1){
//             cout << ", " << flush;
//         }
//     }
//     cout << "]" << endl;
// }
 
 
// int main() {
 
//     int a[] = {45, 35, 15, 30, 10, 12, 6, 5, 20, 50};
//     InsertA(a, 9);
//     Print(a, sizeof(a)/sizeof(a[0]));
//     cout << endl;
 
//     // STL based
//     vector<int> v = {45, 35, 15, 30, 10, 12, 6, 5, 20};
//     Print(v, v.size());
//     v.reserve(15);  // Reserve space for 15 elements
 
//     Insert(v, 50);
//     Print(v, v.size());
 
//     return 0;
// }