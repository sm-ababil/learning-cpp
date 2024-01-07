#include <iostream>

int main(){
    int x = 8;
    int *p;
    p = &x;
    // *(p+1) = 12;
    // *p = 12;
    //pointer = &x;
    //std::cout<<*pointer<< '\n';
    // std::cout<<x<<'\n';
    std::cout<<*p<<'\n';
    // p+=1;
    // std::cout<<p<<'\n';
    // std::cout<<*p<<'\n';
    // std::cout<<x;
    // std::cout<<*(p+1)<<'\n';

    return 0;
}