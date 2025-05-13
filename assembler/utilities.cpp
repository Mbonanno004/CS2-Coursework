// utilities cpp
//
// Michael Bonanno
//
// Project 3 Milestone 2

#include <iostream>
#include "utilities.hpp"

String infixToPostfix(const String& infix) {
    if (infix.length() == 0) return String();

    std::vector<String> expression;
    expression = infix.split(' ');

    stack<String> s;
    String lhs, rhs, op;
    String token;

    int i = 0;
    while (expression[i] != ';') {
        token = expression[i];
        ++i;
        if (token == ')') {
            rhs = s.pop();
            op = s.pop();
            lhs = s.pop();
            s.push(lhs + " " + rhs + " " + op);
        } else if (token != '(' && token != '\r') {
            s.push(token);
        } 
    }
    return s.pop();
}

std::vector<String> postfixToAssembly(const String& postfix) {
    std::vector<String> result;
    if (postfix.length() == 0) return result;

    std::vector<String> tokens = postfix.split(' ');
    stack<String> s;
    
    int size = tokens.size();

    int i = 0;
    int tmpCounter = 0;
    while (i < size) {
        String token = tokens[i];
        ++i;

        if (isOperator(token)) {
            String rhs = s.pop();
            String lhs = s.pop();
            result.push_back("   LD     " + lhs);
            String opExp;
            ++tmpCounter;
            if (token == '+') {
                opExp = "   AD     " + rhs;
            } else if (token == '-') {
                opExp = "   SB     " + rhs;
            } else if (token == '*') {
                opExp = "   MU     " + rhs;
            } else if (token == '/') {
                opExp = "   DV     " + rhs;
            }
            result.push_back(opExp);

            String tmpNum = tmpCounter + '0';
            String tmp = "TMP" + tmpNum;
            result.push_back("   ST     " + tmp);

            s.push(tmp);
        } else {
            s.push(token);
        }
    }
    return result;
}

bool isOperator(String ch) {
	return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}
