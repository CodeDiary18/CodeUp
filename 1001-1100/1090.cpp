#include<iostream>

int main(){
    long long int a,r,n;
    std::cin>>a>>r>>n;
    long long int result=a;
    for(int i=1;i<n;i++){
        result*=r;
    }
    std::cout<<result;
    return 0;
}
