#include <iostream>

using namespace std;

int main()
{
    long double A,B;
    
    cin>>A>>B;
    
    cout.precision(12);
    cout<<fixed;
    
    cout<<(A/B);
    
    return 0;
}
