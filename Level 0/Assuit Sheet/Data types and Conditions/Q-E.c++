#include<iostream>
#include<iomanip>
#define PI 3.141592653
using namespace std;


void solve_Q5(void)
{
    // Area of a circle
 
    cout << fixed << setprecision(9);
    double R;
    cin >> R;
    cout << PI*(R*R);
}

int main(void)
{
    solve_Q5();
}