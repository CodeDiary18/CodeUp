#include<iostream>
#include<iomanip>

int main(){
    float r,g,b;
    std::cin>>r>>g>>b;
    long double result=r*g*b/8/1024/1024;
    std::cout<<std::fixed<<std::setprecision(2)<<result<<" MB";
    
    return 0;
}
