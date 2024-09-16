#include<bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<int>> mapping, vector<vector<int>> vistited,int x, int y , int n)
{
   if((x>=0 && x<n) && (y>=0 && y<n) && mapping[x][y]==1 &&  vistited[x][y]==0){
      return true;
   }
   else
   {
      return false;
   }

}
void solve( vector<vector<int >> mapping, int n, int x, int y,  vector<vector<int >> visited,string path,
                           vector<string >&ans) 
   {
      if((x=n-1) && (y=n-1))    
      {
         ans.push_back(path);
         return ;
      }

      visited[x][y]=1;

      // down
      int newx=x+1;
      int newy=y;
      if(issafe(mapping,visited,x,y,n))
      {
         path.push_back('D');
         solve(mapping,n,newx,newy,visited,path,ans);
         path.pop_back();


      }
      // left
       newx=x;
       newy=y-1;
      if(issafe(mapping,visited,x,y,n))
      {
         path.push_back('L');
         solve(mapping,n,newx,newy,visited,path,ans);
         path.pop_back();


      }
      
   // right
      
       newx=x;
       newy=y+1;
      if(issafe(mapping,visited,x,y,n))
      {
         path.push_back('R');
         solve(mapping,n,newx,newy,visited,path,ans);
         path.pop_back();


      }
       // up
       newx=x-1;
       newy=y;
      if(issafe(mapping,visited,x,y,n))
      {
         path.push_back('U');
         solve(mapping,n,newx,newy,visited,path,ans);
         path.pop_back();

      }
      
      

      visited[x][y]=0;

} 
int main()
{
    vector<vector<int >> mapping={{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};
    int n = 4;
    vector<vector<int>> visited =mapping;
    int x =0;
    int y =0;
    string path ="";
    vector<string> ans;
   // initiallized
    for(int i =0;i<4;i++){
      for(int j =0;j<4;j++)
      {
         visited[i][j]=0;
      }
    }

    solve(mapping,n,x,y,visited,path, ans);

    for( string i: ans){
      cout<<i<<" ";
      cout<<endl;

    }
}