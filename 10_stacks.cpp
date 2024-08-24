                                                    /* Basic operations of stack using array  */

// #include <stdio.h>
// #include <stdlib.h>

// struct stack
// {
//     int size;
//     int top;
//     int *s;
// };

// void create(struct stack *st)
// {
//     printf("Enter the size of stack : ");
//     scanf("%d", &st->size);
//     st->top=-1;
//     st->s=(int *)malloc(st->size*sizeof(int));
// }

// void Display(struct stack st)
// {
//     int i;
//     for(i=st.top; i>=0; i--)
//     printf("%d ", st.s[i]);
//     printf("\n");
// }

// void push(struct stack *st, int x)
// {
//     if(st->top==st->size-1)
//         printf("stack overflow\n");
//     else
//     {
//         st->top++;
//         st->s[st->top]=x;
//     }
// }

// int pop(struct stack *st)
// {
//     int x=-1;
//     if(st->top==-1)
//         printf("stack underflow\n");
//     else
//     {
//         x=st->s[st->top--];
//     }
//     return x;
// }

// int peek(struct stack st, int index)
// {
//     int x=-1;
//  if(st.top-index+1<0)
//  printf("Invalid Index \n");
//  x=st.s[st.top-index+1];

//  return x;
// }

// int isEmpty(struct stack st)
// {
//  if(st.top==-1)
//  return 1;
//  return 0;
// }

// int isFull(struct stack st)
// {
//  return st.top==st.size-1;
// }

// int stackTop(struct stack st)
// {
//  if(!isEmpty(st))
//  return st.s[st.top];
//  return -1;
// }


// int main()
// {
//     struct stack st;

//     create(&st);
//     push(&st, 10);
//     push(&st, 20);
//     push(&st, 30);
//     push(&st, 40);
//     Display(st);

//     printf("\nThe deleted value is %d \n", pop(&st));
//     Display(st);

    
// }

                                        /* stacks for revision purpose  */
// #include <stdio.h>
// #include <stdlib.h>

// struct stack
// {
//     int size;
//     int top;
//     int *s;
// };

// void create(struct stack *st)
// {
//    printf("Enter the size of stack : ");
//    scanf("%d", &st->size);
//    st->top = -1;
//    st->s = (int*)malloc(st->size*sizeof(int));
//    }

// void display(struct stack st)
// {
//      int i;
//     for(i=st.top; i>=0; i--)
//     {
//         printf("%d ", st.s[i]);
//     }
// }

// void push(struct stack *st, int x)
// {
    
//     if(st->top==st->size-1)
//         printf("\n stack oveflow ");
//     else
//     {
//         st->top++;
//         st->s[st->top]=x;
//     }

// }
// int pop(struct stack *st)
// {
//     int x = -1;
//     if(st->top==-1)
//     printf("\nstack underflow");
//     else
//     x=st->s[st->top--];

//     printf("\nThe deleted element is %d\n", x);
    
// }

// int peek(struct stack  st, int pos)
// {
//     int x=-1;
//     if(st.top-pos+1<0)
//     printf("\n stack invalid");
    
//     x=st.s[st.top-pos+1];

//     printf("\n The number founded is %d", x);
// }

// // int isEmpty(struct stack st)
// // {
// //     if(st.top==-1)
// //     return 1;
// //     else
// //     return 0;
// // }

// // int isFull(struct stack st)
// // {
// //     if(st.top==st.size-1)
// //     return 1;
// //     else
// //     return 0;
// // }

// int main()
// {
//     struct stack st;
//     create(&st);
//     push(&st, 12);
//     push(&st, 54);
//     push(&st, 43);
//     push(&st, 31);
//     pop(&st);
//     display(st);
//     printf("\n");
//     peek(st, 2);
    

// }

                                                 /*  Stack using linked list   */
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// }*top = NULL;

// void push(int x)
// {
//     struct node *t;
//     t=(struct node*)malloc(sizeof(struct node));
//     if(t==NULL)
//     printf("stack is overflow\n");
//     else
//     {
//         t->data=x;
//         t->next=top;
//         top=t;
//     }
// }

// int pop()
// {
//     struct node *p;
//     int x=-1;
//     if(top==NULL)
//         printf("stack is empty\n");
//     else
//     {
//         p=top;
//         top=top->next;
//         x=p->data;
//         free(p);
//     }
//     return x;
    
// }

// void display()
// {
//     struct node *p;
//     p=top;
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
//     printf("\n");
// }

// int main()
// {
//     push(20);
//     push(30);
//     push(40);
//     push(60);
//     pop();
//     display();
    
// }

                            /* c++ class for stack using linked list */
// #include <iostream>
// using namespace std;

// class node
// {
//     public :
//         int data;
//         node *next;
// };

// class stack
// {
//     private :
//         node *top;
//     public :
//         stack(){top=NULL;}
//         void push(int x);
//         int pop();
//         void display();
// };

// void stack::push(int x)
// {
//     node *t=new node;
//     if(t==NULL)
//         cout<<"Stack is overloaded\n";
//     else
//     {
//         t->data=x;
//         t->next=top;
//         top=t;
//     }
    
// }

// int stack::pop()
// {
//     node *t;
//     int x =-1;
    
//     if(t==NULL)
//         cout<<"stack is empty\n";
//     else
//     {
//         t=top;
//         top=top->next;
//         x=t->data;
//         delete t;
//     }
//     return x;
// }

// void stack::display()
// {
//     node *p;
//     p=top;
//     while(p!=NULL)
//     {
//         cout<<p->data<<"  ";
//         p=p->next;
//     }
//     cout<<"\n";

