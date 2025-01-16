def degree_convertor(x):
    fahrenheit_value = (x * 9.0/5.0) + 32.0
    print(fahrenheit_value)

if __name__ == "__main__":
    user_input = float(input("Enter degree value : "))
    degree_convertor(user_input)
