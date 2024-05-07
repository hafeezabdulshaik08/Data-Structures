#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],top=-1;
void push(int);
void pop();
void display();
int main(){
	int choice,item;
	while(1)
	{
		printf("\n MENU \n");
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.display\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :printf("Enter the element \n");
				scanf("%d",&item);
				push(item);
				break;
			case 2 :pop();
				break;
			case 3 :display();
				break;
			case 4 :exit(0);
			default:printf("invalid choice\n");
		}
	}
}
void push(int item){
	if(top=MAX-1) printf("Stack is over flow\n");
	else{
		stack[++top]=item;
	}
	
}
void pop()
{
	if(top=-1) printf("stack is under flow");
	else
		printf("ELement deleted:%d\n",stack[top--]);
}
void dispaly()
{
	int i;
	if(top==-1) printf("stack is empty");
	else{
		printf("stack content");
		for(i=top;i>=0;i--)
			printf("%d",stack[i]);
	}		
}												
