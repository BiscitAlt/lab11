#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    string grade[] = {"A","W","F","D","D+","C","C+","B","B+"};
    int score;
    cout << "Press Enter 3 times to reveal your future.";
    for(int i=0; i<3; i++){
        cin.ignore();
    }
    srand(time(0));
    score = rand()%9;
    cout << "You will get " << grade[score] <<" in this 261102.";
    return 0;
}