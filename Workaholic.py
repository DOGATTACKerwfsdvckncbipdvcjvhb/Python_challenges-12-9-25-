
while 1:
    workhour = int(input("Input amount of work hours: "))
 
    if 1 < workhour and workhour < 10:
       break

n = 24-workhour

print(f"Denise slept {n} hour(s).")