#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    int to_find;
    cin>>to_find;
    int lo = 0 , hi = n-1 , mid ;
    while(hi - lo > 1){
        int mid = (hi + lo)/2;
        if(v[mid] < to_find){
            lo = mid + 1;
        }else{
            hi = mid;
        }
    }
    if(v[lo] == to_find){
        cout<<"Index = "<<lo<<endl;
    }else if(v[hi] == to_find){
        cout<<"Index = "<<hi<<endl;
    }else{
        cout<<"Not Found"; 
    }

    return 0;
}