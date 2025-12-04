#include <iostream>
#include <stdio.h>
using namespace std;

int x = 5;

void mostranum() {
     std::cout << x;
     }
int soma (int n1, int n2) {
    return (n1 + n2);
}
int subtracao (int n1, int n2) {
    return (n1 - n2);
}
int multiplicacao (int n1, int n2) {
    return (n1 * n2);
}
int divisao (int n1, int n2) {
    return (n1 / n2);
}
int main() {
    int y = 3;
    // mostranum();
    std::cout << "\n" << soma(22,45);
    std::cout << "\n" << subtracao(23,45);
    std::cout << "\n" << multiplicacao(23,45);
    std::cout << "\n" << divisao(23,5);

    return 0;
}
