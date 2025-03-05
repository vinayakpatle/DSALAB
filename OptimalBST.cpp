#include <iostream>
#include <vector>
#include <climits>

using namespace std;

double optimalBST(const vector<int>& keys, const vector<double>& success_probs, const vector<double>& fail_probs, int n) {
    
    vector<vector<double>> dp(n, vector<double>(n, 0.0));
    
    
    vector<vector<double>> cost(n, vector<double>(n, 0.0));
    
    
    for (int i = 0; i < n; ++i) {
        dp[i][i] = success_probs[i] + fail_probs[i] * 1; 
    }
    
    
    for (int i = 0; i < n; ++i) {
        cost[i][i] = success_probs[i] + fail_probs[i];
        for (int j = i + 1; j < n; ++j) {
            cost[i][j] = cost[i][j - 1] + success_probs[j] + fail_probs[j];
        }
    }
    
    
    for (int length = 2; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) {
            int j = i + length - 1;
            dp[i][j] = INT_MAX;
            
            
            for (int r = i; r <= j; ++r) {
                double left_cost = (r > i) ? dp[i][r - 1] : 0;
                double right_cost = (r < j) ? dp[r + 1][j] : 0;
                double total_cost = left_cost + right_cost + cost[i][j];
                dp[i][j] = min(dp[i][j], total_cost);
            }
        }
    }
    
    return dp[0][n - 1];
}

int main() {
   
    vector<int> keys = {5,15,25,35}; 
    vector<double> success_probs = {0.2,0.15,0.1,0.05};  
    vector<double> fail_probs = {0.3,0.1,0.05,0.15,0.25}; 
    int n = keys.size(); 
    
    double result = optimalBST(keys, success_probs, fail_probs, n);
    
    cout << "The minimum expected cost of the optimal BST is: " << result << endl;
    
    return 0;
}
