
class m:
    name = "mohamed"
    
    def f(self):
        pass
    def g(self):
        pass
    
    def __init__(self):
        print(self.name)
    
    def __dict__(self):
        return {"name": self.name}
        
    def __str__(self):
        return f"name: {self.name}"
    
    def __eq__(self, another_obj):
        return self.name == another_obj.name
    def __new__(cls):
        print("new called")
        instance = super(m, cls).__new__(cls)
        return instance
    def __next__(self):
        if self._index < 1:
            self._index += 1
            print("next called")
            return self.name
        else:
            raise StopIteration
    
    def __iter__(self):
        self._index = 0
        return self
    def __repr__(self):
        return f"m({self.name})"
a = m()
b=  m()
print(a == b)
print("type before iterator :" ,type(a))
print(str(a))
#dict(a) error a not itreable
print(a.__dict__())

ca=a.__iter__()
print(ca)
#print(dict(a)) #error a not itreable
print(next(ca)) #same error 
#print(next(ca)) stop iterator raised 
print(repr(a) )
print("after add __next__",iter(a))
print("type after iterator :" ,type(iter(a)))
