#include <bits/stdc++.h>

using namespace std;

int precedence (const char& c) {
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '^')
        return 3;
    else
        return 0;
}

string infixToPostfix (const string& s) {
    stack<char> opStack;
    queue<char> output;

    for (char c : s) {
        if (isdigit(c) || isalpha(c))
            output.push(c);
        else if (c == '(')
            opStack.push(c);
        else if (c == ')') {
            while (!opStack.empty() && opStack.top() != '(') {
                output.push(opStack.top());
                opStack.pop();
            }
            opStack.pop();
        } else {
            while (!opStack.empty() && precedence(opStack.top()) >= precedence(c)) {
                output.push(opStack.top());
                opStack.pop();
            }
            opStack.push(c);
        }
    }

    while (!opStack.empty()) {
        output.push(opStack.top());
        opStack.pop();
    }

    string solution;
    while (!output.empty()) {
        solution += output.front();
        output.pop();
    }
    return solution;
}

int main() {
    string s;
    cin >> s;
    string prueba = "3+4*2/(1-5)^(2/4)";

    cout << "Prueba: " << infixToPostfix(prueba) << "\n\n";
    cout << infixToPostfix(s);
    return 0;
}
