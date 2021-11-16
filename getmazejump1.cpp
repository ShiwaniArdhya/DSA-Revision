#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> get_maze_paths(int sr, int sc, int dr, int dc) {
  //Write your code here
  vector<string> ans;
  if (sr - dr == 0 && sc - dc == 0)
    {
        ans.push_back("");
        return ans;
    }
    for(int move = 1; move <= dc - sc;move++)
    {
        for (string ele:get_maze_paths(sr,sc + move,dr,dc))
             ans.push_back("v" + move + ele);
    }

    for(int move = 1; move <= dr - sr;move++)
    {
        for (string ele:get_maze_paths(sr + 1,sc,dr,dc))
             ans.push_back("h" + ele);
    }
    for(int move = 1; move <= dc - sc && move <= dr - sr;move++)
    {
        for (string ele:get_maze_paths(sr + move,sc + move,dr,dc))
             ans.push_back("d" + ele);
    }
    return ans;
}

void display(vector<string>& arr) {
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i < arr.size() - 1) cout << ", ";
  }

  cout << "]" << endl;
}


int main() {
  int n, m;
  cin >> n >> m;
  vector<string> ans = get_maze_paths(0, 0, n - 1, m - 1);
  display(ans);

  return 0;
}