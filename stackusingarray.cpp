//STACK IMPLEMENTATION USING ARRAY//
//DATA STRUCTURE//
#include<iostream>
#include<stdlib.h>
#define max 5
using namespace std;
int top=-1,a[max],search,flag,val,i,choice;
void pushinstack(void)
{
	  if(top==max-1)
	  {
	  	  std::cout<<"STACK FULL"<<endl;
	  }
	  else
	  {
	  	  std::cout<<"ENTER DATA:";
	  	  std::cin>>val;
	  	  top++;
	  	  a[top]=val;
	  }
}
void popinstack(void)
{
	  if(top==-1)
	  {
	  	   std::cout<<"STACK EMPTY"<<endl;
	  }
	  else
	  {
	  	   std::cout<<"DELETE DATA="<<a[top]<<endl;
	  	   top--;
	  }
}
void display(void)
{
	   if(top==-1)
	   {
	   	    std::cout<<"NO DISPLAY"<<endl;
	   }
	   else
	   {
	   	    std::cout<<"DISPLAY"<<endl;
	   	    for(i=top;i>=0;i--)
	   	    {
	   	    	  std::cout<<a[i]<<endl;
		    }
	   }
}
void searching(void)
{
	   if(top==-1)
	   {
	   	    std::cout<<"SEARCH NOT POSSIBLE"<<endl;
	   }
	   else
	   {
	   	    std::cout<<"ENTER SEARCH:";
	   	    std::cin>>search;
	   	    flag=0;
	   	    for(i=0;i<=top;i++)
	   	    {
	   	    	if(a[i]==search)
				   {
				   	  flag=1;
				   	  break;
					} 
		    }
		    if(flag==1)
		    std::cout<<"DATA IS AT POSITION:"<<i+1<<endl;
		    else
		    std::cout<<"DATA NOT FOUND"<<endl;
	   }
}
int main()
{
	   for(;;)
	   {
	   	    std::cout<<"1--->PUSH IN STACK"<<endl;
	   	    std::cout<<"2--->POP IN STACK"<<endl;
	   	    std::cout<<"3--->DISPLAY"<<endl;
	   	    std::cout<<"4--->SEARCHING"<<endl;
	   	    std::cout<<"5--->SIZE OF STACK"<<endl;
	   	    std::cout<<"6--->EXIT"<<endl;
	   	    std::cout<<"ENTER CHOICE:";
	   	    std::cin>>choice;
	   	    switch(choice)
	   	    {
	   	    	  case 1:
	   	    	  pushinstack();
				  break;
				  case 2:
				  popinstack();
				  break;
				  case 3:
				  display();
				  break;
				  case 4:
				  searching();
				  break;
				  case 5:
				  std::cout<<"SIZE OF STACK="<<max<<endl;
				  std::cout<<"SIZE OCCUPIED="<<top+1<<endl;
				  break;
				  case 6:
				  exit(1);
				  default:
				  std::cout<<"INVALID CHOICE!!!"<<endl;
				  	
			}
	   }
	   return 0;
}
