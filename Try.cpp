#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    string height;

    private:
    Person(string sname, string sheight){
        this->name = sname;
        this->height = sheight;
    };
};

int main(){
    Person firstperson("chirag", "1");
    return 0;
}