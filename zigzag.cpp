#include<iostream>
using namespace std;

void printzigzag(int n){
    if(n == 0) {
        return;
    }
    cout << "printzigzag(" << " " << n << " " <<")"<< endl;
    cout << "pre" << " " << n << endl;
    printzigzag(n - 1);
    cout << "In" << " " << n << endl;
    printzigzag(n - 1);
    cout << "Post" << " " << n << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        printzigzag(n);
    }
    
}