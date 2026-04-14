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
<<<<<<< HEAD

  for (int i = 0; i <= nums.size(); i++) {
    if (nums[i] < m)
      m = nums[i + 1];  // index bug
=======
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] < m) m = nums[i];
>>>>>>> e314da49b5bfccbbd7b439cb9605c758bddc4fe3
  }
  return m;
}

int divide(int a, int b) {
  return a / b; // no zero check
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

  cout << "Division test: " << divide(10, 0) << endl; // runtime crash

  if (count = 5) { // assignment instead of comparison
    cout << "Count is 5" << endl;
  }

  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << endl
  } // missing semicolon above

  return 0
}