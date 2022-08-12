#include <iostream.h>
#include<conio.h>

void main(){
clrscr();
int i , a[5] , b[5] , c[5] , n;
cout<< "enter the number of values";
cin>>n;
for(i=0 ; i<n ; i++){
cin>>a[i];
if(a[i]%2 == 0){
	b[i]=a[i];
	//cout<<"array of b"<<b[i];
	}
else{
	c[i]=a[i];
       //	cout<<"array of c"<<c[i];
}
}
cout<<"even:";
for(i=0 ; i<n ; i++){
 if(a[i]==b[i]){
 cout<<b[i]<<" ";
// cout<<"\n" <<i;
 }
}
cout<<"\nodd";
for(i=0 ; i<n ; i++){
 if(a[i]==c[i])
 cout<<"  "<<c[i];
}
getch();
}

