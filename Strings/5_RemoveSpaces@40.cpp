#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            // Replace space with '@40' in the original string
            s[i] = '@'; // ye alag se bcz @40 substring it will be added
            			// after the space so, space will remain in the string
            s.insert(i + 1, "40");
        }
    }

    // Output the modified string
    cout << s << endl;

    return 0;
}
