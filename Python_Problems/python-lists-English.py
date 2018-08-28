if __name__ == '__main__':
    N = int(raw_input())
    mylist = []
    
    for x in range(N):
        myStr = raw_input().split()
        if myStr[0] == 'insert' :
            mylist.insert(int(myStr[1]), int(myStr[2]))
        if myStr[0]  == 'remove' :
            mylist.remove(int(myStr[1]))
        if myStr[0] == 'append' :
            mylist.append(int(myStr[1]))
        if myStr[0] == 'pop' :
            mylist.pop()
        if myStr[0] == 'sort' :
            mylist.sort()
        if myStr[0] == 'reverse' :
            mylist.reverse()
        if myStr[0] == 'print' :
            print(mylist)
            



 

