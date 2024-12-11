#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int  pivot(vector<int>& v,int low,int high){
    high=high-1;
    int i;
    int left=low+1;  
    int pivate=v[low];
    for( i=low;i<=high;i++){
        if(pivate>v[i]){
            swap(v[i],v[left]);
            left++;
        }
    }
    swap(v[left-1],v[low]);
    return left-1;
}



void quick_sort(vector<int>& v,int low,int high){
     if (low < high){

    int a=pivot(v,low, high);
    quick_sort(v, low, a - 1);       
    quick_sort(v, a + 1, high);
     }
}


//n*n
int main(){
    vector<int> v={6,2,1,5,4,7,8,3};
    int high=v.size();
    quick_sort(v,0,high);
    for(auto i :v ){
    cout<<i<<" ";
    }
}