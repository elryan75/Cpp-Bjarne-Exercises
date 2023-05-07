#include <iostream>

using namespace std;

class AList{
    public:
    int *arr;

    AList(){
        arr = new int[10];
        for(int i=0;i<9;i++){
            arr[i] = i;
        }
        arr[9] = -1;
    }

    void set(int i, int v){
        arr[i] = v;
    }

    AList(AList &&list){
        arr = list.arr;
        list.arr = NULL;
    }

    void print(){
        if(arr == NULL){
            cout << "EMPTY LIST" << endl;
            return;
        }
        for(int i=0;arr[i]!=-1;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

class Person{
    public:
    int age;
    AList list;

    Person(int age, AList &&list):age(age),list(move(list)){}

};




int main(){

    AList *a = new AList();
    a->set(0,5);

    AList *b = new AList();   
    b->set(0,6);

    a->print();
    b->print();

    AList *c = new AList(move(*b));

    a->print();
    b->print();
    c->print();

    return 0;
}