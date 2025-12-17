#include <cctype>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;
typedef long long ll;

// string split(string s, char div){

// }

int main(){ 
    queue<int> que;
    //que.
    // stack<int> st;
    // st.push(4);
    // st.push(6);
    // st.push(8);
    // st.push(1);
    // st.pop();
    // //cout << st.top();
    // while(!st.empty()){
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    //cout << st.empty();

    // vector<int> arr = {6,5,4,3,2,1};
    // for(int i: arr) cout << i << " ";
    // //sort(arr.begin(), arr.end(), greater<int>());
    // sort(arr.begin(), arr.end());
    // reverse(arr.begin(), arr.end());
    // cout << "\n";
    // for(int i: arr) cout << i << " ";
    // pair<int,int> p = {1,2};
    // cout << p.first << " ";
    // cout << p.second;
    // map<int,int> mp;
    // vector<char> chr = {'A', 'A', 'B', 'B', 'B', 'C'};
    // for(char c: chr){
    //     mp[c]++;
    // }
    // for(pair<char,int> i: mp){
    //     cout << i.first << " => " << i.second << "\n";
    // }
    // mp[3]++;
    // mp[3]++;
    // mp[3]++;
    // cout << mp[3];
    return 0;
}



/*
string s = "43";
    char c = 'A';
    int num = c;
    int arr[5] = {1,2,3,4,5};
    //cout << sizeof(arr);
    //cout << num;
    string str = "Hello This Is Programming";
    // for(int i = 0; i < str.length(); i++){
    //     if(str[i] >= 'A' && str[i] <= 'Z'){
    //         str[i] = str[i]+32;
    //     }
    // }
    cout << str;

    //vector<int> arr(5);
     // arr.push_back(5);
    // arr.push_back(4);
    // arr.pop_back();
    cout << arr.size() << " ";
    // for(int i = 0; i < 3; i++){
    //     int n;
    //     cin >> n;
    //     arr.push_back(n);
    // }
    // for(int i = 0; i < arr.size(); i++){
    //     cin >> arr[i];
    // }
    // for(int i: arr){
    //     cout << i << " ";
    // }


      vector<vector<int>> arr(1, vector<int>(10,5));//= {{1,2}, {3,4,6,7}};
    vector<int> arr1;
    //arr.clear();
    arr1.resize(4,2);
    //arr.push_back({1,2,3});
    //arr.insert(arr.begin()+1, {1,2,4});
    ///arr.
    //vector<int> arr(3,0);
    //arr.insert(arr.begin(),5);
    // for(int i = 0; i < arr.size(); i++){
    //     for(int j = 0; j < arr[i].size(); j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    string str = "Nithwin";
    //cout << str.find('s') << " \n";
    //cout << string::npos;
    //if(str.find('N'))
    // for(int i: arr1){
    //     cout << i << " ";
    // }
    if(str.find('N') != string::npos){
        cout << "Hello";
    }
    ll n = 53;
    // for(vector<int> i : arr){
    //     for(int j: i){
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }


     set<int> st = {1,2,3,3};
    st.insert(4);

    cout << (st.find(8) != st.end());
    cout << st.empty();

    // for(int i: st){
    //     cout << i;
    // }


      unordered_map<int,int> mp;
    // mp[3] = 5;
    // mp[2] = 10;
    // mp[1] = 8;
    // //cout << mp[5];
    // for(auto& i: mp){
    //     cout << i.second;
    // }
    for(int i = 0; i < 4; i++){
        int key,val;
        cout << "Enter Key and Values";
        cin >> key >> val;
        mp[key]= val;
    }
    
    for(auto& i: mp){
        cout << "key :" << i.first << " values:" << i.second <<"\n";
    }
*/