#include <iostream>
#include <string>
#include <vector>

using namespace std;

// vector<string> split(string s, char c){
//     vector<string> res;
//     string tmp;
//     for(char ch: s){
//         if(ch == c){
//             res.push_back(tmp);
//             tmp = "";
//         } else tmp += ch;
//     }
//     if(tmp.length() > 0)res.push_back(tmp);
//     return res;
// }

int main(){
    string s = "Hello";
    //getline(cin, s);
    vector<char> res;
    for(char c: s){
        res.push_back(c);
    }
    for(char c: res){
        cout << c << " ";
    }
    // vector<string> res = split(s, ' ');
    // for(string str: res){
    //     cout << str << "\n";
    // }
    return 0;
}