#include <iostream>

using namespace std;
void hanoi(int quantity, int from,  int to, int via);
int main() {
    hanoi(3, 1, 3, 2);
    return 0;
}

void hanoi(int quantity, int from,  int to, int via){
    if(quantity != 0){
        hanoi(quantity-1, from, via, to);
        std::cout << from << " -> " << to << std::endl;
        hanoi(quantity-1, via, to, from);
    }
}