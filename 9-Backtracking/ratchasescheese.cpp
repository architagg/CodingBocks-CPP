#include<bits/stdc++.h>
using namespace std;
bool ratInMaze(char maze[][11],int sol[][10],int i, int j, int n, int m)
{

    if(maze[i][j]=='X')
        return false;

      if(i==n && j==m)
      {
            sol[n][m]=1;

            for(int k=0;k<=n;k++)
            {
                  for(int l=0;l<=m;l++)
                        cout<<sol[k][l]<<" ";
                  cout<<endl;
            }

            return true;
      }

    if(i>n||j>m||i<0||j<0){
        return false;
    }
    
    bool right=false,down=false,up=false,left=false;
    sol[i][j] = 1;

    if(sol[i+1][j]==0){
        down = ratInMaze(maze,sol,i+1,j,n,m);
    }

    if(sol[i][j+1]==0 && !down){
        right = ratInMaze(maze,sol,i,j+1,n,m);
    }


    if(sol[i-1][j]==0 && !down && !right){
        up = ratInMaze(maze,sol,i-1,j,n,m);
    }

    if(sol[i][j-1]==0 && !down && !right && !up){
        left = ratInMaze(maze,sol,i,j-1,n,m);
    }
    
    if(right||down||left||up){
        return true;
    }
    
    sol[i][j] = 0;
    
    return false;
}

int main()
{
      int n,m;
      cin>>n>>m;
      char maze[n][11];
      for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
      cin>>maze[i][j];
      
      int sol[n][10]={0};
      bool ans = ratInMaze(maze,sol,0,0,n-1,m-1);
      if(ans==false)
            cout<<"NO PATH FOUND";
}
