// TASK #05 by Hassan Rehman – 24K_0921
#include <iostream>
using namespace std;

void multiplyMatrices(int A[10][10],int B[10][10],int C[10][10],int m,int n,int p){
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            C[i][j]=0;
            for(int k=0;k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
}

int main(){
    int m,n,p,q;
    cout<<"Enter rows and cols of first matrix: ";
    cin>>m>>n;
    cout<<"Enter rows and cols of second matrix: ";
    cin>>p>>q;
    if(n!=p){
        cout<<"Matrix multiplication not possible\n";
        return 0;
    }
    int A[10][10],B[10][10],C[10][10];
    cout<<"Enter elements of first matrix:\n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) cin>>A[i][j];
    cout<<"Enter elements of second matrix:\n";
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++) cin>>B[i][j];

    multiplyMatrices(A,B,C,m,n,q);

    cout<<"Resultant matrix:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++) cout<<C[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
