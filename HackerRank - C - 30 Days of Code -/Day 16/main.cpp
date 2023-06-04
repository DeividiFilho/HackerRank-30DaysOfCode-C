#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try {
        int number = stoi(S);
        cout << number << endl;
    } catch (const invalid_argument& e) {
        cout << "Bad String" << endl;
    } catch (const out_of_range& e) {
        cout << "Bad String" << endl;
    }

    return 0;
}

