#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string ab = to_string(a)+to_string(b);
    int abab = 2*a*b;
    
    if(stoi(ab)>abab)
        answer = stoi(ab);
    else
        answer = abab;
    return answer;
}