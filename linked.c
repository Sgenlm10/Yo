#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define CAPACITY 1000
struct stack
{
int data;
struct stack *next;
}
*top;
int size=0;
void push(int element);
int pop();
void main()
{
int choice,data;
printf("------------\n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.size\n");
printf("4.Exit\n");
printf("------------\n");
while(1)
{
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Enter data to push into stack:\n");
scanf("%d",&data);
push(data);
break;
case 2:data=pop();
if (data!=INT_MIN)
printf("Data=>%d\n",data);
break;
case 3:printf("Stack size:%d\n",size);
break;
case 4:printf("Exiting from Application");
exit(0);
break;
default:("Invalid choice");
}
printf("\n\n");
}
}
void push(int element)
{
struct stack *newnode;
if(size>=CAPACITY)
{
printf("Stack overflow\n");
return;
}
newnode=(struct stack*)malloc(sizeof(struct stack));
newnode->data=element;
newnode->next=top;
top=newnode;
size++;
printf("Data pushed to stack\n");
}
int pop()
{
int data=0;
struct stack *topnode;
if(size=0||!top)
{
printf("Stack is empty\n");
return INT_MIN;
}
topnode=top;
data=top->data;
top=top->next;
free(topnode);
size--;
return data;
}
