// TASK #04 by Hassan Rehman – 24K_0921
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of arrays: ";
    cin>>n;
    int a[n], b[n];
    cout<<"Enter "<<n<<" elements for first array: ";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter "<<n<<" elements for second array: ";
    for(int i=0;i<n;i++) cin>>b[i];

    for(int i=0;i<n;i++) swap(a[i],b[i]);

    cout<<"First array: ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\nSecond array: ";
    for(int i=0;i<n;i++) cout<<b[i]<<" ";

    int max1=a[0];
    for(int i=1;i<n;i++) if(a[i]>max1) max1=a[i];

    int max2=b[0], second=-1e9;
    for(int i=0;i<n;i++){
        if(b[i]>max2) max2=b[i];
    }
    for(int i=0;i<n;i++){
        if(b[i]<max2 && b[i]>second) second=b[i];
    }

    int unique=-1;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++) if(a[i]==a[j]) cnt++;
        if(cnt==1){ unique=a[i]; break; }
    }
    if(unique==-1) unique=a[0];

    cout<<"\nLargest in first array: "<<max1;
    cout<<"\nSecond largest in second array: "<<second;
    cout<<"\nUnique element in first array: "<<unique<<endl;
    return 0;
}
