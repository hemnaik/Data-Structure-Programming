//ROTATION OF THE DOUBLY LINKED LIST//
//DATA STRUCTURE//
//AUTHOR:=HEM.V.NAIK//
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct nodeoflist
{
	   int data;
	   struct nodeoflist *nextlink,*previouslink;
}*head=NULL,*ptr=NULL,*current=NULL,*start=NULL;
void createlist(void);
void traverselist(struct nodeoflist *temp);
void rotatelist(void);
int choice,pos,key;
int main()
{
	   for(;;)
	   {
	   	     std::cout<<"1--->CREATE LIST"<<endl;
	   	     std::cout<<"2--->TRAVERSE LIST"<<endl;
	   	     std::cout<<"3--->ROTATE LIST"<<endl;
	   	     std::cout<<"4--->EXIT"<<endl;
	   	     std::cout<<"ENTER CHOICE:";
	   	     std::cin>>choice;
	   	     switch(choice)
	   	     {
	   	     	 case 1:
	   	     	 	createlist();
	   	     	 	break;
	   	     	 case 2:
	   	     	 	if(head==NULL)
	   	     	 	{
	   	     	 		 std::cout<<"LIST EMPTY"<<endl;
					}
					else
					{
						 std::cout<<"TRAVERSE"<<endl;
						 traverselist(head);
					}
					break;
				 case 3:
					rotatelist();
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
void createlist(void)
{
	   ptr=(struct nodeoflist*)malloc(1*sizeof(struct nodeoflist));
	   std::cout<<"ENTER DATA:";
	   std::cin>>ptr->data;
	   if(head==NULL)
	   {
	   	   head=current=ptr;
	   	   current->nextlink=current->previouslink=NULL;
	   }
	   else
	   {
	   	   current->nextlink=ptr;
           ptr->previouslink=current;
	   	   current=ptr;
	   	   ptr->nextlink=NULL;
	   }
}
void traverselist(struct nodeoflist *temp)
{
	  if(temp!=NULL)
	  {
	  	   std::cout<<temp->data<<endl;
	  	   temp=temp->nextlink;
	  	   traverselist(temp);
	  }
}
void rotatelist(void)
{
	  struct nodeoflist *temp1;
	  if(head==NULL)
	  {
	  	   std::cout<<"LIST EMPTY"<<endl;
	  }
	  else
	  {
	  	    std::cout<<"ENTER POSITION FOR ROTATION:";
	  	    std::cin>>pos;
	  	    key=1;
	  	   for(temp1=head;temp1->nextlink!=NULL;temp1=temp1->nextlink);
	  	   while(head!=NULL)
	  	   {
	  	   	    if((pos+1)==key)
	  	   	    {
	  	   	    	 head->previouslink=temp1->nextlink=NULL;
	  	   	    	 std::cout<<"ROTATED LIST"<<endl;
	  	   	    	 traverselist(head);
	  	   	    	 break;
			    }
			    else
			    {
			    	 start=head;
			    	 temp1->nextlink=start;
			    	 start->previouslink=temp1;
			    	 temp1=start;
			    	 head=head->nextlink;
			    	 head->previouslink=NULL;
			    	 key=key+1;
				}
		   }
		   
	  }
}











