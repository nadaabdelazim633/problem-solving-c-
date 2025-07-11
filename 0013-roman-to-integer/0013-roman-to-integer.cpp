class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100},
        {'D', 500}, {'M', 1000}
     };

    int result = 0;
    for (int i = 0; i < s.size(); ++i) {
        int current = roman[s[i]];
        int next = (i + 1 < s.size()) ? roman[s[i + 1]] : 0;

        if (current < next) {
            result -= current;
        } else {
            result += current;
        }
    }

    return result;
}

int main() {
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;
    cout << "Integer value: " << romanToInt(s) << endl;
    return 0;
}
  
    
};