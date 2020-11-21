#include<iostream>

int main(){
    int arr[19][19]={0,};
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            std::cin>>arr[i][j];
        }
    }
    int n;
    int x,y;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>x>>y;
        x=x-1;
        y=y-1;
        for(int j=0;j<19;j++){
            if(arr[x][j]==1) arr[x][j]=0;
            else arr[x][j]=1;
        }
        for(int j=0;j<19;j++){
            if(arr[j][y]==1) arr[j][y]=0;
            else arr[j][y]=1;
        }
    }
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}
