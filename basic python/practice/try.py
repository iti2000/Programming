def rotatelist(l,rn):
    dl = []
    counter = 0
    while counter <= rn:
        counter += 1
        for a in range(len(l)):
            b = a+1
            try:
                dl.append(l[b])
            except:
                dl.append(l[0])
    print(dl)

l = [1,2,3,4,5]
rn = 0
rotatelist(l,rn)
