#include <iostream>
#include <list>
#include <vector>

using namespace std;

int global_arr[10]{0,1,2,3,4,5,6,7,8,9};

class C{
    public:
    int member_arr[10]{0,1,2,3,4,5,6,7,8,9};
};

int main(){
    
    int local_arr[10]{0,1,2,3,4,5,6,7,8,9};
    int *new_arr = new int[10]{0,1,2,3,4,5,6,7,8,9};

    C c;

    cout << local_arr[0] << endl;
    cout << global_arr[0] << endl;
    cout << new_arr[5] << endl;
    cout << c.member_arr[0] << endl;

    //cout << local_arr[10] << endl;
    //cout << global_arr[10] << endl;
    cout << new_arr[10] << endl;
    //cout << c.member_arr[10] << endl;



    delete[] new_arr;
    return 0;
}