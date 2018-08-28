if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    highest = -999
    second = -999
    for i in range(n):
        if arr[i] > highest :
            second = highest
            highest = arr[i]
        if arr[i] > second and arr[i] < highest :
            second = arr[i]
            
    print second

    
            

        
