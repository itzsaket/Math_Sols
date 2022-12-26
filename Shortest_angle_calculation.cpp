/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int wrap_360(const int angle){
    int res = angle % 360;
    if (res < 0) {
        res += 360;
    }
    return res;
}

template <typename T>
T wrap_180(const T angle)
{
    auto res = wrap_360(angle);
    if (res > T(180)) {
        res -= T(360);
    }
    return res;
}

int get_angle_diffrence(int a, int b) 
{
    a = wrap_360(a);
    b = wrap_360(b);
    // cout << "\nangle a " << a;
    // cout << "\nangle b " << b;
    int res = abs(a-b);
    if (res > 180){
        // cout << "value is greater than 180";
        res = wrap_180(res);
        
    }

    return abs(res);

}



int main()
{
    
    int a;
    int b;
    cout << "\nEnter the first val";
    cin >>  a;
    cout << "\nEnter the second val";
    cin >> b;
    
    
    int angle = get_angle_diffrence(a, b);

    
    
    cout<<"\nangle diffrence "<< angle;

    return 0;
}
