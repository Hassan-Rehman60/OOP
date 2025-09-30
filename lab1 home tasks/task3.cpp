// TASK #03 by Hassan Rehman – 24K_0921
#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

int main() {
    int start,end;
    cout<<"Enter start: ";
    cin>>start;
    cout<<"Enter end: ";
    cin>>end;
    cout<<"Prime numbers between "<<start<<" and "<<end<<" are:\n";
    for(int i=start+1;i<end;i++)
        if(isPrime(i)) cout<<i<<" ";
    cout<<endl;
    return 0;
}
