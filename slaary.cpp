#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

class Seller {
private:
    int pricePerPiece = 5000;
    int incentiveThreshold = 10;
    int incentiveLimit = 20;
    double incentiveRate = 0.05;
    int validEmployeeId = 12345;

    int employeeId = 0;
    int piecesSold = 0;
    int baseSalary = 0;
    int extraPieces = 0;
    double incentive = 0.0;
    double totalSalary = 0.0;

public:
    void readSales() {
        cout << "Enter number of pieces sold: ";
        cin >> piecesSold;
    }

    void calculateBaseSalary() {
        baseSalary = piecesSold * pricePerPiece;
    }

    void calculateIncentive() {
        if (piecesSold > incentiveThreshold) {
            extraPieces = min(piecesSold, incentiveLimit) - incentiveThreshold;
            incentive = extraPieces * pricePerPiece * incentiveRate;
        } else {
            extraPieces = 0;
            incentive = 0.0;
        }
    }

    void calculateTotalSalary() {
        totalSalary = baseSalary + incentive;
    }

    void printSalary() const {
        cout << fixed << setprecision(2);
        cout << "\nSeller salary details:\n";
        cout << "-----------------------\n";
        cout << "Pieces sold: " << piecesSold << "\n";
        cout << "Base salary: " << baseSalary << "\n";
        cout << "Incentive for extra pieces: " << incentive << "\n";
        cout << "Total salary: " << totalSalary << "\n";
        if (piecesSold > incentiveLimit) {
            cout << "Note: incentive is applied only for pieces 11 through 20." << endl;
        }
    }

    void process() {
        readSales();
        calculateBaseSalary();
        calculateIncentive();
        calculateTotalSalary();
        printSalary();
    }

    bool verifyEmployee() {
        cout << "Enter employee ID: ";
        cin >> employeeId;
        return employeeId == validEmployeeId;
    }
};

int main() {
    Seller seller;
    if (seller.verifyEmployee()) {
        seller.process();
    } else {
        cout << "Access denied." << endl;
    }
    return 0;
}
