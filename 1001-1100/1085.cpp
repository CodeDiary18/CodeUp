#include<iostream>
#include<iomanip>

int main(){
    double h,b,c,s;
    std::cin>>h>>b>>c>>s;
    long double result;
    result=h*b*c*s;
    result=result/8/1024/1024;
    std::cout<<std::fixed<<std::setprecision(1)<<result<<" MB";
    return 0;
}
