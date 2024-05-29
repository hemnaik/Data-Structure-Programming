//BINARY SEARCH//
//DATA STRUCTURE//
#include<iostream>
#include<conio.h>
using namespace std;
int a[20],search,i,mid,first,last,n,flag;
void binarysearch(int n,int a[20],int search)
{
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
    	if(a[mid]>search)
    	{
    		  last=mid-1;
		}
    	else if(a[mid]==search)
        {
        	  flag=1;
        	  break;
		}
		else
		{
			  first=mid+1;
		}
		mid=(first+last)/2;
	}
	if(flag==1)
    std::cout<<"DATA IS AT POSITION:"<<mid+1<<endl;
	else
	std::cout<<"DATA NOT FOUND"<<endl;
  
}
int main()
{
	   std::cout<<"ENTER N:";
	   std::cin>>n;
	   for(i=0;i<n;i++)
	   {
	   	   std::cout<<"ENTER A["<<i<<"]:";
	   	   std::cin>>a[i];
	   }
	   std::cout<<"ENTER SEARCH:";
	   std::cin>>search;
	   binarysearch(n,a,search);
	   getch();
	   return 0;
}
