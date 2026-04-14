#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <stdexcept>

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
  if (nums.size() == 0) {
    throw runtime_error("Cannot calculate average of empty vector");
  }
  return static_cast<double>(sum) / nums.size();
}

int findMin(const vector<int>& nums) {
  if (nums.size() == 0) {
    throw runtime_error("Cannot find min of empty vector");
  }
  int m = nums[0];
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] < m) {
      m = nums[i];
    }
  }
  return m;
}

int divide(int a, int b) {
  if (b == 0) {
    throw runtime_error("Division by zero");
  }
  return a / b;
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

  try {
    cout << "Division test: " << divide(10, 0) << endl;
  } catch (const exception& e) {
    cerr << "Exception: " << e.what() << endl;
  }

  if (count == 5) {
    cout << "Count is 5" << endl;
  }

  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << endl;
  }

  return 0;
}