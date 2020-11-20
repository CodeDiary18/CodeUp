#include<iostream>

int main(){
    int n;
    int arr[1024]={0,};
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<"\n";
    }
    return 0;
}
