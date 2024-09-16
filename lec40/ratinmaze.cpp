#include<bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<int>> mapping,int n, int x  ,int y, vector<vector<int>>visited){
   if((x>=0 && x<n)&& (y>=0 && y<n) && mapping[x][y]==1 &&  visited[x][y]==0)
   {
      return true;
   }
   else
   {
      return false;
   }

}
void solve(vector<vector<int>> mapping,int n,string path,
                 vector<vector<int>>visited,int x,int y,vector<string> &ans)
{
   // base case
   if((x==n-1 )&& (y==n-1))
   {
      ans.push_back(path);
      return;
   }

   visited[x][y]=1;

   // down
   int newx=x+1;
   int newy=y;
   if(issafe(mapping,n,newx,newy,visited))
   {
      path.push_back('D');
      solve(mapping,n,path,visited,newx,newy,ans);
      path.pop_back();
   }
   // left
    newx=x;
    newy=y-1;
   if(issafe(mapping,n,newx,newy,visited))
   {
      path.push_back('L');
      solve(mapping,n,path,visited,newx,newy,ans);
      path.pop_back();
   }
   // right
    newx=x;
    newy=y+1;
   if(issafe(mapping,n,newx,newy,visited))
   {
      path.push_back('R');
      solve(mapping,n,path,visited,newx,newy,ans);
      path.pop_back();
   }
   // up
    newx=x-1;
    newy=y;
   if(issafe(mapping,n,newx,newy,visited))
   {
      path.push_back('U');
      solve(mapping,n,path,visited,newx,newy,ans);
      path.pop_back();
   }
   
   visited[x][y]=0;



}
main()
{
   vector<string> ans;
   int srcx=0;
   int srcy=0;

   string path = "";
   vector<vector<int>> mapping ={{1,0,0},{1,1,0},{0,1,1}};
   int n =3;

   vector<vector<int>> visited =mapping;

   // intiallize the visited with 0
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         visited[i][j]=0;
      }
   }

   solve(mapping,n,path,visited,srcx,srcy,ans);
   
   for(string i:ans){
      cout<<i<<" ";
      cout<<endl;
   }



}