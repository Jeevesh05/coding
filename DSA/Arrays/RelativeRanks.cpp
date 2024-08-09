// "https://leetcode.com/problems/relative-ranks/"
#include <vector>
#include <map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

std::vector<std::string> findRelativeRanks(std::vector<int>& score) {
    int n = score.size();
    std::vector<std::string> answer(n);
    std::map<int, int, std::greater<int>> scoreMap; // Map to store score and its index

    // Populate the score map with scores and their indices
    for (int i = 0; i < n; ++i) {
        scoreMap[score[i]] = i;
    }

    int rank = 1;
    // Assign ranks to athletes based on their positions
    for (const auto& pair : scoreMap) {
        int index = pair.second;
        if (rank == 1) {
            answer[index] = "Gold Medal";
        } else if (rank == 2) {
            answer[index] = "Silver Medal";
        } else if (rank == 3) {
            answer[index] = "Bronze Medal";
        } else {
            answer[index] = std::to_string(rank);
        }
        ++rank;
    }

    return answer;
}

int main() {
    std::vector<int> score = {5, 4, 3, 2, 1};
    std::vector<std::string> answer = findRelativeRanks(score);
    // Output the ranks
    for(const auto& rank : answer) {
        cout << rank << " ";
    }
    return 0;
}
