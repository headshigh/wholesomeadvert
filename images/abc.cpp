#include <iostream>
using namespace std;
class c_area{
    private :
    float r,area;
    public:
    void input(float a){
        r=a;
    }
    void output(){
        area=3.14*r*r;
        cout << "Area="<<area;
    }
};
    int main(){
        c_area ar;
        ar.input(5.36);
        ar.output();
        return 0;
    }