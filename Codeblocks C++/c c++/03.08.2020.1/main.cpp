#include <iostream>
#include <string>
#include <regex>
#include <unordered_map>
using namespace std;

unordered_map<string,string> hashMap;
vector<string> parentTag;

void manageParentTag(string tag){
    for (int i=0;i<parentTag.size();i++){
        if (parentTag[i] == tag){
            parentTag.erase(parentTag.begin()+i);
            return;
        }
    }
    parentTag.push_back(tag);
}
string returnParentTag(){
    string tag="";
    int size = parentTag.size();
    for (int i=0;i<size;i++){
        if (i == size-1){
            tag += parentTag[i]+"~";
            return tag;
        }
        tag += parentTag[i]+".";
    }
    return "";
}
void driverAdd(string s){
    vector<string> ramp;
    regex  e ("[\\w%.!$]+");
    smatch  match;
    while(regex_search(s,match,e)){
        for (auto x:match)  ramp.push_back(x);
        s = match.suffix().str();
    }
    if (ramp.size() == 0)
        return;
    string tag = ramp[0];
    manageParentTag(tag);
    for (int i=1;i<ramp.size();i++){
        string name = ramp[i  ];
        string value= ramp[i+1];
        i++;
        hashMap.insert({returnParentTag()+name,value});
    }
}
string driverExtract(string s){
    string ans = hashMap[s];
    if (ans.size() != 0)
        return ans;
    return "Not Found!";
}
void input(){
    int numberTag;
    int numberQuery;
    cin >> numberTag >> numberQuery;
    string ans="";
    for(int i=0;i<numberTag;i++){
        string line;
        line.resize(line.size()+20);
        cin.ignore();
        getline(cin,line);
        driverAdd(line);
    }
    for (int i=0;i<numberQuery;i++){
        string line;
        getline(cin,line);
        ans += driverExtract(line)+"\n";
    }
    cout << ans ;
}
int main() {
    input();
    return 0;
}
