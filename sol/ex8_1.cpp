#include <iostream>
#include <list>
#include <vector>

using namespace std;


int main(){
    
    char c = 'a';
    char *p1 = &c;


    int a[10];
    int &r = *a;

    char str[6]{'h','e','l','l','o','\0'};
    char *p2 = str;

    char **p3 = &p1;
    cout << p3 << endl;


    return 0;
}