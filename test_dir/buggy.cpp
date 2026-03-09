#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

// Function to generate 'count' number of random numbers between 0 and 100
vector<int> generateNumbers(int count) {
  vector<int> nums;
  srand(time(0)); // seed for random number generation
  for (int i = 0; i < count; i++) {
    nums.push_back(rand() % 100);
  }
  return nums;
}

double average(const vector<int>& nums) {
  int sum = 0;
  for (int num : nums) {
    sum += num;
  }
  return static_cast<double>(sum) / nums.size();
}

int findMin(const vector<int>& nums) {
  int m = nums[0];
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] < m) m = nums[i];
  }
  return m;
}

int main() {
  int count;
  cout << "How many numbers: ";
  cin >> count;
  vector<int> numbers = generateNumbers(count);
  cout << "Average: " << average(numbers) << endl;
  cout << "Min: " << findMin(numbers) << endl;
  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << endl;
  }
  return 0;
}