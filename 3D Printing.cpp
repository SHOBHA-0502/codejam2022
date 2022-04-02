#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t ;
    cin>>t;
    long long int k = t;
    while(t--){
       long long  int arrp1[4];
        long long int arrp2[4];
        long long int arrp3[4];
        for(int i =0;i<4 ; i++){
            cin>>arrp1[i];
        }
        for(int i =0;i<4 ; i++){
            cin>>arrp2[i];
        }

        for(int i =0;i<4 ; i++){
            cin>>arrp3[i];
        } 
        long long int arrf[4];
       
        for(int i =0 ;i<4; i++){
            int k;
            arrf[i] = min({arrp1[i],arrp2[i],arrp3[i]});
            
            
        }
        if(arrf[0]+arrf[1]+arrf[2]+arrf[3]<1000000){
            cout<< "Case #"<<(k-t)<<": "<<"IMPOSSIBLE"<<endl;
        }
        else{
        cout<< "Case #"<<(k-t)<<":"<<" ";
        long long int res =0;
        for(int i=0 ; i<4 ; i++){
            if(res + arrf[i]<=1000000){
                cout<<arrf[i]<<" ";
                res += arrf[i];
            }
            else{
                long long int x = 1000000-res;
                cout<<x<<" ";
                res += x;
            }
            
        }
        cout<< endl;
        }


    }
}