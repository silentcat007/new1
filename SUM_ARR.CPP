#include <iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i , j , r , c ,  a[10][10] , b[10][10] ,sum[10][10] ;
cout<<"enter the row and column of matrix";
cin>>r>>c;
cout<<"enter the element of first matrix";
for(i = 0 ; i< r ; i++)
	for(j = 0 ; j< c ; j++){
	cin>>a[i][j];
	}
cout<<"enter the element of second matrix";
for(i = 0 ; i< r ; i++)
	for(j = 0 ; j< c ; j++){
	cin>>b[i][j];
	}
for(i = 0 ; i< r ; i++)
	for(j = 0 ; j< c ; j++){
	sum[i][j] = a[i][j] + b[i][j];
	}
cout<<"sum of ARRAY are\n";
for(i = 0 ; i< r ; i++){
	for(j = 0 ; j< c ; j++){
       cout<<sum[i][j]<<" ";

       }
       cout<<"\n";
       }


getch();
}


