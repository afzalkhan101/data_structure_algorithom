#include<bits/stdc++.h>
using namespace std;

bool solve(int n , int arr[]){
   
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            if(arr[i] == 67){
                return true;
            }
            else if (arr[i]* arr[j]== 67){
                return true;
            }
        }
    }

    return false;
}

int main(){
    int t;cin>>t;
    for(int i = 0;i<t;i++){
        int n;cin>>n;
        int arr[n];
        for(int r = 0; r<n;r++){
            cin>>arr[r];
        }



        if(solve(n , arr)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;

}