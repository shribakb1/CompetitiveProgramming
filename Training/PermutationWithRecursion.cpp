#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n = 3;
vector<int> nums = {0, 1, 2};
vector<bool> used(n, false);
vector<int> perm;

void search() {
    if ((int)perm.size() == n) {
        for (int x : perm) cout << x << " ";
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;

        used[i] = true;
        perm.push_back(nums[i]);
        search();
        perm.pop_back();
        used[i] = false;
    }
}

int main() {
    search();
    return 0;
}
