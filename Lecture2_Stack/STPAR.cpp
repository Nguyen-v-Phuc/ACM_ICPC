#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
void rtg()
{
    while(cin >> n && n != 0) {
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        stack<int> st;
        int p = 1;
        bool ok = true;

        for(int i = 0; i < n; i++) {
            st.push(v[i]);
            while(!st.empty() && st.top() == p) {
                st.pop();
                p++;
            }

            if(v[i] == p) {
                p++;
            }
        }
        ok = st.empty();

        if(ok) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    rtg();
    
    return 0;
}
