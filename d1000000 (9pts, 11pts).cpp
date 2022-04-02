#include<bits/stdc++.h>
using namespace std ;
int main(){
   long long int t;
   cin>>t;
   int k =t;
   while(t--){
      long long  int n;
       long long int count =0;
       cin>>n;
      long long  int arr[n];
       for(int i =0 ;i<n ; i++){
           cin>>arr[i];
       }
       sort(arr,arr+n);
       for(int i =0 ; i<n ; i++){
           if(arr[i]>count){
               count++;

           }
           
       }
       cout<<"Case #"<<(k-t)<<": "<< count<<endl;
   }

}