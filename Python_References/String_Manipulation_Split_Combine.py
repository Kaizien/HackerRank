#Basic string manipulation example. 
#Take in a string from a user where each word is separated by a " " delimeter. 
#Return/print out the same string with "-" between each word/as a delimeter

def split_and_join(line):
    # write your code here
    a = line
    a = a.split(" ") #convert a into a list of strings
    a = "-".join(a)
    
    
    return a
    
if __name__ == '__main__':
    #line = input() #used if wanting user input
    line = "This is a test using a string with space delimiter"
    
    result = split_and_join(line)
    print(result)