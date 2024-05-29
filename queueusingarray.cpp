//QUEUE IMPLEMENTATION USINF LINKED LIST//
//DATA STRUCTURE//
//AUTHRO:=HEM.V.NAIK//
#include <iostream>
#include<conio.h>
#include<stdlib.h>
#define maxofqueue 5
using namespace std;
int a[maxofqueue],val,search,i,choice,front=-1,rear=-1,flag=0;
void enqueue(void);
void dequeue(void);
void traversequeue(int front,int rear,int a[maxofqueue]);
void searchinqueue(void);
int main()
{
	    for(;;)
	    {
	    	   std::cout<<"1--->ENQUEUE"<<endl;
	    	   std::cout<<"2--->DEQUEUE"<<endl;
	    	   std::cout<<"3--->TRAVERSE"<<endl;
	    	   std::cout<<"4--->SEARCHING"<<endl;
	    	   std::cout<<"5--->SIZE OF QUEUE"<<endl;
	    	   std::cout<<"6--->EXIT"<<endl;
	    	   std::cout<<"ENTER CHOICE:"<<endl;
	    	   std::cin>>choice;
	    	   switch(choice)
	    	   {
	    	   	    case 1:
	    	   	    enqueue();
	    	   	    break;
	    	   	    case 2:
	    	   	    dequeue();
	    	   	    break;
	    	   	    case 3:
	    	   	    if(front==rear)
	    	   	    {
	    	   	    	std::cout<<"NO DISPLAY"<<endl;
					}
					else
				    {
				    	std::cout<<"DISPLAY"<<endl;
				    	traversequeue(front,rear,a);
					}
	    	   	    break;
	    	   	    case 4:
	    	   	    searchinqueue();
	    	   	    break;
	    	   	    case 5:
	    	   	    std::cout<<"MAXIMUM SIZE OF QUEUE="<<maxofqueue<<endl;
	    	   	    std::cout<<"SIZE OCCUPIED="<<rear-front<<endl;
	    	   	    break;
	    	   	    case 6:
	    	   	    exit(1);
	    	   	    break;
			   }
		}
		getch();
		return 0;
}
void enqueue(void)
{
	   if(rear==maxofqueue-1)
	   {
	   	    if(rear==front)
	   	    {
	   	        rear=front=-1;
				std::cout<<"PRESS 1 AGAIN"<<endl;	
			}
			else
			{
				 std::cout<<"QUEUE FULL"<<endl;
			}
	   }
	   else
	   {
	   	    std::cout<<"ENTER VAL:";
	   	    std::cin>>val;
	   	    rear++;
	   	    a[rear]=val;
	   }
}
void dequeue(void)
{
	  if(front==rear)
	  {
	  	 std::cout<<"QUEUE EMPTY"<<endl;
	  }
	  else
	  {
	  	   front=front+1;
	  	   std::cout<<"DELETE VAL="<<a[front]<<endl;
	  }
}
void traversequeue(int front,int rear,int a[maxofqueue])
{
	   if(front+1<=rear)
	   {
	   	   std::cout<<a[front+1]<<endl;
	   	   front++;
	   	   traversequeue(front,rear,a);
	   }
}
void searchinqueue(void)
{
	   if(front==rear)
	   {
	   	    std::cout<<"SEARCH NOT POSSIBLE"<<endl;
	   }
	   else
	   {
	   	    std::cout<<"ENTER SEARCH:";
	   	    std::cin>>search;
	   	    flag=0;
	   	    for(i=front+1;i<=rear;i++)
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













