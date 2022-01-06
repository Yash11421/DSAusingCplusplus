#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Please Enter the value of n:"<<endl;
    cin >> n;

    int i = 1;

    while(n) {
        
        int j = 1;
        while(j<=n) {
            cout<< "*";
            j = j+1; 
        }
        cout<<endl;
        n=n-1;

        i = i+1;
    } 



}
