from PythonQt import *

# call our new constructor of QSize
size = QSize(QPoint(1,2));

# call our new QPushButton constructor
button = QPushButton("sometext");

# call the move slot (overload1)
button.move(QPoint(0,0))

# call the move slot (overload2)
button.move(0,0)

# call the static method
print QWidget.mouseGrabber();

# create a CPP object via constructor
yourCpp = YourCPPObject(2,11.5)

# call the wrapped method on CPP object
print yourCpp.doSomething(3);

# show slots available on yourCpp 
print dir(yourCpp)

# destructor will be called:
yourCpp = None
