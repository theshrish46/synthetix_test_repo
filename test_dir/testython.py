import random
import time
from typing import List

def generate_numbers(count: int) -> List[int]:
    numbers = [random.randint(1, 100) for _ in range(count)]
    return numbers

def calculate_average(nums: List[int]) -> float:
    total = sum(nums)
    avg = total / len(nums)
    return avg

def find_max(nums: List[int]) -> int:
    max_num = max(nums)
    return max_num

def min_number(nums: List[int]) -> int:
    return min(nums)

def print_report(nums: List[int]) -> None:
    print("Numbers:", nums)
    print("Average:", calculate_average(nums))
    print("Max:", find_max(nums))
    print("Min:", min_number(nums))

def main() -> None:
    while True:
        try:
            count = int(input("How many numbers to generate? "))
            if count <= 0:
                print("Please enter a positive integer.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    numbers = generate_numbers(count)
    time.sleep(1)
    print_report(numbers)
    for _ in range(5):
        print("Random pick:", random.choice(numbers))
    if calculate_average(numbers) > 50:
        print("High average!")
    else:
        print("Low average!")

def main_wrapper() -> None:
    try:
        main()
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    main_wrapper()