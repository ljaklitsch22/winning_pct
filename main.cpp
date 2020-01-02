#include <iostream>

typedef std::string string;
static const double JUICE = 1.1;
static const double WIN_WAGER_SIZE = 100;

// Returns the irr of a given betting percentage
static void betting_roi(double winningPct) {
    double winnings = WIN_WAGER_SIZE * winningPct;
    double losings = WIN_WAGER_SIZE * JUICE * (1 - winningPct);

    double profit = winnings - losings;
    double totalMoneyWagered = WIN_WAGER_SIZE * JUICE;

    double roi = profit / totalMoneyWagered;
    std::cout << "Winning Pct: " << winningPct << "\n"
              << "Return on Investment: " << (roi) << "\n";
}

//
int main() {

    double winningPct;
    string check;

    do {
        std::cout << "Enter a Winnning Percentage as percentage" << std::endl;
        std::cin >> winningPct;
        betting_roi(winningPct);
        std::cout << "Enter q to exit. Press any other key to run again" << std::endl;
        std::cin >> check;
    } while (check != "q");

    return 0;
}
