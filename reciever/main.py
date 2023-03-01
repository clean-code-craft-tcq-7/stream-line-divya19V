from data_stream_processor import process_stream
from metrics import get_maximum_value, get_minimum_value, get_simple_moving_average

def main():
    data_stream = input()
    voltage_readings, current_readings = process_stream(data_stream)
    print("Maximum voltage: ", get_maximum_value(voltage_readings))
    print("Minimum voltage: ", get_minimum_value(voltage_readings))
    print("Moving average of last 5 values: ", get_simple_moving_average(voltage_readings))
    print("")
    print("Maximum current: ", get_maximum_value(current_readings))
    print("Minimum current: ", get_minimum_value(current_readings))
    print("Moving average of last 5 values: ", get_simple_moving_average(current_readings))