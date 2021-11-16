#include<iostream>
using namespace std;

void toh(int n,string t1,string t2,string t3){
    //base case
    if (n == 0) return;
    /*establish the expectation,let n = 3, and we assume toh(2,t1,t2,t3) knows how to print instructions and do everything
    that is to say we know ki ab hmko bss n = 3 ka help krna , n = 2 wala kam done hai , so n = 3 ka hm help kaise kre  :::::::
    1. establishing the expectation from n = 2 ho chuka hai
    2. establish the  faith , hmko viswas hai krlega
    3. link expectation and faith , chlo iss pe kaam krte hai , theek hai ab 3 disc ko t1 se t2 pe transfer krna hai with the help of t3
     hm apna expectation aur viswas use krte hue bole ki aisa  kro manlo 2 disc jo h , vo hm t3 pe aram se transfer kr hi lenge , 
     jo ek disc bcha h usko t2 pe direct bhej denge aur then jo pehla 2 hm t3 pe bheje hai usko wapas se t2 pe bhej denge with the help
     of t1*/
    toh(n-1,t1,t3,t2);
    cout << t1 <<" "<< "----->" <<" "<<t2 << endl;
    toh(n-1,t3,t2,t1);
}

int main()
{
    int num;
    cin >> num;
    "\n";
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    "\n";
    toh(num,s1,s2,s3);
    return 0;
}