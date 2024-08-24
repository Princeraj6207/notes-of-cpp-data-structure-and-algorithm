
// // // /*To find max of two numbers */

// // #include <iostream>
// // using namespace std;

// // int main() 
// // {   
// //     int x,y;
// //     cout<<"Enter two Numbers : ";
// //     cin>>x>>y;
// //     if(x>y)
// //     {
// //         cout<<"The max is : "<<x;
// //     }
// //     else{
// //         cout<<"The max is : "<<y;
// //     }
// //     return 0;

// // }

// // // /* To find the working hours*/

// // // #include <iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     int n;
// // //     cout<<"Enter an hour : ";
// // //     cin>>n;
// // //     if(n>9 && n<18)
// // //     {
// // //         cout<<"Its working hours";
// // //     }
// // //     else{
// // //         cout<<"Its not working hours";
// // //     }
// // // }

// // // // // /* Loops */

// // // // // using while loop 

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n, i=1;
// // //     cout<<"Enter a new number : ";
// // //     cin>>n;

// // //     while(i<=n)
// // //     {
// // //         cout<<i<<"\n";
// // //         i++;
        
// // //     }
// // //     return 0;
// // // }

// // // // using do while loop

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n, i=1;
// // //     cout<<"enter a number : ";
// // //     cin>>n;
// // //     do{
// // //         cout<<i<<"\n";
// // //         i++;
// // //     }while(i<=n);
// // //     return 0;
// // // }

// // // // using for loop 

// // // Multiplication of a number 

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n, i;
// // //     cout<<"enter a number : ";
// // //     cin>>n;
// // //     for(i=1; i<=10; i++)
// // //     {
// // //         cout<<i<<" x "<<n<<" = "<<i*n<<"\n";
// // //     }
// // //     return 0;
// // // }

// // // // Addition of n natural number
// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n, i, x=0;
// // //     cout<<"enter a number : ";
// // //     cin>>n;
// // //     for(i=1; i<=n; i++)
// // //     {
// // //         x = x+i;
// // //     }
// // //     cout<<x;
// // //     return 0;
// // // }


// // /*  factor of a number*/


// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n, i;
// // //     cout<<"enter a number : ";
// // //     cin>>n;
// // //     for(i=1; i<=n; i++)
// // //     {
// // //         if(n%i==0)
// // //         cout<<"factor is : "<<i<<"\n";
        
// // //      }
// // //     return 0;
// // // }

// // // // // Amstrong Number

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n, i, r, sum=0, m;
// // //     cout<<"enter a number : ";
// // //     cin>>n;
// // //     m=n;
// // //     while(n>0)
// // //     {
// // //         r=n%10;
// // //         n=n/10;
// // //         cout<<"\n"<<r;
// // //         sum=sum + r*r*r;
// // //     }
// // //     if(sum==m)
// // //         cout<<"\nThe given number is amstrong number";
// // //         else
// // //         cout<<"\n The given number is not amstrong number";
// // //     return 0;
// // // }

// // // /* Program for gcd of two numbers */
// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n, m, i;
// // //     cout<<"enter two number : ";
// // //     cin>>n>>m;
// // //     while(m!=n)
// // //     {
// // //         if(m>n)
// // //         m=m-n;
// // //         else if(n>m)
// // //         n=n-m;
// // //     }
// // //         cout<<m;
    
// // //     return 0;
// // // }


// // // /* Arrays  */

// // // /* Liner search */
// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int A[10], n, i;
// // //     cout<<"Enter the numbers : ";
// // //     for(i=0; i<10; i++)
// // //     {
// // //         cin>>A[i];
// // //         cout<<A[i]<<"\n";
// // //     }
    
// // //     cout<<"Enter a number which you want to search : ";
// // //     cin>>n;
// // //     for(i=0; i<10; i++)
// // //     {
// // //         if(A[i]==n)
// // //         cout<<"found at : "<<i;
// // //     }
// // //     cout<<"not found";
// // //     return 0;
// // // }

