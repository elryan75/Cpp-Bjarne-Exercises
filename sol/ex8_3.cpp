#include <iostream>
#include <list>
#include <vector>

using namespace std;

using t1 = unsigned char;
using t2 = const unsigned char;
using t3 = int*;
using t4 = char*[];
using t5 = int *[7];
using t6 = int (*)[7];
using t7 = int *[8][7];


int main(){
    int a,b,c,d,e;
    int *(arr[5]){&a,&b,&c,&d,&e};

    

    return 0;
}