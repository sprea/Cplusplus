#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    cout<<"The factors are:"<<endl;
    for(int i=1;i<sqrt(n);i++){
       if(n%i==0){
           cout<<i<<" ";
       } 
    }
    cout<<n;
	return 0;
}

