#This python code is a quick example of using a generator function to iterate through a sequence of numbers,
#objects/strings/chars in a list, etc. 
#Generator Functions are much more efficient than using a for/if/while loop to iterate through a set of values in a list or range. 
#Reference: https://docs.python.org/3/tutorial/classes.html

#Problem we're solving here: basically I want to take an integer input and then iterate from 0 to the inputted number-1
#printing out the square of each of these numbers as I go. Ex: if the input is 5, I would expect an output of 0,1,4,9,16

def generator_Func(n) :
    #a generator for creating the n*n values
    counter = 0
    while counter < n :
        if (counter >= n) :
            return
        yield (counter * counter)
        counter += 1

if __name__ == '__main__':
    n = int(input())
    x = generator_Func(n) # this creates our generator object that we can use to iterate through
    
	for i in x :          # we can now iterate efficiently using our generator function/object
        print(i)
