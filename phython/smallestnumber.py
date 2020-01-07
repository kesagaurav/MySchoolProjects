def smallest_num_list(list):
    a=list[0]
    for x in list:
        if x<a:
            a=a
        return a
    #if x<0:
        #print(" it is largest")#
    #else:
        #print(" it is smallest")#

print(smallest_num_list(list([1,2,3,4])))
      

