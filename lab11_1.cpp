#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    string grade;
    int score;
    cout << "Press Enter 3 times to reveal your future.";
    for(int i=0; i<3; i++){
        cin.ignore();
    }
    srand(time(0));
    score = rand()%9;
    switch (score)
    {
    case 8:
        grade = "B+";
        break;
    case 7:
        grade = "B";
        break;
    case 6:
        grade = "C+";
        break;
    case 5:
        grade = "C";
        break;
    case 4:
        grade = "D+";
        break;
    case 3:
        grade = "D";
        break;
    case 2:
        grade = "F";
        break;
    case 1:
        grade = "W";
        break;
    default:
        grade = "A";
        break;
    }
    cout << "You will get " << grade <<" in this 261102.";
    return 0;
}