// }

// int main()
// {
//     stack stk;

//     stk.push(34);
//     stk.push(45);
//     stk.push(65);
//     stk.push(87);
//     stk.display();
//     stk.pop();
//     cout<<"\n";
//     stk.display();

// }


                                        /*  Code for missing parenthesis  */

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     char data;
//     struct node *next;
// }*top = NULL;

// void push(char x)
// {
//     struct node *t;
//     t=(struct node*)malloc(sizeof(struct node));
//     if(t==NULL)
//     printf("stack is overflow\n");
//     else
//     {
//         t->data=x;
//         t->next=top;
//         top=t;
//     }
// }

// char pop()
// {
//     struct node *p;
//     char x=-1;
//     if(top==NULL)
//         printf("stack is empty\n");
//     else
//     {
//         p=top;
//         top=top->next;
//         x=p->data;
//         free(p);
//     }
//     return x;
    
// }

// void display()
// {
//     struct node *p;
//     p=top;
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
//     printf("\n");
// }

// int isBalanced(char *exp)
// {
//     int i;
//     for(i=0; exp[i]!='\0'; i++)
//     {
//         if(exp[i]=='(')
//             push(exp[i]);
//         else if(exp[i]==')')
//         {
//             if(top==NULL)
//             return 0;
//             else 
//             pop();
//         }
//     }
//     if(top==NULL)
//     return 1;
//     else
//     return 0;
// }

// int main()
// {
//     char *exp="((a+b)*(c+d))";
//     printf("%d", isBalanced(exp));
//     return 0;
// }

                                         /* code for infix to outfix */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// struct node
// {
//     char data;
//     struct node *next;
// }*top = NULL;

// void push(char x)
// {
//     struct node *t;
//     t=(struct node*)malloc(sizeof(struct node));
//     if(t==NULL)
//     printf("stack is overflow\n");
//     else
//     {
//         t->data=x;
//         t->next=top;
//         top=t;
//     }
// }

// char pop()
// {
//     struct node *p;
//     char x=-1;
//     if(top==NULL)
//         printf("stack is empty\n");
//     else
//     {
//         p=top;
//         top=top->next;
//         x=p->data;
//         free(p);
//     }
//     return x;
    
// }

// void display()
// {
//     struct node *p;
//     p=top;
//     while(p!=NULL)
//     {
//         printf("%d ", p->data);
//         p=p->next;
//     }
//     printf("\n");
// }

// int isBalanced(char *exp)
// {
//     int i;
//     for(i=0; exp[i]!='\0'; i++)
//     {
//         if(exp[i]=='(')
//             push(exp[i]);
//         else if(exp[i]==')')
//         {
//             if(top==NULL)
//             return 0;
//             else 
//             pop();
//         }
//     }
//     if(top==NULL)
//     return 1;
//     else
//     return 0;
// }

// char isoperand(char x)
// {
//     if(x=='+' || x=='-' || x=='*' || x=='/')
//         return 0;
//     else
//         return 1;
// }

// char pre(char x)
// {
//     if(x=='+' || x=='-')
//         return 1;
//     if(x=='*' || x=='/')
//         return 2;
//     else
//         return 0;
// }

// char *convert(char *infix)
// {
//     struct node str;
//     int i=0, j=0;
//     char *postfix;
//     int len = (int)strlen(infix);
//     postfix = (char*)malloc((len+2)*sizeof(int)); 
    
//     while(infix[i]!='\0')
//     {
//     if(isoperand(infix[i]))
//         postfix[j++]=infix[i++];
//     else
//     {
//         if(pre(infix[i])>pre(top->data))
//             push(infix[i++]);
//         else
//             postfix[j++]=pop();

//     }
//     }
//     while(top!=NULL)
//     {
//     postfix[j++]=pop();
//     }
//     postfix[j]='\0';
    
//     return postfix;

// }
// int main()
// {
//     char infix[] = "a+b*c";
//     push('#');

//     char *postfix = convert(infix);

//     printf("infix = %s \n", infix);
//     printf("outfix =  %s \n ",postfix);
//     return 0;
// }

                                /* other best method */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Stack node structure
struct node {
    char data;
    struct node* next;
};

// Stack top pointer
struct node* top = NULL;

// Function to push an element onto the stack
void push(char x) {
    struct node* t = (struct node*)malloc(sizeof(struct node));
    if (t == NULL) {
        printf("Stack overflow\n");
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

// Function to pop an element from the stack
char pop() {
    struct node* t;
    char x = -1;
    if (top == NULL) {
        printf("Stack underflow\n");
    } else {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

// Function to get the precedence of operators
int pre(char x) {
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    return 0;
}

// Function to check if a character is an operand
int isoperand(char x) {
    return isalnum(x);
}

// Function to convert infix expression to postfix
char* convert(char* infix) {
    int i = 0, j = 0;
    int len = strlen(infix);
    char* postfix = (char*)malloc((len + 2) * sizeof(char));
    
    if (postfix == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    while (infix[i] != '\0') {
        if (isoperand(infix[i])) {
            postfix[j++] = infix[i++];
        } else {
            while (top != NULL && pre(infix[i]) <= pre(top->data)) {
                postfix[j++] = pop();
            }
            push(infix[i++]);
        }
    }

    while (top != NULL) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    
    return postfix;
}

// Main function for testing
int main() {
    char infix[] = "a+b*c-d/e";
    char* postfix = convert(infix);
    printf("Infix: %s\n", infix);
    printf("Postfix: %s\n", postfix);
    free(postfix); // Free allocated memory
    return 0;
}

