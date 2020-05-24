#include <bits/stdc++.h>
 

using namespace std;

int firstUniqChar(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    map<char, unsigned short int> mapa;
    for(char c : s){
        ++mapa[c];
    }
    unsigned short int i = 0;
    for(char c : s){
        if(mapa[c] == 1) return i;
        ++i;
    }
    return -1;
}


int main(){
    cout << boolalpha << firstUniqChar("leetcode") << endl;


    return EXIT_SUCCESS;
}

