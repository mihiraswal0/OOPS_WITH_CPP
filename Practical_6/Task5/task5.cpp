#include<iostream>
#include<string.h>
using namespace std;

int main(){
cout<<"ENter two string to be compared\n";
string a,b;
cin>>a>>b;
int x=a.compare(b);
if(x<0)
cout<<"A is smaller than B"<<"\n";
else if(x>0)
cout<<"A is greater than B"<<"\n";
else if(x==0)
cout<<"A is equal to B"<<"\n";


return 0;
}
