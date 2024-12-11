#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//pivot為判斷值 若小於pivot 往左邊移動
int  pivot(vector<int>& v,int low,int high){
    int i;
    int left=low+1;//以判斷值後一位開始  
    int pivot =v[low];//判斷值為陣列的第一個
    for( i=low;i<=high;i++){
        if(pivot >v[i]){
            swap(v[i],v[left]);//5,1,2,6,3 ->5,1,2,3,6
            left++;
        }
    }
    swap(v[left-1],v[low]);//1,2,3,5,6
    return left-1;//紀錄pivot位置分割為左右兩邊
}
void quick_sort(vector<int>& v,int low,int high){
     if (low < high){
    int a=pivot(v,low, high);//left-1
    quick_sort(v, low, a - 1);//v,0,2 呼叫自己 會在 int a = pivot(v,low, high)重新跑一次 v,0,2 獲取新的left-1值
    quick_sort(v, a + 1, high);
     }
}

//n*n
int main(){
    vector<int> v={6,2,1,5,4,7,8,3};
    int high=v.size()-1;
    quick_sort(v,0,high);
    for(auto i :v ){
    cout<<i<<" ";
    }
}