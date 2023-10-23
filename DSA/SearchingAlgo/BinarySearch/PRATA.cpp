#include <iostream>
using namespace std;



bool manager(int noOfPrata, int noOfCooks, int rank[], int totalTime){
    int timeLimit = totalTime;
    int timeAc;
    int CookNo = 0;
    int prataNo = 1;
    int pPrata = 0;

    while(noOfPrata != 0){
        pPrata++;
        timeAc = rank[CookNo] * pPrata;
        if(timeAc <= timeLimit){
            timeLimit -= timeAc;
        }
        else if(CookNo < noOfCooks - 1){
            CookNo++;
            pPrata = 1;
            timeLimit = totalTime - (rank[CookNo] * pPrata);
        }
        else return false;
        prataNo++;
        noOfPrata--;
    }

    return true;
}

int main(){

    int noOfPrata = 8;
    int noOfCooks = 8;

    int rank[] = {1, 1, 1, 1, 1, 1, 1, 1};
    
    int minTime = 0;
    int maxTime = (noOfPrata *(noOfPrata + 1)/2) * rank[noOfCooks - 1];
    int timeReq;

    while(minTime <= maxTime){

        int reqTime = minTime +(maxTime - minTime)/2;

        if(manager(noOfPrata, noOfCooks, rank, reqTime)){

            timeReq = reqTime;
            maxTime = reqTime - 1;

        }
        else{

            minTime = reqTime + 1;

        }

    }

    cout << timeReq;

    return 0;
}