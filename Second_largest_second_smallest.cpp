#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
std::vector<int> getSecondOrderElements(int n, vector<int> a) {
    int maxi = *max_element(a.begin(), a.end());
    int mini = *min_element(a.begin(), a.end());
    bool smax = false;
    bool smini = false;

    for (int i = 0; i < n; ++i) {
        if (a[i] == maxi && !smax) {
            a[i] = INT_MIN;
            smax = true;
        } else if (a[i] == mini && !smini) {
            a[i] = INT_MAX;
            smini = true;
        }
    }

    maxi = *max_element(a.begin(), a.end());
    mini = *min_element(a.begin(), a.end());

    return {maxi, mini};
}

int main() {
    vector<int> a = {2, 3, 5, 7, 5, 7, 3};
    vector<int> result = getSecondOrderElements(a.size(), a);

   cout << " Max: " << result[0] << endl;
    cout << " Min: " << result[0] << endl;

    return 0;
}
