#include<iostream>
using namespace std;
int prime(int n){
if(n==2)
return 0;
for(int i=2;i*i<=n;i++)
{
if(n%i==0)
return 1;
}
return 0;
}

int main(){
int n;
cout<<"ENTER A NO TO CHCK WHETHER IT IS PRIME\n";
cin>>n;
if(prime(n)==1)
cout<<"NO THE NUMBER:"<<n<<" IS NOT A PRIME";
else
cout<<"YES THE NUMVER "<<n<<" IS A PRIME";
return 0;
}