// // // /* arranging an array */
// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int A[100], n,i,t;
// // //     cout<<"Enter the size of array : ";
// // //     cin>>n;
// // //     cout<<"Enter the array : ";
// // //     for(i=0; i<n; i++)
// // //     {
// // //         cin>>A[i];
        
// // //     }

// // //    for(int i=0; i<n; i++)
// // //    {
// // //         for(int j=i; j<n; j++)
// // //      {
// // //         if(A[i]>A[j+1])
// // //        {
// // //             t = A[i];
// // //             A[i]=A[j+1]; 
// // //             A[j+1]=t; 
// // //        }
// // //      }
// // //         // cout<<A[i]<<"\n";   
// // //    }

// // //    for(int i=0; i<=n; i++)
// // //    {
// // //     cout<<A[i]<<"\n";
// // //    }
     
// // //     return 0;
// // // }

// // /* strings */

// // /* using get */

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     char s[100], s2[50];
// // //     cout<<"Enter your name : ";
// // //     cin.get(s, 100);
// // //     cout<<"\n welcome "<<s;

// // //     cout<<"\n Enter your name again : ";
// // //     cin.get(s2, 50);                        /* cin.get can't display name again */
// // //     cout<<"\n Welcome again "<<s2;              /* to use cin.get write cin.ignore() in between */
// //                                                     /* or use getline to display name again */
// // //     return 0;
// // // }

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     char s[100], s2[50];
// // //     cout<<"Enter your name : ";
// // //     cin.get(s, 100);
// // //     cout<<"\n welcome "<<s;

// // //     cin.ignore();

// // //     cout<<"\n Enter your name again : ";
// // //     cin.get(s2, 50);                      
// // //     cout<<"\n Welcome again "<<s2;        

// // //     return 0;
// // // }

// // /* using getline */

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     char s[100], s2[50];
// // //     cout<<"Enter your name : ";
// // //     cin.getline(s, 100);
// // //     cout<<"\n welcome "<<s;

// // //     cout<<"\n Enter your name again : ";
// // //     cin.getline(s2, 50);                     
// // //     cout<<"\n Welcome again "<<s2;       

// // //     return 0;
// // // }

// // /* Functions of strings */

// // /* 1. strlen - to find length of the string */

// // // #include <iostream>
// // // #include <cstring>
// // // using namespace std;
// // // int main()
// // // {
// // //     char s1[20] = "Hello";
// // //     char s2[20] = "How are You";

// // //     cout<<strlen(s1)<<" "<<strlen(s2);
// // // }

// // /* in other way to display length of string but it will read only one word*/
// // // #include <iostream>
// // // #include <cstring>
// // // using namespace std;
// // // int main()
// // // {
// // //     char s[20];
// // //     cout<<"Enter a string : ";
// // //     cin>>s;
    
// // //         cout<<"length : "<<strlen(s);
// // //         return 0;
// // // }

// // /* for reading full word use getline */

// // // #include <iostream>
// // // #include <cstring>
// // // using namespace std;
// // // int main()
// // // {
// // //     char s[20];
// // //     cout<<"Enter a string : ";
// // //     cin.getline(s,20);
    
// // //         cout<<"length : "<<strlen(s);
// // //         return 0;
// // // }

// // /* 2. strcat/strncat - It helps to merge two strings */

// // // #include <iostream>
// // // #include <cstring>
// // // using namespace std;
// // // int main()
// // // {
// // //     char s1[20], s2[20];
// // //     cout<<"Enter a string 1 : ";
// // //     cin.getline(s1,20);                 
// // //     cout<<"Enter a string 2 : ";
// // //     cin.getline(s2,20);

// // //         cout<<strcat(s1,s2)<<"\n";
// // //         cout<<strncat(s1,s2,2)<<"\n";
// // //         return 0;
// // // }
// // /* output 
// // Enter a string 1 : program
// // Enter a string 2 : ming
// // programming
// // */

