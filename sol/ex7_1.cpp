#include <iostream>

using namespace std;



int main(){
    
    // 1
    char c = -1;
    int i = c;

    if (i < 0){
        cout << "Your implementation has signed character" << endl;
    }
    else{
        cout << "Your implementation has unsigned character" << endl;
    }

    // 2
    int arr[4];
    cout << arr[6] << endl;

    return 0;
}