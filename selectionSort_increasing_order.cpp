
  // in increasing order

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void SelectionSort(vector<int>&v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        int midIndex=i;
        for(int j=i+1; j<n; j++){
            if(v[j]<v[midIndex]){
                midIndex=j;
            }
        }
        swap(v[i], v[midIndex]);
    }
}
int main(){
    vector<int>v={-9,-5,-3,12,3,4,5,8,20};
    SelectionSort(v);
    print(v);
    return 0;
}