/* EVALUTE GIVE EXPRESSION INTO POSTFIX EXPRESSION*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int stack[20];
int top=-1;
void push(int item)
{	
	if(top=MAX-1)
	{	printf("stack is over flow");
		exit(0);
	}
	stack[++top]=item;
}
int pop()
{ 
	int item;
	if(top==-1)
		printf("stack is underflow");
		exit(0);
	item=stack[top];	
	top--;
	return item;	
}		
int isEmpty()
{
	if(top==-1) return 1;
	else return 0;
}
int isOperand(char ch)
{
	if(ch>='0' && ch<='9') return 1;
	else return 0;
}
int main(){
	char postfix[20],ch;
	int op1,op2,i,r;
	printf("Enter the postfix expression:\n");
	scanf("%s",postfix);
	for(i=0;postfix[i]='\0';i++);
	{
		ch=postfix[i];
		if(isOperand) push(ch-'0');
		else{
			op2=pop();
			op1=pop();
			switch(ch)
			{ 
				case'+':r=op1+op2;
					break;
				case'-':r=op1-op2;
					break;
				case'*':r=op1*op2;
					break;
				case'/':r=op1/op2;
					break;
				case'%':r=op1%op2;
					break;
			}
			push(r);
		}
	}
	r=pop();
	if(!isEmpty()) printf("invalid postfix exp\n");
	else printf("result=%d\n",r);
	return 0;
}
					
								
							
