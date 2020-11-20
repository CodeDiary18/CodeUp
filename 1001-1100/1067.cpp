#include<iostream>

int main(){
    int a;
    std::cin>>a;
    if(a<0) std::cout<<"minus\n";
    else std::cout<<"plus\n";
    if(a%2==0) std::cout<<"even";
    else std::cout<<"odd";
    return 0;
}
