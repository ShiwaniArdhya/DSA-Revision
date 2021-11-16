#include<iostream>
#include<vector>
using namespace std;

void floodfill((vector<vector<int>> maze, int sr, int sc, string asf){
  int dr = maze.size();
  int dc = maze[0].size();
  bool visited[dr][dc];
  

}

int main() {
  int n, m;
  cin >> n >> m;
  vector < vector < int >> arr(n, vector < int > (m));

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];

  floodfill(arr, 0, 0, "");
}