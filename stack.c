#include<stdio.h>
#define MAXSIZE 5
struct stack
{
int top;
int stk[MAXSIZE];
};
typedef struct stack STACK;
STACK s;
void push(void);
int pop(void);
void display(void);
void main()
{
int ch;
int option=1;
s.top=-1;
printf("Stack operation:");
while(option)
{
printf("............\n");
printf("1.push\n2.pop\n3.display\n4.exit");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:return;
}
fflush(stdin);
printf("Do you want to continue:(0/1)");
scanf("%d",&option);
}
}
void push()
{
int num;
if(s.top==(MAXSIZE-1))
{
printf("Stack is full");
return;
}
else
{
printf("Enter the element to push into the stack");
scanf("%d",&num);
s.top=s.top+1;
s.stk[s.top]=num;
}
return;
}
int pop()
{
int num;
if(s.top==-1)
{
printf("stack is empty");
return(s.top);
}
else
{
num=s.stk[s.top];
printf("Popped elements is:%d",s.stk[s.top]);
s.top=s.top-1;
}
return(num);
}
void display()
{
int i;
if(s.top==-1)
{
printf("stack is empty");
return;
}
else
{
printf("Stack elements are:");
for(i=s.top;i>=0;i++)
{
printf("%d",s.stk[i]);
}
printf("\n");
}
}
