def process_stream(data):
    battery_voltage = []
    battery_current = []
    data_points = data.split("\n\n")
    for data_point in data_points:
        voltage, current = [int(x) for x in data_point.split("\n")]
        battery_voltage.append(voltage)
        battery_current.append(current)

    return battery_voltage, battery_current

