#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class hi{
    public:
    void read(){
    fstream obj("aman.txt", ios::app );
   obj.seekp(+6,ios:: beg);
   obj << " sexty ";
    }
};
int main(){
    hi obj;
    obj.read();
    return 0;
}
// Pointers used for random access,
//  used at time of putting data in file or writing within the file.
// seekp(offset,seekbase[ios:: end,beg])  - used to move the pointers forward and backward.
// tellp()


// seekg();  - used to get data from the file or read data from the file.
// tellg(); 