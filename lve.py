from turtle import *
i=14
arr=["green","red","yellow","purple","orange","blue","black"]
for i in arr:
    color(i)
    begin_fill()
    pensize(3)
    left(50)
    forward(133)
    circle(50,200)
    right(140)
    circle(50,200)
    forward(133)
    end_fill()