#include <iostream>
#include <string>
#include <bits/stdc++.h> 

using namespace std;


int main(){
    map<string, map<string, bool>>providers;
    string word;
    int n;
    char * str;

    cout << "quantidade de emails:"<<endl;
    cin >> n;

    for(auto x = 0; x < n; ++x){
        cin >> word;
        str = new char[word.size()];
        strcpy(str, word.c_str());

        char * pch = strtok(str, "@");
        string name (pch);
        name.erase(remove(name.begin(), name.end(), '.'), name.end());
        name.erase(find(name.begin(), name.end(), '+'), name.end());

        pch = strtok(NULL,"@");
        string provider (pch);   
 
        cout <<'['<< name<<"]["<<provider<<']' <<endl;
        providers[provider][name] = true;
        
        delete str;
    }
    
    unsigned short int counter = 0;
    for(pair<string, map<string, bool>> server : providers){
        counter += server.second.size();
        //cout <<j.first<< "["<<j.second.size()<<"]"<<endl;
       // for(pair<string, bool> person : server.second){
            
            //cout << '\t' << i.first << " :: "<<i.second<<endl;
        //}
    }
    cout << counter << endl;

    return EXIT_SUCCESS;
}