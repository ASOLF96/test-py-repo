#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=7;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<"not prime";
        }else{
            cout<< "prime";
        }
    }
    return 0;
}
