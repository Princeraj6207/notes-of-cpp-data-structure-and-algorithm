// // // // #include <iostream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int A[] = {4,6,5,8,5,6};
// // // //     for(int i=0; i<6; i++)
// // // //     {
// // // //         cout<<A[i]<<"\n";
// // // //     }

// // // // }
 
// // //  #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int A[100], B[100];
// // //     int m,n;
// // //    cout<<"Enter a row of a matrix : ";
// // //    cin>>m;
// // //    cout<<"\n"<<"Enter a column of a matrix : ";
// // //    cin>>n;
// // //    cout<<"\n"<<"Enter the elements of a matrix : ";
// // //    for(int i=0; i<m; i++)
// // //    {
// // //      cin>>A[i];
// // //    }
// // //    cout<<"\n";
// // //    for(int i=0;i<n;i++)
// // //    {
// // //     cin>>B[i];
// // //    }
// // //    cout<<"The matrix is : "<<"\n";
// // //    for(int i=0; i<m; i++)
// // //    {
// // //      cout<<A[i];
// // //    }
// // //    cout<<"\n";
// // //    for(int i=0;i<n;i++)
// // //    {
// // //     cout<<B[i];
// // //    }
// // //   return 0;
// // // }
// //  #include <iostream>

// // const int MAX_ROWS = 100; // Adjust this as needed
// // const int MAX_COLS = 100; // Adjust this as needed

// // int main() {
// //     // Define the dimensions of the matrix
// //     int rows, cols;

// //     std::cout << "Enter the number of rows: ";
// //     std::cin >> rows;

// //     std::cout << "Enter the number of columns: ";
// //     std::cin >> cols;

// //     // Ensure that the matrix size is within the specified limits
// //     if (rows > MAX_ROWS || cols > MAX_COLS) {
// //         std::cerr << "Matrix size exceeds limits. Please adjust the program." << std::endl;
// //         return 1;
// //     }

// //     // Declare the matrix
// //     int matrix[MAX_ROWS][MAX_COLS];

// //     // Input values into the matrix
// //     std::cout << "Enter matrix elements:" << std::endl;
// //     for (int i = 0; i < rows; ++i) {
// //         for (int j = 0; j < cols; ++j) {
// //             std::cout << "Enter element at position (" << i << ", " << j << "): ";
// //             std::cin >> matrix[i][j];
// //         }
// //     }

// //     // Display the matrix
// //     std::cout << "The matrix is:" << std::endl;
// //     for (int i = 0; i < rows; ++i) {
// //         for (int j = 0; j < cols; ++j) {
// //             std::cout << matrix[i][j] << " ";
// //         }
// //         std::cout << std::endl;
// //     }

// //     return 0;
// // }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[] = {2,6,8,4,3,9};
//     for(int x:A)
//     {
//         cout<<++x<<"\n";
//     }
// return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int A[10], n=10, i, t;
    cout<<"Enter the numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(A[i]>A[i+1])
        {
            t=A[i];
            A[i]=A[i+1];
            A[i]=t;
        }
        
    }
    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

}