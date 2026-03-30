class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int > pila;

        for (string token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
               
                 int b = pila.top();
                pila.pop();
                int  a = pila.top();
                pila.pop();

                if (token == "+") {
                    pila.push(a + b);
                } else if (token == "-") {
                    pila.push(a - b);
                } else if (token == "*") {
                    pila.push(a * b);
                } else if (token == "/") {
                    if (b == 0) {
                        break;
                    }
                    pila.push(a / b);
                }
            } else {
                
                pila.push(stoi(token));
            }
        }

     

        return pila.top();
    }

};
