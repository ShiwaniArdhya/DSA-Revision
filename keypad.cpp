#include<iostream>
#include<vector>
using namespace std;
/*0 -> .;
    1 -> abc
    2 -> def
    3 -> ghi
    4 -> jkl
    5 -> mno
    6 -> pqrs
    7 -> tu
    8 -> vwx
    9 -> yz */
void keypad(string input,string output){
    vector<string> v = {".;" , "abc", "def" ,"ghi", "jkl","mno","pqrs", "tu", "vwx" , "yz"};
    //base case
    int index = input[0];
    string s = v[index];
    if(input.length() == 0){
        cout << output << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        keypad(input.substr(1),output + s[i]);
    }
    
    
}
int main(){
    string i,o;
    cin >> i;
    o = "";
    keypad(i,o);
return 0;
}