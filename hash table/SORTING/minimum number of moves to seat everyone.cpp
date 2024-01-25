class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        // Sort the vectors to arrange the positions in ascending order
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        // Initialize a variable to store the total number of moves
        int ans = 0;

        // Loop through the students and calculate the absolute difference
        // between their positions and the corresponding seat positions
        for (int i = 0; i < students.size(); i++) {
            ans += abs(students[i] - seats[i]);
        }

        // Return the total number of moves
        return ans;
    }
};
