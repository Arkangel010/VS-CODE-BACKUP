#include <iostream>
#include <fstream>
#include<string>
#include <ctime>
#include "3.Funtion.cpp"
using namespace std;

class Record : public Funtion{
    public:
    Record (){

    }
    void feeder(vector<string> &vec,vector<int> &vec1){
    ifstream file;
    fstream Efile;
    string uname = name;
    name += ".txt";
    file.open(name);
    if(file){
        
        Efile.open(name,ios:: app);

        int i = 0;
        Efile << endl;

        time_t now = time(0);  
        char* dt = ctime(&now);  
        Efile << "Date of generation : " << dt << endl;
        Efile << "\t\t\t\t\t\t\t >> MONTH NAME : " << month << " <<" << endl;
        Efile << "\t\t\t\t\t\t\t    -----------" << endl;
        while (i < vec.size())
        {
            if (i < 10)
            {
                Efile << " - " << vec[i] << vec1[i] << endl;
                if (i == 0)
                    Efile << endl;
            }
            else
            {
                if (i == 10)
                {
                    Efile << endl;
                    Efile << " -> User Addtitonal Expenses: ";
                    Efile << endl;
                    Efile << endl;
                }

                Efile << " - " << vec[i] << " Expenses : " << vec1[i] << endl;
            }

            i++;
        }
        Efile.close();
    }
    else
        
        Efile.open(name,ios:: out);

        int i = 0;
        Efile << endl;
        Efile << "@User Name : " << uname << endl;

        time_t now = time(0); 
        char* dt = ctime(&now); 
        Efile << "Date of generation : " << dt << endl;

        Efile << "\t\t\t\t\t\t\t >> MONTH NAME : " << month << " <<" << endl;
        Efile << "\t\t\t\t\t\t\t    -----------" << endl;       
        while (i < vec.size())
        {
            if (i < 10)
            {
                Efile << " - " << vec[i] << vec1[i] << endl;
                if (i == 0)
                    Efile << endl;
            }
            else
            {
                if (i == 10)
                {
                    Efile << endl;
                    Efile << " -> User Addtitonal Expenses: ";
                    Efile << endl;
                    Efile << endl;
                }

                Efile << " - " << vec[i] << " Expenses : " << vec1[i] << endl;
            }

            i++;
        }
        Efile.close();
    }


};

// int main(){
//     Record obj;
//     obj.input(obj.category1, obj.value1);
//     system("cls");
//     obj.dispay(obj.category1,obj.value1);
//     obj.summer(obj.value1);
//     obj.analysis_student(obj.category1,obj.value1);
//     obj.feeder(obj.category1,obj.value1);
//     return 0;
// };
