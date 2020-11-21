#include<iostream>

int main(){
    long long int a,m,d,n;
    std::cin>>a>>m>>d>>n;
    long long int result=a;
    for(int i=1;i<n;i++){
        result=result*m+d;
    }
    std::cout<<result;
    return 0;
}
