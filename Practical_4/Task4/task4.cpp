#include<iostream>
//using namespace std;


namespace First{
int add(int a,int b){
return a+b;
}
}

namespace Second{
float add(float a,float b){
return a+b;
}
}


int main(){
std::cout<<"Required ans:"<<add(2,2.332)<<std::endl;
return 0;
}
