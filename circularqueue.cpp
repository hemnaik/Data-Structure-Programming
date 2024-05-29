#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define size 5
using namespace std;
int main()
{
	  int choice,queue[size],front=-1,rear=-1,i,val,element;
	  for(;;)
	  {
	  	   cout<<"1-->ENQUEUE"<<endl;
	  	   cout<<"2-->DEQUEUE"<<endl;
	  	   cout<<"3-->TRAVERSE"<<endl;
	  	   cout<<"4-->EXIT"<<endl;
	  	   cout<<"ENTER CHOICE:";
	  	   cin>>choice;
	  	   switch(choice)
	  	   {
	  	   	   case 1:
	  	   	   	if((front==0&&rear==size-1)||(rear+1==front))
	  	   	   	{
	  	   	   		cout<<"CIRCULAR QUEUE FULL"<<endl;
				}
				else
				{
					 if(front==-1)
					 {
					 	  front=0;
					 }
					 rear=(rear+1)%size;
					 cout<<"ENTER VAL:";
					 cin>>val;
					 queue[rear]=val;
				}
				break;
				case 2:
				if(front==-1)
				{
				     std::cout<<"CIRCULAR QUEUE EMPTY"<<endl;	  
				}
				else
				{
					  element=queue[front];
					  std::cout<<"DEQUEUE DATA:"<<element<<endl;
					  if(front==rear)
					  {
					  	  front=rear=0;
					  }
					  else
					  {
					  	  front=(front+1)%size;
					  }
				}
				break;
				case 3:
				if(front==-1)
				{
					  std::cout<<"CIRCULAR QUEUE EMPTY"<<endl;
				}
				else
				{
					  std::cout<<"QUEUE DATA"<<endl;
					  for(i=front;i!=rear;i=(i+1)%size)
					  {
					  	   std::cout<<queue[i]<<endl;
					  }
					  std::cout<<queue[i]<<endl;
				}
				break;
				case 4:
					exit(1);
				default:
				 std::cout<<"INVALID CHOICE!!!"<<endl;
		   }
	  }
	  getch();
	  return 0;
}
