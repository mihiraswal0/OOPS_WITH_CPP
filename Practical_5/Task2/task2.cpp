#include<iostream>
using namespace std;
int main(){
int a=5;
short b=10;
long c=12;
float d=13.45f;
double e=3232.332;
char f='a';
bool g=true;
cout<<"Size of Int:"<<sizeof(int)<<endl;
cout<<"Int: "<<a<<endl;
cout<<"Size of Short:"<<sizeof(short)<<endl;
cout<<"short: "<<b<<endl;
cout<<"Size of Long:"<<sizeof(long)<<endl;
cout<<"Long: "<<c<<endl;
cout<<"Size of Float:"<<sizeof(float)<<endl;
cout<<"Float: "<<d<<endl;
cout<<"Size of Double:"<<sizeof(double)<<endl;
cout<<"Double: "<<e<<endl;
cout<<"Size of char:"<<sizeof(char)<<endl;
cout<<"char: "<<f<<endl;
cout<<"Size of boolean:"<<sizeof(bool)<<endl;
cout<<"boolean: "<<g<<endl;
return 0;
}
