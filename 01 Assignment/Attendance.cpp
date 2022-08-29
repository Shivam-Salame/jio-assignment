#include<bits/stdc++.h>
using namespace std;

int main(){
    string attendance ;
    cin>>attendance;

    int absent = 0;
    int late = 0;

    for(int i=0;i<attendance.size();i++){
        if(attendance[i] == 'A') ++absent;
        if(attendance[i] == 'L'  ) {
            if( i > 0 && attendance[ i - 1 ] == 'L' ){
                ++late;
            }
            else {
                late = 1;
            }
        }
    }
    if( absent > 2 || late >= 3 )
        cout<<"False";
        
    else cout<<"True";
}
