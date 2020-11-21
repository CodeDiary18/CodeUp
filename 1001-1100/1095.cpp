#include<iostream>

int main(){
    int n,i;
    std::cin>>n;
    int min=24;
    int arr[10000]={0,};
    for(i=0;i<n;i++){
        std::cin>>arr[i];
        if(min>arr[i]){
            min=arr[i];
        }
    }
    std::cout<<min;
    return 0;
}
