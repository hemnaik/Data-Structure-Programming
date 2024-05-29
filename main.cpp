#include <iostream>
#include<conio.h>
using namespace std;
int i,j,r,c,temp,mid;
int a[5][5];
void printmatrix(int r,int c,int a[5][5]);
void sortmatrix(int r,int c,int a[5][5]);
int main()
{
    cout<<"ENTER ROW & COLOUMN:";
    cin>>r>>c;
    for(i=0;i<r;i++)
    {
          for(j=0;j<c;j++)
          {
               cout<<"ENTER A["<<i<<"]["<<j<<"]:";
               cin>>a[i][j];
          }
    }
    cout<<"MATRIX"<<endl;
    printmatrix(r,c,a);
    sortmatrix(r,c,a);
    return 0;
}
    void sortmatrix(int r,int c,int a[5][5])
    {
         for(i=0;i<r;i++)
         {
             for(j=0;j<c;j++)
             {
                   for(int n=0;n<r;n++)
                   {

                       for(int m=0;m<c;m++)
                       {

                         if(a[i][j]<a[n][m])
                         {
                       temp=a[i][j];
                       a[i][j]=a[n][m];
                       a[n][m]=temp;
                         }
                       }
                   }

                }
             }
         cout<<"SORTED MATRIX"<<endl;
         printmatrix(r,c,a);

    }
    void printmatrix(int r,int c,int a[5][5])
    {
         for(i=0;i<r;i++)
         {

               for(j=0;j<c;j++)
               {
                     cout<<a[i][j]<<"\t";
               }
               cout<<endl;
         }
    }
