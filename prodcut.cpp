#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    string expiryDate;
    int quantitySold;

public:
    Product(string n = "", double p = 0.0, string e = "", int q = 0)
        : name(n), price(p), expiryDate(e), quantitySold(q) {}

    void setProduct(string n, double p, string e) {
        name = n;
        price = p;
        expiryDate = e;
    }

    double getPrice() const {
        return price;
    }

    string getExpiryDate() const {
        return expiryDate;
    }

    int getQuantitySold() const {
        return quantitySold;
    }

    double getDiscountPercentage() const {
        if (price >= 1000 && price <= 3000) return 5.0;
        if (price >= 3001 && price <= 5000) return 7.5;
        if (price >= 5001 && price <= 10000) return 10.0;
        if (price > 10000) return 20.0;
        return 0.0;
    }

    double getDiscountedPrice() const {
        return price - (price * getDiscountPercentage() / 100.0);
    }

    void sellProduct(int qty) {
        if (qty <= 0) {
            cout << "Invalid quantity entered." << endl;
            return;
        }

        quantitySold += qty;
        cout << "Sold " << qty << " item(s)." << endl;
    }

    void displayProduct() const {
        cout << fixed << setprecision(2);
        cout << "Product Name: " << name << endl;
        cout << "Selling Price: " << price << endl;
        cout << "Discount: " << getDiscountPercentage() << "%" << endl;
        cout << "Discounted Price: " << getDiscountedPrice() << endl;
        cout << "Expiry Date: " << expiryDate << endl;
        cout << "Quantity Sold: " << quantitySold << endl;
    }
};

int main() {
    Product p1("Milk", 2500, "2026-12-31", 0);

    cout << "Product details before selling:" << endl;
    p1.displayProduct();

    p1.sellProduct(5);

    cout << "\nProduct details after selling:" << endl;
    p1.displayProduct();

    return 0;
}
