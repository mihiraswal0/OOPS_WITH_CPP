#include<iostream>
#include<string.h>
using namespace std;

int main(){
cout<<"Enter a string\n";
string s;
cin>>s;
cout<<"String before mutation :"<<s<<"\n";
s[0]='j';
cout<<"String after mutation: "<<s<<"\n";

return 0;
}
