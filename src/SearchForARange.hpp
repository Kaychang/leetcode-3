#ifndef SEARCH_FOR_A_RANGE_HPP_
#define SEARCH_FOR_A_RANGE_HPP_

#include <vector>
using namespace std;

class SearchForARange {
public:
  vector<int> searchRange(vector<int>& nums, int target);
private:
  int searchRange(vector<int>& nums, int l, int r, int target);
};

#endif // SEARCH_FOR_A_RANGE_HPP_
