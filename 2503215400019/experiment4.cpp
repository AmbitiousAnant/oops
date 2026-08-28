#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    cout << "Elements of the collection:" << endl;
    for (auto value : numbers) {
        cout << value << " ";
    }
    cout << "\n\nUsing auto with a string collection:" << endl;
    vector<string> names = {"Alice", "Bob", "Charlie"};
    for (auto const& name : names) {
        cout << name << " ";
    }
    cout << endl;
    return 0;
}
