#include <thread>
#include <mutex>
#include <chrono>
#include <iostream>

using namespace std;



int main(){
    
    auto t1 = chrono::high_resolution_clock::now();

    volatile int t = 0;
    for(volatile int i=0;i<1000000000;i++){
        t += 1;
    }

    auto t2 = chrono::high_resolution_clock::now();

    cout << chrono::duration_cast<chrono::milliseconds>(t2-t1).count() << endl;

    return 0;
}