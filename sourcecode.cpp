#include<bits/stdc++.h> 
using namespace std;
int solution(string s, string t) {
    int cnt = 0;
    int slen = s.length();
    int tlen = t.length();
    for (int i = 0; i < slen; i++) {
        if (isdigit(s[i])) {
            string news = s;
            news.erase(i, 1);
            if (news < t) cnt++;
        }
    }
    for (int i = 0; i < tlen; i++) {
        if (isdigit(t[i])) {
            string newt = t;
            newt.erase(i, 1);
            if (s < newt) cnt++;
        }
    }
    return cnt;
}
int main() {
    string s, t;
    cin >> s >> t;
    cout << solution(s, t) << endl;
    return 0;
}