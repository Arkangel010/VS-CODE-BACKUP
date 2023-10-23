#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include "1.Wp.cpp"
#include "2.student.cpp"
using namespace std;

class Funtion : public Wp, public student
{
public:
    string name, month;
    int total = 0, savings, EF;
    string detail[2];
    void convertcase(string &str)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
    }
    Funtion()
    {
        cout << "Enter NAME : ";
        getline(cin,name);
        cout << "Enter MONTH NAME : ";
        cin >> month;
        convertcase(name);
        convertcase(month);
        cout << endl;
        detail[0] = name;
        detail[1] = month;
    }

    void input(vector<string> &vec, vector<int> &vec1)
    {
        cout << "Enter Logs in RUPEES :- " << endl ;
        cout << endl;
        

        int i = 0;
        while (i < vec.size())
        {
            int j;
            cout << "-Enter " << vec[i];
            cin >> j;
            if (i == 0)
                cout << endl;
            vec1.push_back(j);
            i++;
        }
        cout << endl;

        string extend;
        cout << "Do you have any other sort of expenses ? : YES / NO " << endl;
        cin >> extend;
        extend = "YES";
        cout << endl;
        convertcase(extend);
        
        if (extend == "YES")
        {

            string append;
            int app;
            cout << "-Enter category : " ;
            getline(cin >> ws,append);
           
            vec.push_back(append);
            cout << "-Enter Expense : ";
            cin >> app;
            vec1.push_back(app);
            cout << endl;

            cout << "Do you wish to add any more sort of expenses ? : YES / NO " << endl;
            cin >> append;
            convertcase(append);
           

            if (append == "YES")
            {
                string check = "True";
                int addval;
                cout << "Keep Entering the Expenses Category and their Particular Expenses and when you have Entered all Enter 'DONE' in category!" << endl;
                cout << endl;
                
                while (check != "DONE")
                {
                    int app;
                    cout << "Enter category : ";
                    getline(cin >> ws,check);
                    if ( check == "DONE" || check == "done" || check == "Done")
                    {
                        convertcase(check);
                        if (check == "DONE")
                            break;
                    }
                    vec.push_back(check);
                    cout << "Enter Expense : ";
                    cin >> app;
                    vec1.push_back(app);
                   cout << endl;
                }
            }
        }
    }

    int display(vector<string> &vec, vector<int> &vec1)
    {
        int i = 0;
        cout << endl;
        cout << "\t\t\t\t\t\t\t >> MONTH NAME : " << month << " <<" << endl;
        cout << "\t\t\t\t\t\t\t    -----------" << endl;
        cout << "@User Name : " << name << endl;
        while (i < vec.size())
        {
            if (i < 10)
            {
                cout << " - " << vec[i] << vec1[i] << endl;
                if (i == 0)
                    cout << endl;
            }
            else
            {
                if (i == 10)
                {
                    cout << endl;
                    cout << " -> User Addtitonal Expenses: ";
                    cout << endl;
                    cout << endl;
                }

                cout << " - " << vec[i] << " Expenses : " << vec1[i] << endl;
            }

            i++;
        }
    }

    void summer(vector<int> &vec)
    {

        for (int i = 1; i < vec.size(); i++)
        {
            total += vec[i];
        }
        savings = vec[0] - total;
        if (savings < 0)
        {
            savings = 0;
        }
        EF = 0.5 * savings;

        cout << endl;
        cout << "________________________________________________________" << endl;
        cout << "TOTAL MONTHLY EXPENSE --> " << total << endl;
        cout << "YOUR SAVINGS --> " << savings << endl;
        cout << "YOUR EMERGENCY FUND --> " << EF << endl;
        cout << "--------------------------------------------------------" << endl;
    }

    void analysis_Wp(vector<string> &vec, vector<int> &vec1)
    {
        if (total > vec1[0])
        {
            cout << "WARNING : Your Expenses Exceed Your Salary!" << endl;
            cout << endl;
        }

        cout << "Analytics :- " << endl;
        cout << endl;

        if (savings > 0.2 * vec1[0])
        {
            cout << "Hurray Your savings is more than 20% of your Salary!!" << endl;
            cout << endl;
        }
        else
        {
            cout << "OOPS! Your Savings is less than 20% of your salary!!" << endl;
            cout << endl;
        }
        if (EF < 3000)
        {
            cout << "- Your Emergency Fund is less than 4000, Kindly try to increase it!" << endl;
            cout << endl;
        }

        // Individual category checker and comment Passer.
        {
            if (vec1[1] > 15000 && vec1[0] < 150000)
            {
                cout << "- You should consider reducing your House Rent Expenditure or Look for a New House!" << endl;
                cout <<endl;
            }
            if (vec1[2] > 10000)
            {
                cout << "- Seems Like You are a Foodie : ) ,consider eating the healty ones!" << endl;
                cout <<endl;
            }
            if (vec1[3] > 15000 && vec1[0] < 150000)
            {
                cout << "- Shop for the needs, All that Glitters is not Gold. " << endl;
                cout <<endl;
            }
            if (vec1[4] > 10000)
            {
                cout << "- You Need to improve your Immune System ,Take a break and think about your diet!" << endl;
                cout <<endl;
            }
            if (vec1[5] > 10000)
            {
                cout << "- Seems Like you are a Cinephile!" << endl;
                cout <<endl;
            }

            if (vec1[7] > 5000)
            {
                cout << "- You need to take a look at your Internet Usage!" << endl;
                cout <<endl;
            }

            if (vec1[9] > 3500)
            {
                cout << "- Try switching off Lights and Fans after use,and avoid unecccesary usage of Electrical Appliances! " << endl;
                cout <<endl;
            }
        }

        // max and 2nd max finder program.
        {
           int max = vec1[1];
            int index = 1;
            int index2 = NULL;
            int max2 = 0;
            for (int i = 2; i < vec1.size(); i++)
            {

                if (max < vec1[i])
                {
                     index2 = index;
                    index = i;
                    max2 = vec1[index2];
                    max = vec1[i];                  
                }
                if(vec1[i] < max && vec1[i] > max2){
                    index2 = i;
                    max2 = vec1[i];

                }
                
                
            }
                
            
            cout <<"->Vital Categories :-" <<endl;
            cout <<endl;
            cout << "- You spend most in " << vec[index] << vec1[index] << endl;
            cout <<endl;
            cout << "- The second most category is " << vec[index2] << vec1[index2] << endl;
        }
    }

    void analysis_student(vector<string> &vec, vector<int> &vec1)
    {
        if (total > vec1[0])
        {
            cout << "WARNING : Your Expenses Exceed Your Pocket Money!" << endl;
            cout << endl;
        }

        cout << "Analytics :- " << endl;
        cout << endl;

        if (savings > 0.2 * vec1[0])
        {
            cout << "Hurray Your savings is more than 20% of your Pocket Money!" << endl;
            cout << endl;
        }
        else
        {
            cout << "OOPS! Your Savings is less than 20% of your Pocket Money!" << endl;
            cout << endl;
        }
        if (EF < 500)
        {
            cout << "- Your Emergency Fund is less than 500, Kindly try to increase it!" << endl;
            cout << endl;
        }

        // Individual category checker and comment Passer.
        {
            if (vec1[1] > 8000)
            {
                cout << "- You should consider reducing your Hostel Fess /Flat Rent Expenditure or Look for a New Hostel/Flat around YOU!" << endl;
                cout <<endl;
            }
            if (vec1[2] > 700)
            {
                cout << "- Seems like you are studious, Remember to use the extra lines of your NoteBook!" << endl;
                cout <<endl;
            }
            if (vec1[3] > 2000)
            {
                cout << "- Shop for the needs, All that Glitters is not Gold. " << endl;
                cout <<endl;
            }
            if (vec1[4] > 1500)
            {
                cout << "- Wise man said Travel less study more, Save Fuel ! " << endl;
                cout <<endl;
            }
            if (vec1[6] > 300)
            {
                cout << "- Eat the healty foods and take care of your Health, Street Food is not Good for Health!" << endl;
                cout <<endl;
            }

            if (vec1[7] > 600)
            {
                cout << "- Kindly Reduce your Internet usage !" << endl;
                cout <<endl;
            }

            if (vec1[8] > 1500)
            {
                cout << "- Kindly Reduce your outing expenses! " << endl;
                cout <<endl;
            }
            if (vec1[9] > 3000)
            {
                cout << "- Keep an eye on other Expenses as you have exceeded your Vacation Expenses! " << endl;
                cout <<endl;
            }
        }

        {
            int max = vec1[1];
            int index = 1;
            int index2 = NULL;
            int max2 = 0;
            for (int i = 2; i < vec1.size(); i++)
            {

                if (max < vec1[i])
                {
                     index2 = index;
                    index = i;
                    max2 = vec1[index2];
                    max = vec1[i];                  
                }
                if(vec1[i] < max && vec1[i] > max2){
                    index2 = i;
                    max2 = vec1[i];

                }
                
                
            }
            cout <<"->Vital Categories :-" <<endl;
            cout <<endl;
            cout << "- You spend most in " << vec[index] << vec1[index] << endl;
            cout <<endl;
            cout << "- The second most category is " << vec[index2] << vec1[index2] << endl;
        }
    }
};
// int main()
// {
//     Funtion obj;
//     student obj1;
//     obj.input(obj1.category, obj1.value);
//     system("cls");
//     obj.dispay(obj1.category, obj1.value);
//     obj.summer(obj1.value);
//     obj.analysis_student(obj1.category, obj1.value);
//     return 0;
// }