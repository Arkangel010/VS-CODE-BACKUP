#include <iostream>
#include <vector>
#include <stdlib.h>
#include "4.Record.cpp"

using namespace std;

int main(){
    system("cls");
    string criteria;
    cout << "                                    Welcome To Monthly Expenditure Calculator!" << endl;
    cout << endl;

    cout << "You are a Working Professional OR An Student ?" << endl ;
    cout <<endl;
    getline(cin,criteria);
    cout << endl;
    Record obj;
    
    obj.convertcase(criteria);
    
    if(criteria == "STUDENT")
    {
        
        obj.input(obj.category2,obj.value2);
        system("cls");
        obj.display(obj.category2,obj.value2);
        obj.summer(obj.value2);
        obj.analysis_student(obj.category2,obj.value2);
        cout << endl;
        cout << "THANK YOU FOR USING :), HOPE YOU ARE SATISFIED WITH THE PROGRAM!!" <<endl;
        cout << "For any sort of BUG Report Kindly contact the DEVELOPER : KUMAR AMAN (ADM NO: 22SCSE1010478)" << endl;
        cout << "Copy Right : KUMAR & BROTHERS INDUSTRIES";
        obj.feeder(obj.category2,obj.value2);
    }
    else if(criteria == "WORKING PROFESSIONAL"){
        
        obj.input(obj.category1,obj.value1);
        system("cls");
        obj.display(obj.category1,obj.value1);
        obj.summer(obj.value1);
        obj.analysis_Wp(obj.category1,obj.value1);

        cout << endl;
        cout << "THANK YOU FOR USING :), HOPE YOU ARE SATISFIED WITH THE PROGRAM!!" <<endl;
        cout << "For any sort of BUG Report Kindly contact the DEVELOPER : KUMAR AMAN (ADM NO: 22SCSE1010478)" << endl;
        cout << "Copy Right : KUMAR & BROTHERS INDUSTRIES";
        obj.feeder(obj.category1,obj.value1);
    }
    else
    cout << "Kindly Enter a valid option!!" ;

system("pause");
return 0;

}