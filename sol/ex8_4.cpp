#include <iostream>
#include <list>
#include <vector>

using namespace std;


int main(){
    
    int arr[8]{1,2,3,4,5,6,7,8};

    int *p1 = &arr[2];
    int *p2 = &arr[5];

    cout << (p2-p1) << " elements" << endl;

    while (p1 < p2){
        cout << *p1 << endl;
        p1++;
    }


    return 0;
}