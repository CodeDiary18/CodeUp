#include<iostream>

int main(){
    int arr[19][19]={0,};
    int n;
    std::cin>>n;
    int x,y;
    for(int i=0;i<n;i++){
        std::cin>>x>>y;
        arr[x-1][y-1]=1;
    }
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}
