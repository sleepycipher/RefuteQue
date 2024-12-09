def calculate_area():
    length = int(input("Enter the Length: "))
    width = int(input("Enter the Width: "))
    area = length * width
    return area

def test_variable_scope():
    print(calculate_area())
    try:
        length  # Trying to access local variable
        assert False, "Local variable 'length' should not be accessible globally"
    except NameError:
        assert True, "Variable scoping works correctly"
test_variable_scope()