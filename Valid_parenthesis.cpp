
#include <map>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> parentheses = {{'(',')'},{'[',']'},{'{','}'}};
        stack<char> x;
        for (char &c : s){
            if (parentheses.find(c) != parentheses.end()){
                x.push(parentheses[c]);
            }
            else{
                if(x.empty() || c != x.top()){
                    return false;
                }
                x.pop();
            }
        }
        return x.empty();
    }
};