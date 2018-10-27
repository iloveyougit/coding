string="12345"
def rev(string):
    
    if len(string)==0:
        return string
    else:
        print(string)
        return rev(string[1:])+string[0]
         
print(rev(string))
