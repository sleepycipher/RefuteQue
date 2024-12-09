def test_string_immutability():
    password = input("Enter the Password: ")
    pass_original = password
    try:
        password[0] = "S"  # Attempt to modify the string
        assert False, "Strings should be immutable"
    except TypeError:
        assert pass_original == password, "Original string remains unchanged"

test_string_immutability()
