#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
   vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> stk;

        for(int i = asteroids.size() - 1; i >= 0; i--)
        {
                if( i == asteroids.size() - 1)
                    stk.push(asteroids[i]);
               
                else if(asteroids[i] > stk.top() && stk.top() < 0 && asteroids[i] + stk.top() > 0)
                {
                    stk.pop();
                    stk.push(asteroids[i]);
                }

                else if(asteroids[i] + stk.top()  == 0 && stk.top() < 0)
                {
                    stk.pop();
                }
                else if(asteroids[i] + stk.top() < 0 && asteroids[i] > 0){

                }
               
                    
                else 
                    stk.push(asteroids[i]);   
        }

        asteroids.clear();
        while(!stk.empty())
        {
            asteroids.push_back(stk.top());
            stk.pop();
        }

        return asteroids;
    }

  
};

int main()
{
   vector<int> v = {-2, -2,1, -1};
   Solution obj;

   obj.asteroidCollision(v);
   for (int x : v)
      {
         cout << x << " ";
      }
}