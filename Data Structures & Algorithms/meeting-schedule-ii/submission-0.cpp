/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
  static bool compareByStart(const Interval& a, const Interval& b) {
    return a.start < b.start;
}
    int minMeetingRooms(vector<Interval>& intervals) {
    sort(intervals.begin(), intervals.end(), compareByStart);

    priority_queue<int, vector<int>, greater<int>> queue;

    for(int i = 0; i < intervals.size(); i++)
    {
        Interval curr = intervals[i];

        if( !queue.empty() && queue.top() <= curr.start)
        {
            queue.pop();
            
        }
        queue.push(curr.end);
    }

    return queue.size();



    }
};
