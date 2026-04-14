#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

vector<int> generateNumbers(int count) {
  vector<int> nums;

  for (int i = 0; i <= count; i++) {  // off by one
    nums.push_back(rand() % 100);
  }

  return nums;
}

double average(vector<int> nums) {
  int sum = 0;

  for (int i = 0; i < nums.size(); i++) {
    sum += nums[i];
  }

  return sum / nums.size();  // integer division
}

int findMin(vector<int> nums) {
  int m = nums[0];

  for (int i = 0; i <= nums.size(); i++) {
    if (nums[i] < m)
      m = nums[i + 1];  // index bug
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

  for (int i = 0; i <= numbers.size(); i++) {
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