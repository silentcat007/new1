#include <iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i , j , n , arr[100] ;
cout<<"enter the number of elements";
cin>>n;
cout<<"enter the elements of array";
for(i=0 ; i<n ; i++){
cin>> arr[i];
}
for(i=0 ; i<n ; i++){
 if(arr[0] < arr[i]){
 arr[0] = arr[i];
 }
 }
cout<<"the largest value is"<<arr[0];
getch();
}


