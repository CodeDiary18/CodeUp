#include<iostream>
#include<iomanip>

int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    int sum=a+b+c;
    std::cout<<sum<<"\n";
    std::cout<<std::fixed<<std::setprecision(1)<<
    (double)sum/3;
    return 0;
}
