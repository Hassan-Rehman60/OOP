#include <iostream>
using namespace std;

int main() {
    int num, temp, rev=0, digit;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    while(temp!=0){
        digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    cout<<"Original: "<<num<<endl;
    cout<<"Reversed: "<<rev<<endl;
    if(num==rev) cout<<"It is a palindrome"<<endl;
    else cout<<"Not a palindrome"<<endl;
    return 0;
}
