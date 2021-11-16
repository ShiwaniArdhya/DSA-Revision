#include<bits/stdc++.h>
using namespace std;

bool checkAlmostEquivalent(string word1, string word2) {
    int CHAR = 26;
    int n1 , n2;
    n1 = word1.length();
    n2 = word1.length();
    if (n1 != n2) return false;
    int count[CHAR] = {0};
    for (int i = 0; i < n1; i++)
    {
        count[word1[i] - 'a']++;
        count[word2[i] - 'a']--;
    }

    for (int i = 0; i < CHAR; i++){
        if (count[i] > 3 || count[i] < -3)
        {
            return false;
        }

        
    }

    return true;
 }


int main()
{
    string w1,w2;
    cin >> w1 >> w2;
    cout << checkAlmostEquivalent(w1, w2);
    return 0;
}

//word1 = "abcdeef", word2 = "abaaacc"