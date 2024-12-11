#include<iostream>
#include<algorithm>
using namespace std;

// void swap(int arr[],int i,int j){
//     int tmp =arr[i];
//         arr[i]=arr[j];
//         arr[j]=tmp;
// }
//n為樹的節點
void heap(int tree[], int i,int n){
    if(i>=n) return ;
    int c1 =2*i+1;
    int c2 =2*i+2;
    int max=i;
    // int parent=(i-1)/2;
    if (c1<n && tree[max]<tree[c1]){
        max=c1;
    }
    if(c2<n && tree[max]<tree[c2]){
        max=c2;
    }
    if(max!=i){
    swap(tree[max],tree[i]);
    heap(tree,max,n);
    }
}
//下往上
void bulid_heap(int tree[],int n){
    int last=n-1;
    int parent =(last-1)/2;
    for(int i=parent;i>=0;i--){
        heap(tree,i,n);
    }
}

void sort_heap(int tree[],int n){
    bulid_heap(tree,n);
    for(int i=n-1;i>=0;i--){
        swap(tree[0],tree[i]);
        heap(tree,0,i);
    }
}



int main(){
    int ary[]={2,5,3,1,10,4,6,7};
    int n=sizeof(ary)/sizeof(ary[0]);
    sort_heap(ary,n);
    for (int i=0; i<n;i++){
        cout<<ary[i]<<" ";
    }
}

