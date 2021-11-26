#include <iostream>
int main(){

int fib =0;
std::cin>> fib;

int a = 0;
int k = 1;
for(int i=0 ; i <= fib; ++i){
    a=a+k;
std::cout<<a<<std::endl;
    k=a+k;
std::cout<<k<<std::endl;
}






return 0;}