// // /*  functions */

// // /* To add two two numbers */

// // // #include <iostream>
// // // using namespace std;


// // // float add(float x, float y)

// // // {
// // //     float z;
// // //     z=x+y;
// // //     return z;
// // // }

// // // int main()
// // // {
// // //     float x=12.5, y=6.4, z;
// // //     z=add(x, y);
// // //     cout<<z;
// // //     return 0;
// // // }
// //    /* OOPS */

// //    /* class */

// //    #include <iostream>
// //    using namespace std;

// //    class Rectangle
// //    {
// //     public :
// //     int length;
// //     int breadth;

// //     int area()
// //     {
// //         return length*breadth;
// //     }
// //     int perimeter()
// //     {
// //         return 2*(length+breadth);
// //     }
// //    };

// //    int main()
// //    {
// //     Rectangle r1, r2;
// //     r1.length = 5;
// //     r1.breadth = 10;
// //     cout<<"Area of first is : "<<r1.area()<<"\n";
// //     cout<<"Perimeter of first is : "<<r1.perimeter()<<"\n";

// //     r2.length=15;
// //     r2.breadth=10;
// //     cout<<"Area of second is : "<<r2.area()<<"\n";
// //     cout<<"Perimeter of second is : "<<r2.perimeter()<<"\n";

// //     return 0;
// //    }

// /* using pointer to object in class */
// // #include <iostream>
// // using namespace std;

// //    class Rectangle
// //    {
// //     public :
// //     int length;
// //     int breadth;

// //     int area()
// //     {
// //         return length*breadth;
// //     }
// //     int perimeter()
// //     {
// //         return 2*(length+breadth);
// //     }
// //    };

// // int main()
// // {
// //     Rectangle r1, r2;
// //     Rectangle *p, *q;
// //     p=&r1;
// //     q=&r2;
// //     p->length = 10;
// //     p->breadth = 5;
// //     cout<<p->area()<<"\n";
// //     cout<<p->perimeter()<<" \n";

// //     q->length = 10;
// //     q->breadth = 15;
// //     cout<<q->area()<<"\n";
// //     cout<<q->perimeter()<<" \n";

// //     return 0;
// // }

// /* Data Hiding */
// // #include <iostream>
// // using namespace std;

// //    class Rectangle
// //    {
// //     private :
// //     int length;
// //     int breadth;

// //     public :
// //     void setLength(int l)
// //     {
// //         length = l;
// //         if(l>0)
// //         length = l;
// //         else
// //         length = 1;
// //    }
// //     void setBreadth(int b)
// //     {
// //         breadth = b;
// //         if(b>0)
// //         breadth = b;
// //         else
// //         breadth = 1;
// //     }

// //     int getLength()
// //     {
// //         return length;
// //     }
// //     int getBreadth()
// //     {
// //         return breadth;
// //     }



// //     int area()
// //     {
// //         return length*breadth;
// //     }
// //     int perimeter()
// //     {
// //         return 2*(length+breadth);
// //     }
// //    };

// //    int main()
// //    {
// //     Rectangle r1, r2;
// //     r1.setLength(5);
// //     r1.setBreadth(10);
// //     cout<<"area is : "<<r1.area()<<"\n";
// //     r2.setLength(10);
// //     r2.setBreadth(10);
// //     cout<<"area is : "<<r2.area()<<"\n";
// //     return 0;
// //    }


// /* constructor using default, non parameterised, parameterised, copy constructor */

// // #include <iostream>
// // using namespace std;

// //    class Rectangle
// //    {
// //     private :
// //     int length;
// //     int breadth;

// //     public :

