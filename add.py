def addition(num1: int, num2: int) -> int:
    return num1 + num2

def subtract(num1: int, num2: int) -> int:
    return num1 - num2

def multiply(num1: int, num2: int) -> int:
    return num1 * num2

def divide(num1: int, num2: int) -> float:
    if num2 == 0:
        raise ZeroDivisionError('Cannot divide by zero')
    return num1 / num2