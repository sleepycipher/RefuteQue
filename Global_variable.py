def test_variable_scope():
    def local_scope():
        x = 10
        return x
    local_scope()
    try:
        x  # Accessing x outside the function
        assert False, "Variable x should not be accessible globally"
    except NameError:
        assert True, "Variable scoping in Python works as expected"
