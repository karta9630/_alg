#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void swap(int arr[],int i,int j){
//     int tmp =arr[i];
//         arr[i]=arr[j];
//         arr[j]=tmp;
// }
//n為樹的節點，i為父節點，要找子節點
void heap(vector<int>& v, int i,int n){
    if(i>=n) return ;
    int c1 =2*i+1;//第一子節點公式
    int c2 =2*i+2;//第二子節點公式
    int max=i;//設為最大父節點來判斷
    if (c1<n && v[max]<v[c1]){
        max=c1;
    }
    if(c2<n && v[max]<v[c2]){
        max=c2;
    }
    if(max!=i){
    swap(v[max],v[i]);
    heap(v,max,n);
    }
}
//max heap由下往上做heap
void bulid_heap(vector<int>& v,int n){
    int last=n-1;
    int parent =(last-1)/2;//父節點公式
    for(int i=parent;i>=0;i--){//從最後一個的父節點開始heap
        heap(v,i,n);
    }
}

void sort_heap(vector<int>& v,int n){
    bulid_heap(v,n);
    for(int i=n-1;i>=0;i--){
        swap(v[0],v[i]);
        heap(v,0,i);
    }
}



int main(){
    vector<int> v={2,3,6,5,4,1,7};
    vector<int> v1={2,3,6,5,4,1,7};
    int n=v.size();
    sort_heap(v1,n);
    bulid_heap(v,n);
    for (auto i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    for (auto i:v1){
        cout<<i<<" ";
    }
}