// //     Rectangle()                         // Non-Parameterised constructor
// //     {
// //         length = 1;
// //         breadth = 1;
// //     }
// //     Rectangle(int l, int b)             // Parameterised constructor
// //     {
// //         setLength(l);
// //         setBreadth(b);
// //     }
// //     Rectangle(Rectangle &r)             // copy constructor
// //     {
// //         length = r.length;
// //         breadth = r.breadth;
// //     }
// //     void setLength(int l)
// //     {
// //         length = l;
// //         if(l>0)
// //         length = l;
// //         else
// //         length = 1;
// //    }
// //     void setBreadth(int b)
// //     {
// //         breadth = b;
// //         if(b>0)
// //         breadth = b;
// //         else
// //         breadth = 1;
// //     }

// //     int getLength()
// //     {
// //         return length;
// //     }
// //     int getBreadth()
// //     {
// //         return breadth;
// //     }



// //     int area()
// //     {
// //         return length*breadth;
// //     }
// //     int perimeter()
// //     {
// //         return 2*(length+breadth);
// //     }
// //    };

// //    int main()
// //    {
// //     Rectangle r1(10,5);
// //     Rectangle r2(r1);           // copy constructor
// //     cout<<r1.area()<<"\n";
// //     cout<<r2.area()<<"\n";
// //     return 0;
// //    }


// /* Operator Overloading */

// /* Normal adding of complex number */
// // #include <iostream>
// // using namespace std;
// // class complex
// // {
// //     public :
// //     int real;
// //     int img;

// //     complex add(complex c)
// //     {
// //     complex temp;
// //     temp.real = real + c.real;
// //     temp.img = img + c.img;
// //     return temp;
// //     }
// // };

// // int main()
// // {
// //     complex c1, c2, c3;
// //     cout<<"Enter real number of both complex number : ";
// //     cin>>c1.real>>c2.real;
// //     cout<<"\n Enter img number of both complex number : ";
// //     cin>>c1.img>>c2.img;
// //     // c1.real=5; c2.real=7;
// //     // c1.img=4; c2.img=3;
// //     c3 = c1.add(c2);
// //     cout<<c3.real<<"+i"<<c3.img;
// //     return 0;
// // }

// /* by operator overloading */
// // #include <iostream>
// // using namespace std;
// // class complex
// // {
// //     public :
// //     int real;
// //     int img;

// //     complex operator+(complex c)
// //     {
// //     complex temp;
// //     temp.real = real + c.real;
// //     temp.img = img + c.img;
// //     return temp;
// //     }
// // };

// // int main()
// // {
// //     complex c1, c2, c3;
// //     cout<<"Enter real number of both complex number : ";
// //     cin>>c1.real>>c2.real;
// //     cout<<"\n Enter img number of both complex number : ";
// //     cin>>c1.img>>c2.img;
// //     // c1.real=5; c2.real=7;
// //     // c1.img=4; c2.img=3;
// //     c3 = c1 + c2;
// //     cout<<c3.real<<"+i"<<c3.img;
// //     return 0;
// // }

// /* Using Friend Function Operator */

// // #include <iostream>
// // using namespace std;
// // class complex
// // {
// //     private :
// //     int real;
// //     int img;

// //     public :
// //     complex (int r=0, int i=0)
// //     {
// //         real=r;
// //         img=i;
// //     }
// //     void display()
// //     {
// //         cout<<real<<"+i"<<img;
// //     }

// //     friend complex operator+(complex c1, complex c2);
    
// // };

// // complex operator+(complex c1, complex c2)
// //     {
// //     complex temp;
// //     temp.real = c1.real + c2.real;
// //     temp.img = c1.img + c2.img;
// //     return temp;
// //     }

// // int main()
// // {
// //     complex c1(5,3),c2(4,7),c3;
// //     c3=c1+c2;
// //     c3.display();
// //     return 0;
// // }


// /* Inserton Operator to display complex number */
// // #include <iostream>
// // using namespace std;
// // class complex
// // {
// //     private :
// //     int real;
// //     int img;

