#include<iostream>
#include<string.h>
using namespace std;
void rev(string s)
{

for(int i=s.length()-1;i>=0;i--)
	cout<<s[i];
	cout<<"\n";
}
int main(){
cout<<"Enter a string to be reversed :\n";
string s;
getline(cin,s);
string chk="";

cout<<"REverse string using method: ";
rev(s);
cout<<"Reverse string using reverse_ilterator: ";
string::reverse_iterator rit;
for(rit=s.rbegin();rit!=s.rend();rit++){
	cout<<*rit;
}

return 0;
}
