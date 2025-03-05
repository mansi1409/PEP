#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

class SocialNetwork {
private:
    unordered_map<int, unordered_set<int>> friendships; // Stores friendships

public:
    // Function to add friendship between two users
    void addFriend(int userA, int userB) {
        friendships[userA].insert(userB);
        friendships[userB].insert(userA);
    }

    // Function to find mutual friends between two users
    vector<int> getMutualFriends(int userA, int userB) {
        vector<int> mutualFriends;

        if (friendships.count(userA) == 0 || friendships.count(userB) == 0) {
            return mutualFriends; // Return empty if any user doesn't exist
        }

        // Using set_intersection to find common friends
        vector<int> friendsA(friendships[userA].begin(), friendships[userA].end());
        vector<int> friendsB(friendships[userB].begin(), friendships[userB].end());

        sort(friendsA.begin(), friendsA.end());
        sort(friendsB.begin(), friendsB.end());

        set_intersection(friendsA.begin(), friendsA.end(),
                         friendsB.begin(), friendsB.end(),
                         back_inserter(mutualFriends));

        return mutualFriends;
    }

    // Function to suggest friends for a user based on mutual friends
    vector<int> suggestFriends(int user) {
        unordered_map<int, int> mutualCount; // Stores count of mutual friends
        vector<int> suggestions;

        if (friendships.count(user) == 0) return suggestions; // No user found

        for (int friendA : friendships[user]) { // Loop through friends of user
            for (int friendB : friendships[friendA]) { // Friends of friend
                if (friendB != user && friendships[user].count(friendB) == 0) {
                    mutualCount[friendB]++; // Increase mutual friend count
                }
            }
        }

        // Collect users with mutual friends
        for (auto &pair : mutualCount) {
            suggestions.push_back(pair.first);
        }

        return suggestions;
    }
};

int main() {
    SocialNetwork sn;

    // Adding friendships
    sn.addFriend(1, 2);
    sn.addFriend(1, 3);
    sn.addFriend(2, 3);
    sn.addFriend(2, 4);
    sn.addFriend(3, 5);
    sn.addFriend(4, 5);
    sn.addFriend(5, 6);

    // Finding mutual friends
    vector<int> mutual = sn.getMutualFriends(1, 5);
    cout << "Mutual friends of 1 and 5: ";
    for (int f : mutual) cout << f << " ";
    cout << endl;

    // Suggesting friends for user 1
    vector<int> suggestions = sn.suggestFriends(1);
    cout << "Friend suggestions for user 1: ";
    for (int f : suggestions) cout << f << " ";
    cout << endl;

    return 0;
}
