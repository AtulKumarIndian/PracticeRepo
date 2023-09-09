#include<bits/stdc++.h>
using namespace std;
int main(){
    //coding for single 2 node
    vector<vector<int>> matrix ={{2,1,0},{1,1,0},{0,1,0}};
    pair<int,int> p;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if(matrix[i][j] == 2)
                p.first = i;
                p.second = j;
                break;
                
        }
    }
    queue<pair<int,int>> q;
     int count = 0;
    q.push(p);
    while(!q.empty()){
        int s = q.size();
        bool isInf = false;
        for(int i=0; i<s; i++ ){
            pair<int,int> p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;
            if(x-1>=0 && matrix[x-1][y]==1){
                isInf=true;
                matrix[x-1][y] = 2;
                q.push({x-1,y});
                }
            if(x+1<3 && matrix[x+1][y]==1){
                isInf=true;
                matrix[x+1][y]=2;
                q.push({x+1,y});
            }
             if(y-1>=0 && matrix[x][y-1]==1){
                isInf=true;
                matrix[x][y-1] = 2;
                q.push({x,y-1});
                }
            if(y+1<3 && matrix[x][y+1]==1){
                isInf=true;
                matrix[x][y+1]=2;
                q.push({x,y+1});
            }
        }
        if(isInf)
        count++;
        
    }

cout<<count;
return 0;
}