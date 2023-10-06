#include <iostream>
#include <cmath>

int sEdge;
int sEdgeSq;
int lEdge;
int lEdgeSq;

int main() {
    std::cout << "\n\tHypotenuse_Calculator_CPP" << std::endl;

    std::cout << "\nPlease enter your SHORT EDGE: \t";
    std::cin >> sEdge;
    sEdgeSq = sEdge*sEdge;

    std::cout << "\nPlease enter your LONG EDGE:\t";
    std::cin >> lEdge;
    lEdgeSq = lEdge*lEdge;

    std::cout << "\n\tHypotenuse:\t" << sqrt(sEdgeSq+lEdgeSq) << std::endl;

    std::cout << "\n\tPROGRAM IS OVER" << std::endl;

    return 0;
}
