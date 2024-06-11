#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void InsertionSort(vector<int>&v){
    int n=v.size();
    //0 se start nhi krnge
    for(int i=1; i<n; i++){
        int key=v[i];
        int j=i-1;
        //move elements of arr[0,,,,,i-1] that are greater than key to one position
        //ahead of their current postion
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;    //insertion
    }
}
int main(){
    vector<int>v={1,2,3,4,5};
    InsertionSort(v);
    print(v);
    return 0;
}