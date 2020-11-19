#include <iostream>

using namespace std;

class en{
    private:
            float s;
            int sal;
    public:
           explicit en(float age): s(age){
               std :: cout<<s<<" expicit constru"<< endl;
           }
           en(int age): s(age){
               std :: cout<<s<<" impicit constru"<< endl;
           }
};


int main()
{
    //en e(18);
    en e = 18.123;
    en b((float)123.456);
    return 0;
}
