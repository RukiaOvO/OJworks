//Copied
#include <bits/stdc++.h>
using namespace std;
int n;
int map1[10][10];
int book[10][10];
int step;
int min1=9999;
int nx[4]={1,-1,0,0};
int ny[4]={0,0,1,-1};
void dfs(int x,int y,int step){
	if(x==n-2&&y==n-2){
		if(step<min1){
			min1=step;
			return;
		}
	}
	if(step>=min1)return;
	for(int i=0;i<4;i++){
		int tx=x+nx[i];
		int ty=y+ny[i];
		if(tx>=0&&tx<n&&ty>=0&&ty<n&&book[tx][ty]==0&&map1[tx][ty]==0){
			book[tx][ty]=1;
			dfs(tx,ty,step+1);
			book[tx][ty]=0;

		}
	}
	return;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>map1[i][j];
		}
	}
	dfs(1,1,0);
	book[1][1]=1;
	if(min1==9999)cout<<"No solution";
	else cout<<min1<<endl;
	return 0;
}
