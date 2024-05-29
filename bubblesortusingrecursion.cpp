//BUBBLE SORT USING RECURSION//
//DATA STRUCTURE//
//AUTHOR:HEM.V.NAIK//
#include <iostream>
#include<conio.h>
using namespace std;
int i,j,n,a[20],temp;
void bubblesort(int n,int a[20]);
int main()
{
	  std::cout<<"ENTER N:";
	  std::cin>>n;
	  for(i=0;i<n;i++)
	  {
	  	  std::cout<<"ENTER A["<<i<<"]:";
	  	  std::cin>>a[i];
	  }
	  bubblesort(n,a);
	  getch();
	  return 0;
}
void bubblesort(int n,int a[20])
{
	   for(i=0;i<n;i++)
	   {
	       for(j=i+1;j<n;j++)
	       {
		   
	       	   if(a[i]<a[j])
	       	   {
	       	   	  temp=a[i];
	       	   	  a[i]=a[j];
	       	   	  a[j]=temp;
		       }
		   }
	   }
	   
	 std::cout<<"SORTED ELEMENTS"<<endl;
	 for(i=0;i<n;i++)
	 {
		 std::cout<<a[i]<<endl;
	 }
}
