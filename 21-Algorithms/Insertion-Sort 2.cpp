#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

void insert(vector<int>&arr  ,int size){
    for(int i=1 ; i<size ; i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main() {
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(8);
    arr.push_back(6);
    arr.push_back(4);
    insert(arr, 7);

    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";

    return 0;
}