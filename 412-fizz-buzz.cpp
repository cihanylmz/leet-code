#include <string>
#include <vector>

using namespace std;
vector<string> fizzBuzz(int n) {
    vector <string> answer;
    int i = 1;
    while(i <= n)
    {
        answer.push_back("");
        if(i % 3 == 0)
            answer[i - 1] += "Fizz";
        if(i % 5 == 0)
            answer[i - 1] += "Buzz";
        if(i % 5 != 0 && i % 3 != 0)
            answer[i - 1] = to_string(i);
        i++;
    }
    return answer;
}