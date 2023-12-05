#include<iostream>
using namespace std;

int getQuotient(int divisor, int dividend){
    if (divisor == 0)
    {
        cout << "Invalid divisor" << endl;
        return 0; // or any other value indicating an error
    }

    int s = 0;
    int e = dividend;
    int mid, ans = 0;

    while(s <= e){
        mid = s + (e - s)/2;

        if (mid * divisor == dividend){
            return mid;
        }

        if(mid * divisor < dividend){
            // ans store
            ans = mid;
            // right side
            s = mid + 1;
        }
        else {
            // left side
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    int divisor = 1;
    int dividend = -35;

    if(divisor == 0)
    {
        cout << "Invalid divisor" << endl;
        return 1; // or any other value indicating an error
    }

    int ans = getQuotient(abs(divisor), abs(dividend));

    // now to decide the sign of the answer
    if((divisor < 0 && dividend > 0) || (divisor > 0 && dividend < 0))
    {
        ans = 0 - ans;
    }

    cout << "FINAL ANS: " << ans << endl;
    return 0;
}
