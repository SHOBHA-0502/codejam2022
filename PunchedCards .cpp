#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    int k = t;
    while(t--){
        
        int r,c;
        cin>>r;
        cin>>c;
        cout<<"Case #"<<(k-t)<<":"<<endl;
        for(int i=1;i<=(2*r+1);i++){
            for(int j =1;j<=(2*c+1);j++){
                if (i==1 && j==1 ){
                    cout<<".";
                }
                else if (i==1 && j==2 ){
                    cout<<".";
                }
                else if (i==2 && j==2 ){
                    cout<<".";
                }
                else if (i==2 && j==1 ){
                    cout<<".";
                }
               

                else if((i+j)%2==0&& i%2==0 && j%2==0){
                    cout<<".";
                }
                else if((i+j)%2==0&& i%2!=0 && j%2!=0){
                    cout<<"+";
                }
                else if((i+j)%2!=0&& i%2!=0 && j%2==0){
                    cout<<"-";
                }
                else if((i+j)%2!=0&& i%2==0 && j%2!=0){
                    cout<<"|";
                }
                
            }
            cout<<endl;
        }
    }
}