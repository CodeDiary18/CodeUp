#include<iostream>

int main(){
    int n;
    int i=1;
    int sum=0;
    std::cin>>n;
    while(1){
        sum+=i;
        if(sum>=n){
            std::cout<<i;
            break;
        }
        i++;
    }
    return 0;
}
