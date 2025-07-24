#include <iostream>
#include <vector>

using namespace std;

int n = 3;
vector<int> subset;

void search(int k) {
    if (k == n) {
        cout << "{ ";
        for (int x : subset) cout << x << " ";
        cout << "}\n";
        return;
    }

    search(k + 1);

    subset.push_back(k);
    search(k + 1);
    subset.pop_back();

}

int main() {
    search(1);
    return 0;
}
