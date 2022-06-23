class Solution {
 public:
  int scheduleCourse(vector<vector<int>>& courses) {
    if (courses.size() == 0)
      return 0;

    // Sorting the courses by the end time.
    sort(courses.begin(), courses.end(),
         [](const vector<int>& a, vector<int>& b) { return a[1] < b[1]; });

    // A priority queue that stores the course duration.
    priority_queue<int> q;
    int sum = 0;
    for (auto i : courses) {
      // Adding the course duration to the sum and pushing it to the queue.
      sum += i[0];
      q.push(i[0]);

      // This is the part that is removing the course that has the longest duration.
      if (sum > i[1]) {
        sum -= q.top();
        q.pop();
      }
    }
    // Returning the number of courses that can be taken.
    return q.size();
  }
};