#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<int> st;
    long long res = 0;

    for(char c : s) {
        if(c == 'C') {
            st.push(12);
        }
        else if(c == 'H') {
            st.push(1);
        }
        else if(c == 'O') {
            st.push(16);
        }
        else if(c == '(') {
            st.push(0);
        }

        if(!st.empty() && isdigit(c)) {
            st.top() *= (c - '0');
        }

        if(!st.empty() && c == ')') {
            long long sum = 0;
            while(!st.empty() && st.top() != 0) {
                sum += st.top();
                st.pop();
            }
            if(!st.empty() && st.top() == 0) {
                st.pop();
            }
            st.push(sum);
        }   
    }

    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    cout << res;
}

/*
O: 16
H: 1
C: 12
*/
