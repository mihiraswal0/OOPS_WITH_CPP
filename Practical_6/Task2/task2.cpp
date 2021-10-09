#include<iostream>
using namespace std;
int main(){
cout<<"Enter a string to be checked as palindrome :\n";
string s;
getline(cin,s);
string chk="";
string::reverse_iterator rit;
for(rit=s.rbegin();rit!=s.rend();rit++){
	chk.push_back(*rit);
}
if(s.compare(chk)==0)
cout<<"YES THE GIVEN STRING IS PALINDORME";
else
cout<<"NO THE GIVEN STRING IS NOT PALINDROME";

return 0;
}
