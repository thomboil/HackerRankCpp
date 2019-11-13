#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
using namespace std;
// Write your Student class here
class Student {
    public:
    Student(): sum(0) {};

    void input()
    {
        for(int i = 0;i<5; i++)
        {
            cin >> scores[i];
        }
    }

    int calculateTotalScore()
    {
        for(int i = 0;i<5; i++)
        {
            sum+= scores[i];
        }
        return sum;
    }
    private:
    double scores [5];
    double sum;

};

int main() {