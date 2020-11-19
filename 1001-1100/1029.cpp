#include<iostream>
#include<iomanip>
int main(){
    double d;
    std::cin>>d;
    std::cout<<std::fixed;
    std::cout.precision(11);
    std::cout<<d;
    return 0;
}
