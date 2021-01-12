while(True):
    try:
        x = input()
        y = input()
        z = input()
        a = input()
        b = input()
        myset = []
        flag = True
        tam = len(x)
        indexes = []
        for i in range(tam):
            if(x[i] == ' ' and y[i] == ' ' and z[i] == ' ' and a[i] == ' ' and b[i] == ' '):
                indexes.append(i)
        for i in range(tam):
            if(x[i] != ' ' and flag):
                myset.append(x[i])
                flag = False
            if(i in indexes):
                flag = True
        res = ""
        
        #print(myset)
        input()
        for i in myset:
            res = res + i
        print(res)
    except EOFError:
        break
