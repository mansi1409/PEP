
    // Function to suggest friends for a user based on mutual friends
    vector<int> suggestFriends(int user) {
        unordered_map<int, int> mutualCount; // Stores count of mutual friends
        vector<int> suggestions;

        if (friendships.count(user) == 0) return suggestions; // No user found