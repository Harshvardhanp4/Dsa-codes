#include <iostream>
#include <string>

int findFinalPosition(const std::string& moves) {
    int position = 1;  // Ball starts under the leftmost cup (Cup 1)

    for (char move : moves) {
        if (move == 'A') {
            position = 2;  // Swap Cup 1 and Cup 2
        } else if (move == 'B') {
            position = 3;  // Swap Cup 2 and Cup 3
        } else if (move == 'C') {
            position = 1;  // Swap Cup 1 and Cup 3
        }
    }

    return position;
}

int main() {
    std::string moves;
    std::cin >> moves;

    int result = findFinalPosition(moves);
    std::cout << result << std::endl;

    return 0;
}
