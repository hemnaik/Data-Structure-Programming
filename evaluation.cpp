#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
long int top=-1,i,num,num1,num2;
char s[20];
int stack[20];
void push(int x)
{
	 top++;
	 stack[top]=x;
}
int pop(void)
{
	 return stack[top--];
}
int main()
{
	  std::cout<<"ENTER STRING:";
	  std::cin>>s;
	  for(i=0;i<strlen(s);i++)
	  {
	  	     if(s[i]>=48&&s[i]<=57)
			   {
			   	   num=s[i]-48;
			   	   push(num);
		       } 
		       else
		       {
		       	   num2=pop();
		       	   num1=pop();
		       	   switch(s[i])
		       	   {
		       	   	    case '+':
		       	   	    num=num1+num2;
						push(num);	
						break;
						case '-':
		       	   	    num=num1-num2;
						push(num);
						break;
						case '/':
		       	   	    num=num1/num2;
						push(num);
						break;
						case '*':
		       	   	    num=num1*num2;
						push(num);
						break;
						case '^':
		       	   	    num=num1^num2;
						push(num);
				   }
			   }
		       
	  }
	  std::cout<<"EVALUATED EXPRESSION="<<pop()<<endl;
	  return 0;
}
















