#include <iostream>
#include <vector>
using namespace std;

template <typename T, typename Func> 
vector<T> mapx(vector<T> &v, Func f){
    vector<T> res;
    for(T i: v){
        res.push_back(f(i));
    }
    return res;
}



int main(){
    vector<int> arr = {1,2,3,4};
    arr = mapx(arr, [](int x) { return x*x;});
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}