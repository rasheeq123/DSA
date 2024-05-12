#include <bits/stdc++.h>

using namespace std;

vector<int> chocolateBar(int q, int n, int m, int k) {
  vector<int> min_costs(q); // Store minimum cost for each query

  // Handle the base case where K is equal to the total number of pieces (no cuts needed)
  for (int i = 0; i < q; ++i) {
    if (k == n * m) {
      min_costs[i] = 0;
      continue;
    }
  }

  // Solve for other cases using dynamic programming
  for (int i = 0; i < q; ++i) {
    int N = n, M = m, K = k; // Copy query parameters to avoid modification

    // Minimum cost for horizontal and vertical cuts
    int min_horizontal_cut = INT_MAX, min_vertical_cut = INT_MAX;

    // Iterate through all possible horizontal cuts (1 to N-1)
    for (int h = 1; h < N; ++h) {
      int pieces_after_cut = h * M; // Pieces obtained after horizontal cut
      int remaining_pieces = K - pieces_after_cut; // Pieces remaining after taking K

      // Minimum cost for remaining pieces (recursive call)
      int remaining_cost = chocolateBar(1, N - h, M, remaining_pieces)[0]; // Call with single query

      // Cost of horizontal cut (square of cut length)
      int horizontal_cut_cost = h * h;

      // Update minimum cost for horizontal cut if better solution found
      min_horizontal_cut = min(min_horizontal_cut, horizontal_cut_cost + remaining_cost);
    }

    // Similar logic for vertical cuts
    for (int v = 1; v < M; ++v) {
      int pieces_after_cut = v * N;
      int remaining_pieces = K - pieces_after_cut;
      int remaining_cost = chocolateBar(1, N, M - v, remaining_pieces)[0];
      int vertical_cut_cost = v * v;
      min_vertical_cut = min(min_vertical_cut, vertical_cut_cost + remaining_cost);
    }

    // Minimum cost is the lower of horizontal and vertical cut costs
    min_costs[i] = min(min_horizontal_cut, min_vertical_cut);
  }

  return min_costs;
}
int main() {
    // Call the function with some test inputs
    vector<int> result = chocolateBar(1, 2, 2, 4);

    // Print the result
    for (int cost : result) {
        cout << cost << endl;
    }

    return 0;
}