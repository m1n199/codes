#include <bits/stdc++.h>

using namespace std;

static int Count=0;
void move(int a[][21],int n,int sol[][21],int x,int y){
if(x==n && y==n){
a
sol[x][y]=1;

Count++;



return;

}

if(x>n || y>n || a[x][y]==1 || sol[x][y]==1 ||x<=0 ||y<=0){

return ;

}

sol[x][y]=1;

move(a,n,sol,x+1,y);

move(a,n,sol,x-1,y);

move(a,n,sol,x,y-1);

move(a,n,sol,x,y+1);

sol[x][y]=0;

}

void solve(int a[][21],int n){

int sol[21][21];

for(int i=1;i<=n;i++){

for(int j=1;j<=n;j++){

sol[i][j]=0;

}

}

move(a,n,sol,1,1);

}

int main(){

int q;

cin>>q;

while(--q>=0){

int a[21][21],n;

cin>>n;

for(int i=1;i<=n;i++){

for(int j=1;j<=n;j++){

cin>>a[i][j];

}

}

solve(a,n);

cout<<Count<<endl;

Count=0;

}

}
