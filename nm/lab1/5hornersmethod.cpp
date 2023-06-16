#include <iostream>

using namespace std;

double hornerMethod(int n, double coef[], double x) {
    double result = coef[0];
    
    for (int i = 1; i <= n; i++) {
        result = result * x + coef[i];
    }
    
    return result;
}

int main() {
    const int degree = 5;
    double coef[degree+1] = { 1, 0, 0, -6, 0, 10 };
    double x;
    
    cout << "Enter the value of x: ";
    cin >> x;
    
    double result = hornerMethod(degree, coef, x);
    
    cout << "Result: " << result << endl;
    
    return 0;
}
