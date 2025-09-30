// TASK #01 by Hassan Rehman – 24K_0921
#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;
    int notes[] = {5000,1000,500,100,20,10,5,2,1};
    cout << "Minimum notes required for Rs. " << amount << " are:\n";
    for(int i=0;i<9;i++){
        int count = amount / notes[i];
        if(count>0){
            cout << notes[i] << " x " << count << endl;
            amount %= notes[i];
        }
    }
    return 0;
}
