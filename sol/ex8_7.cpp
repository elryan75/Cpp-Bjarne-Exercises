#include <iostream>
#include <vector>

using namespace std;

void swap(int *a, int* b){
    int tmp = move(*a);
    *a = move(*b);
    *b = move(tmp);
}

void swap(int &a, int &b){
    int tmp = move(a);
    a = move(b);
    b = move(tmp);
}


int main(){

    int a = 5;
    int b = 6;

    swap(&a,&b);

    cout << a << " " << b << endl;


    int c = 7;
    int d = 8;

    swap(c,d);

    cout << c << " " << d << endl;

    return 0;
}