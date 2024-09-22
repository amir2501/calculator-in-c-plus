//
//  main.cpp
//  Simple Calculator
//
//  Created by MacBook Pro M3 on 22/09/2024.
//

#include <iostream>
#include <cstring>
#include <string>


using namespace std;

int add(int x,int y){
    return x + y;
}

int multiply(int x,int y){
    return x * y;
}

int min(int x,int y){
    return x - y;
}

int devide(int x,int y){
    return x / y;
}

void answer(int result){
    cout << "your result is: " << result << endl;
    cout << "________________________" << endl;
}

int main() {
    cout << "Welcome to the calculator app!" << endl;
    
    while (true) {
        char oper;
        int x;
        int y;
        int result;
        
        
        
        cout << "enter your operation: ";
        cin >> oper;
        
        cout << "Enter first number: ";
        cin >> x;
        
        cout << "Enter second number: " ;
        cin >> y;
        
        switch (oper) {
            case '+':
                result = add(x, y);
                answer(result);
                break;
            case '-':
                result = min(x, y);
                answer(result);
                break;
            case '*':
                result = multiply(x, y);
                answer(result);
                break;
            case '/':
                result = devide(x, y);
                answer(result);
                break;
        }
        
        
    }
    return 0;
}
