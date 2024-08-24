/*  Strings  */

/* Counting number of vowels and consonants and words */
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[]="How are   you";
//     int i, word=0;
//     int countv=0, countc=0;
//     for(i=0; s[i]!='\0'; i++)
//     {
//         if(s[i]=='a' || s[i]=='e' ||s [i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' ||s [i]=='I' || s[i]=='O' || s[i]=='U')
//             countv++;
//         else if((s[i]>=65 && s[i]<=90)  || (s[i]>=97 && s[i]<=122))
//             countc++; 
//         else if(s[i]==' ' && s[i+1]!=' ')
//             word++;       
//     }
//     printf("No. of vowel is %d\n", countv);
//     printf("No. of consonant is %d\n", countc);
//     printf("No. of words is %d\n", word+1);
//     return 0;

// }

/* To find out string is valid or not like in password suppose special characters is not allowed */

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int valid(char *name)
// {
//     int i;
//     for(i=0; name[i]!='\0'; i++)
//     {
//         if(!(name[i]>=65 && name[i]<=90)  && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57))
//         return 0;
//     }
//         return 1;
// }
// int main()
// {
//     char name[] = "Anil$123";
//     if(valid(name))
//     {
//         printf("Valid String");
//     }
//     else
//         printf("Invalid String");
// }

/* To find reverse */
/* To find duplicate */
/* using bit operations */
/* To check string is anagram or not */
/* permutation of a string*/
// #include <stdio.h>

// #define MAX 10

// int main() {
//     int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], result[MAX][MAX];
//     int rowFirst, colFirst, rowSecond, colSecond;

//     // Input matrices dimensions
//     printf("Enter rows and columns for the first matrix: ");
//     scanf("%d %d", &rowFirst, &colFirst);

//     printf("Enter rows and columns for the second matrix: ");
//     scanf("%d %d", &rowSecond, &colSecond);

//     // Checking if matrices are compatible for multiplication
//     if (colFirst != rowSecond) {
//         printf("Matrices cannot be multiplied. Invalid dimensions.\n");
//         return 0;
//     }

//     // Input elements of the first matrix
//     printf("Enter elements of matrix 1:\n");
//     for (int i = 0; i < rowFirst; ++i)
//         for (int j = 0; j < colFirst; ++j) {
//             printf("Enter element a%d%d: ", i + 1, j + 1);
//             scanf("%d", &firstMatrix[i][j]);
//         }

//     // Input elements of the second matrix
//     printf("Enter elements of matrix 2:\n");
//     for (int i = 0; i < rowSecond; ++i)
//         for (int j = 0; j < colSecond; ++j) {
//             printf("Enter element b%d%d: ", i + 1, j + 1);
//             scanf("%d", &secondMatrix[i][j]);
//         }

//     // Initializing elements of matrix result to 0
//     for (int i = 0; i < rowFirst; ++i)
//         for (int j = 0; j < colSecond; ++j)
//             result[i][j] = 0;

//     // Multiplying matrices and storing in result
//     for (int i = 0; i < rowFirst; ++i)
//         for (int j = 0; j < colSecond; ++j)
//             for (int k = 0; k < colFirst; ++k)
//                 result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];

//     // Displaying the multiplication result
//     printf("Product of matrices:\n");
//     for (int i = 0; i < rowFirst; ++i) {
//         for (int j = 0; j < colSecond; ++j)
//             printf("%d ", result[i][j]);
//         printf("\n");
//     }

//     return 0;
// }