#include <iostream>
using namespace std;
#include<unordered_map>  
unordered_map<int,int> umap;

int paths(int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else if(n==3){
        return 6;
    }
    else{
        if (umap.count(n)==0){
            umap[n]=paths(n-1)+paths(n-2)+paths(n-3);
            return  umap[n];
        }
        else{
            return umap[n];
        } 
    }
}
int main(){
    cout<<paths(1)<<endl;
    cout<<paths(2)<<endl;
    cout<<paths(3)<<endl;
    cout<<paths(4)<<endl;
}