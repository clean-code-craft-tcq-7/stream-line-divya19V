from typing import List

def get_maximum_value(reading: List) -> int:
    return max(reading)

def get_minimum_value(reading: List) -> int:
    return min(reading)

def get_simple_moving_average(reading: List, k:int = 5 ) -> float:
    n = min(5, len(reading))
    return reading[-5:]/k


