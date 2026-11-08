#include <bits/stdc++.h>
using namespace std;
#define ll long long

void rtg()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    stack<int> st;
    vector<int> res;

    for(int i = 0; i < n; i++) {
        while(!st.empty() && v[st.top()] >= v[i]) { // loại bỏ trực tiếp những số không thỏa mãn
            st.pop();
        }
        if(st.empty()) {
            res.push_back(0);
        }

        else {
            res.push_back(st.top() + 1);
        }
        st.push(i);
    }

    for(int i : res) {
        cout << i << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    rtg();

    return 0;
}
