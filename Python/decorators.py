def decorator(func):
    def wrapper():
        print("my first name is firoz")
        func()
        print("pathan")
    return wrapper

@decorator
def greet():
    print("and surname is ")

greet()