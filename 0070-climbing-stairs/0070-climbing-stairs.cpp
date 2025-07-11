class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int prev1 = 2; 
        int prev2 = 1; 
        int current;

        for (int i = 3; i <= n; ++i) {
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }

        return current;
    }

    int main() {
        int n;
        cout << "Enter number of stairs: ";
        cin >> n;
        cout << "Ways to climb: " << climbStairs(n) << endl;
        return 0;
    }
  
    
};