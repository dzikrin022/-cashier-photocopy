hrg = 225 #cost per sheet
print("     ***Photocopy Cost App***     ")
print("INPUT DATA")
nm = input("Consument Name : ")
lbr = input("Many of Sheet : ")
lbr = int(lbr)
by = lbr*hrg
if lbr<100:
    ptg=(5*by)/100
elif lbr>=100 and lbr<=300:
    ptg=(15*by)/100
else:
    ptg=(30*by)/100

print("THE CALCULATION RESULT")
print("Consument Name : "+ nm)
print("Many of Sheet :"+ str(lbr))
print("Photocopy Cost :"+ str(by))
print("Discount :"+ str(ptg))
print("====================")
print("Total : "+ str(by-ptg))

      
    
           
