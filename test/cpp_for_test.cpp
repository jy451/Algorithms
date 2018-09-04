#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void for_test(int *x,int n){
    for(int i=0;i<n;i++){
        cout<<x[i]<<endl;
    };
}

void for_test2(int x[],int n){
    for(int i=0;i<n;i++){
        cout<<x[i]<<endl;
    };
}

void for_test3(int x[],int n){
    vector<int> arr;
    for(int i=0;i<n;i++){
        arr.push_back(x[i]);
    };
    for (auto i:arr){
        cout<<i<<endl;
    };
}
void for_test4(vector<int> &arr,int n){
    for (auto i:arr){
        cout<<i<<endl;
    };
}
int main(){
    int x[5]={1,2,3,4,5};
    cout<<sizeof(x)<<endl;
    cout<<*(max_element(x,x+5))<<endl;
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(22);
    cout<<arr.size()<<endl;
    // for (auto i:x){
    //     cout<<i<<endl;
    // };
    for_test4(arr,5);
};