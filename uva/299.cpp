#include<iostream>
using namespace std;
int main() {
    int times;
    cin>>times;
    while (times--){
        int count = 0;
        int length;
        cin>>length;
        int arr[length];
        for(int i=0;i<length;i++) {
            cin>>arr[i];
        }
        for(int i=0;i<length;i++) {
            for (int j=0 ; j<i ; j++) {
                if (arr[i]<arr[j]) {
                    count++;
                    swap(arr[i],arr[j]);
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }
}