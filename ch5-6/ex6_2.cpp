#include <thread>
#include <mutex>
#include <chrono>
#include <iostream>

using namespace std;

mutex mtx;

struct printString{

    printString(string s):s(s){};

    void operator()(){
        for(int i=0;i<10;i++){
            
            {
                unique_lock<mutex> lck(mtx);
                cout << s << endl;
            }
            
            this_thread::sleep_for(chrono::seconds{1});
        }
    }

    private:
    string s;
};

int main(){
    
    thread t1 {printString("Hello")};
    thread t2 {printString(" World!")};

    t1.join();
    t2.join();

    return 0;
}