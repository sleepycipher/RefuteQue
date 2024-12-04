def test_string_immutability():
    s = "hello"
    try:
        s[0] = "H"
        assert False, "Strings should be immutable"
    except TypeError:
        assert True, "String immutability enforced in Python"
