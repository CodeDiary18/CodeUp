#include<iostream>

int main(){
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0) continue;
        std::cout<<i<<" ";
    }
    return 0;
}
