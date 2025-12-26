// 16953번 a->b
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    long int a,b;  // int -> long int
    cin >> a >> b;

    queue <pair<long int,int>> q;  // int -> long int
    q.push(make_pair(a,1));
    
    
    int ans1=-1;
    // int ans=1;
    // size_t c=1;
    while (!q.empty()){
        
        
       
        
        
        long int x=q.front().first; // int -> long int
        int y=q.front().second;
        q.pop();
        
        if (x==b){
            ans1=y;
            break;
            
        }
        
        if (x*2<=b){
            q.push(make_pair(x*2,y+1));
        }
        if (x*10+1<=b){
            q.push(make_pair(x*10+1,y+1));
        }

    }
    
    cout << ans1;

    return 0;
}