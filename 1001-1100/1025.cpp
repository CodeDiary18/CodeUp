#include<iostream>

int main(){
    int a;
    std::cin>>a;
    int b1,b2,b3,b4,b5;
    b1=a/10000;
    a=a%10000;
    b2=a/1000;
    a=a%1000;
    b3=a/100;
    a=a%100;
    b4=a/10;
    a=a%10;
    b5=a;
    std::cout<<"["<<b1*10000<<"]"<<std::endl;
    std::cout<<"["<<b2*1000<<"]"<<std::endl;
    std::cout<<"["<<b3*100<<"]"<<std::endl;
    std::cout<<"["<<b4*10<<"]"<<std::endl;
    std::cout<<"["<<b5<<"]"<<std::endl;
}
