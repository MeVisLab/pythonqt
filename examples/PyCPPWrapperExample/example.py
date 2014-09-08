from PythonQt.example import *

print("CustomObject wrapped by decorators")

# create a new object
custom = CustomObject("John","Doe")

# print the object (to see how it is wrapped)
print (custom)

# print the methods available
print (dir(custom))

# set a name
custom.setFirstName("Mike")
custom.setLastName("Michels")

# get the name
print (custom.firstName() + " " + custom.lastName())
