#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int count = 0;
    int n = str.size();
    
    // Count the number of 'Q's to the right of each 'A'
    for (int i = 0; i < n; ++i) {
        if (str[i] == 'A') {
            int leftQ = 0;
            int rightQ = 0;
            
            // Count 'Q's to the left of the current 'A'
            for (int j = 0; j < i; ++j) {
                if (str[j] == 'Q') {
                    ++leftQ;
                }
            }
            
            // Count 'Q's to the right of the current 'A'
            for (int k = i + 1; k < n; ++k) {
                if (str[k] == 'Q') {
                    ++rightQ;
                }
            }
            
            // Each combination of leftQ and rightQ with this 'A' forms a "QAQ"
            count += leftQ * rightQ;
        }
    }
    
    cout << count << endl;
    return 0;
}
