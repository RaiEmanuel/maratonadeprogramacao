#include <bits/stdc++.h>
 

using namespace std;


bool is_not_alpha(char c){
    return !isalnum(c);
}

bool isPalindrome(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s.erase(remove_if(s.begin(), s.end(), is_not_alpha), s.end());

    string inverse (s);
    reverse(inverse.begin(), inverse.end());
    cout << s <<endl<< inverse<<endl;
    return !s.compare(inverse);
}

int main(){
    cout << boolalpha << isPalindrome("0P") << endl;


    return EXIT_SUCCESS;
}

