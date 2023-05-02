#include <iostream>
#include <string>

using namespace std;

class Person{
  private:
  string name;
  int age;

  public:
  Person(string name, int age):name(name),age(age){};

  friend ostream& operator<<(ostream& o, Person& p){
    o << p.name << " " << p.age;
    return o;
  }

  friend istream& operator>>(istream& i, Person& p){
    i >> p.name >> p.age;
    return i;
  }
};

int main() {
  
  Person p("Ryan", 21);
  cout << p << endl;

  cin >> p;
  cout << p << endl;
  return 0;
}
