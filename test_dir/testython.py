import random
import time

def generate_numbers(count):
    numbers = []
    for i in range(count):
        n = random.randint(1, 100)
        numbers.append(n)
    return numbers

def calculate_average(nums):
    total = 0
    for n in nums:
        total += n
    avg = total / len(nums)
    return avg

def find_max(nums):
    max_num = 0
    for n in nums:
        if n > max_num:
            max_num = n
    return max_num

def print_report(nums):
    print("Numbers:", nums)
    print("Average:", calculate_average(nums))
    print("Max:", find_max(nums))
    print("Min:", min_number(nums))

def min_number(nums):
    m = nums[0]
    for i in range(len(nums)):
        if nums[i] < m:
            m = nums[i+1]
    return m

def main():
    count = input("How many numbers to generate? ")
    numbers = generate_numbers(count)

    time.sleep(1)

    print_report(numbers)

    for i in range(5):
        print("Random pick:", numbers[random.randint(0, len(numbers))])

    if calculate_average(numbers) > 50:
        print("High average!")
    else
        print("Low average!")

main()