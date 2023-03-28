#include <iostream>
using namespace std;



int binarySearch(int *a, int i, int j, int key){
    int k;
    if(i>j)
        return -1;

    k = (i+j)/2;

    if(a[k] == key)
        return k;
    if(a[k] < key)
        return binarySearch(a, k+1, j, key);
    else
        return binarySearch(a, i, k-1, key);
}

int main(){
    int N, key;

    cout << "Insert lenght of the array: ";
    cin >> N;
    int * a = new int[N];

    cout << "Insert " << N << " integers in increasing order: ";
    for(int i = 0; i<N; i++)
        cin>>a[i];

    cout << "Insert Key numer: ";
    cin >> key;

    cout << "Key number found in position: " << binarySearch(a, 0, N-1, key)<< "\n";
}
