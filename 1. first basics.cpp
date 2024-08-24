// // // C++ Basics

// // // Hello World program


// // // #include <iostream>
// // // using namespace std;

// // // int main() 
// // // {

// // //     cout<<"Hello World";
// // //     return 0;
// // // }


// // // //Addtion of two numbers

// // // // #include <iostream>
// // // // using namespace std;

// // // // int main() {
    
// // // //     int a,b,c;
// // // //     cout<<"enter a number";
// // // //     cin>>a>>b;
// // // //     c=a+b;
// // // //     cout<<c;
// // // //     return 0;
// // // // }

// // // Asking name program

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     string str;
// // //     cout<<"What is your name";
// // //     cin>>str;
// // //     cout<<"welcome "<<str;

// // //     return 0;
// // // }


// // //Asking name program

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     string str;
// //     cout<<"What is your name";
// //     getline(cin,str);
// //     cout<<"welcome "<<str;

// //     return 0;
// // }

/* Area of circle */

// #include <iostream>
// using namespace std;
// int main()
// {
//     float radius, area;
//     cout<<"Enter the radius of circle";
//     cin>>radius;
//     area = 3.14f*radius*radius;
//     cout<<"Area of the circle is "<<area;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() 
{   
    int x,y;
    cout<<"Enter two Numbers : ";
    cin>>x>>y;
    if(x>y)
    {
        cout<<"The max is : "<<x;
    }
    else{
        cout<<"The max is : "<<y;
    }
    return 0;

}