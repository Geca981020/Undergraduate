class Sum:
    def __init__(self, initiate):
        self.result = initiate

    def add(self, number):
        self.result += number
        return self.result

sum1 = Sum(100)
sum2 = Sum(200)

print(sum1.add(10))
print(sum1.add(20))
print(sum2.add(30))
print(sum2.add(40))