// //     public :
// //     complex (int r=0, int i=0)
// //     {
// //         real=r;
// //         img=i;
// //     }
    
// //     friend ostream & operator<<(ostream &out, complex &c);
    
// // };

// // ostream & operator<<(ostream &out, complex &c)
// //     {
// //    out<<c.real<<"+i"<<c.img;
// //    return out;
// //     }

// // int main()
// // {
// //     complex c(10,5);
// //    cout<<c<<"\n";
// //    //or
// //    operator<<(cout,c);
// //     return 0;
// // }

// /* Inheritance */

// /* Example of cuboid from rectangle */
// // #include <iostream>
// // using namespace std;
// // class Rectangle
// // {
// //     private :
// //     int length;
// //     int breadth;

// //     public :
// //     Rectangle();                                    /* constructor */
// //     Rectangle(int l, int b);
// //     Rectangle(Rectangle &r);
// //     int getLength(){return length;}                 /* Accessor */
// //     int getBreadth(){return breadth;}
// //     void setLength(int l);                          /* Mutator */
// //     void setBreadth(int b);
// //     int area();                                     /* Facilitators */
// //     int perimeter();
// //     bool isSquare();

// // };

// // class Cuboid : public Rectangle
// // {
// //     private:
// //         int height;
// //     public :
// //         Cuboid(int h)
// //         {
// //             height = h;
// //         }
// //         int getHeight(){return height;}
// //         void setHeight(int h){height=h;}
// //         int volume(){return getLength()*getBreadth()*height;}

// // };

// //     Rectangle::Rectangle()                        
// //     {
// //         length = 1;
// //         breadth = 1;
// //     }
// //     Rectangle::Rectangle(int l, int b)             
// //     {
// //         setLength(l);
// //         setBreadth(b);
// //     }
// //     Rectangle::Rectangle(Rectangle &r)            
// //     {
// //         length = r.length;
// //         breadth = r.breadth;
// //     }
// //     void Rectangle:: setLength(int l)
// //     {
// //         length = l;
// //         if(l>0)
// //         length = l;
// //         else
// //         length = 1;
// //    }
// //     void Rectangle:: setBreadth(int b)
// //     {
// //         breadth = b;
// //         if(b>0)
// //         breadth = b;
// //         else
// //         breadth = 1;
// //     }

   


// //     int Rectangle::area()
// //     {
// //         return length*breadth;
// //     }
// //     int Rectangle::perimeter()
// //     {
// //         return 2*(length+breadth);
// //     }
// // int main()
// // {
// //     Cuboid c(5);
// //     c.setLength(10);
// //     c.setBreadth(7);
// //     cout<<c.volume();

// // }


// #include <iostream>
// using namespace std;
// class base
// {
//     public:
    
//         void fun1()
//         {
//             cout<<"fun1 of base"<<endl;
//         }
    
// };
// class derived : public base
// {
//     public:

//     void fun2()
//     {
//         cout<<"fun2 of derived class"<<endl;
//     }
// };

// int main()
// {
//     derived d;
//     d.fun1();
//     d.fun2();
//     return 0;
// }

// // int main()
// // {
// //     derived d;
// //     base *ptr=&d;
// //     ptr->fun1();
// //     ptr->fun2();  /* error with pointer in base we cannot access derived class */
// //     return 0;
// // }

#include <iostream>
using namespace std;

class student
{
    public:
    int roll;
    string name;
    static int addNo;    /* if we want to assign roll no. automatically */
    student (string n)
    {
        addNo ++;
        roll = addNo;
        name = n;
    }
    void display()
    {
        cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
    }
    
};

int student::addNo=0;

int  main()
{
    student s1("John");
    student s2("Ravi");
    student s3("khan");
    student s4("John");
    student s5("Ravi");
    student s6("khan");


    s1.display();
    s2.display();
    s3.display();

    cout<<"Number Admission "<<student::addNo<<endl;        /* To count the total number of admission */
}