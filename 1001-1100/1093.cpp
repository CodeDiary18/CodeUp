#include<iostream>

int main(){
    int n;
    std::cin>>n;
    int arr[24]={0,};
    int temp;
    for(int i=0;i<n;i++){
        std::cin>>temp;
        arr[temp]=arr[temp]+1;
    }
    for(int i=1;i<=23;i++){
        std::cout<<arr[i]<<" ";
    }
    
    return 0;
}
