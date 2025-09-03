#include<iostream>
using namespace std;
 
 
 
/* =========== Function Prototypes ========== */
void solve_Q4(void);
 
 
/* ===== Main Function ====== */
 
int main(void){
 
     solve_Q4();
 
 
 
 
}
 
 
 
 
 
/* ======== User-defined functions ======== */
 
void solve_Q4(void){
 
    // 4. Difference
 
    int A, B, C, D;
    cin >> A >> B >> C >> D;
 
    cout << "Difference = " << (1LL*A*B)-(1LL*C*D) << endl;
}