#include<iostream>

int main(){
    int a;
    std::cin>>a;
    int sum=0;
    for(int i=1;i<=a;i++){
        if(i%2==0) sum+=i;
    }
    std::cout<<sum;
    return 0;
}
