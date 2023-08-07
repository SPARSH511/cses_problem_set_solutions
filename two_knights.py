n = int(input())
for i in range(1,n+1):
    #ans is (n**2)C2-4(n-2)(n-1)
    #no. of 2x3 and 3x2 grids multiplied by 2
    #to account for 2 ways in each grid 
    #n**2C2 is the total number of ways to place
    #knights on n*n board
    print(int(((i**2)*((i**2)-1)//2)-(4*(i-2)*(i-1))))
