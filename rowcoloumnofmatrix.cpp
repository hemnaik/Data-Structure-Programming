#include <iostream>
#include<conio.h>
using namespace std;
int i,j,r,c,sum1,sum2,a[10][10];
void sumofrow(int i,int j,int r,int c,int sum1,int a[10][10])
{
	    if(i<r)
	    {
	    	   if(j<c)
	    	   {
	    	   	     sum1=sum1+a[i][j];
	    	   	     j++;
	    	   	     sumofrow(i,j,r,c,sum1,a);
	    	   	     return;
			   }
			   std::cout<<"SUM OF ROW"<<i+1<<" "<<"TOTAL="<<sum1<<endl;
			   j=0;
			   sum1=0;
			   i++;
			   sumofrow(i,j,r,c,sum1,a);
		}
}
void sumofcoloumn(int i,int j,int r,int c,int sum2,int a[10][10])
{
	   if(i<r)
	   {
	   	     if(j<c)
	   	     {
	   	     	  sum2=sum2+a[j][i];
	   	     	  j++;
	   	     	  sumofcoloumn(i,j,r,c,sum2,a);
	   	     	  return;
			 }
			  std::cout<<"SUM OF COLOUMN"<<i+1<<" "<<"TOTAL="<<sum2<<endl;
			  sum2=0;
			  j=0;
			  i++;
			  sumofcoloumn(i,j,r,c,sum2,a);
	   }
}
int main()
{
	   cout<<"ENTER ROW & COLOUMN:";
	   cin>>r>>c;
	   for(i=0;i<r;i++)
	   {
	   	      for(j=0;j<c;j++)
	   	      {
	   	      	   std::cout<<"ENTER A["<<i<<"]["<<j<<"]:";
	   	      	   std::cin>>a[i][j];
			  }
	   }
	   std::cout<<"MATRIX"<<endl;
	   for(i=0;i<r;i++)
	   {
	   	      for(j=0;j<c;j++)
	   	      {
	   	      	   std::cout<<a[i][j]<<"\t";
	   	      }
	   	   std::cout<<endl;
       }
       i=j=sum1=0;
       sumofrow(i,j,r,c,sum1,a);
       i=j=sum2=0;
       sumofcoloumn(i,j,r,c,sum2,a);
       getch();
       return 0;
}



















