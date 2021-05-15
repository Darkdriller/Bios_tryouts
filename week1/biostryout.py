
import sys
def NestedLists():
    marksheet = []
    for _ in range(0,int(input())):
        marksheet.append([input(), float(input())])
    second_highest=sorted(list(set([marks[1] for marks in marksheet])))[1]
    print('\n'.join([a for a,b in marksheet if b == second_highest]))
def ginortS():
 print(*sorted(input(), key=('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1357902468').index), sep='')
def Mapping():
    inputnumber=input()
    lst=inputnumber.split()
    lst=[i for i in lst if i.isnumeric()]
    print(lst)
def Multiply():
    inputnumber=input()
    lst=inputnumber.split()
    rslt=1
    for i in lst:
        rslt=int(i)*rslt
    return rslt
def AllOrAny():
    inputnumber=input()
    lst=inputnumber.split()
    x=0;
    for i in lst:
        if(int(i)<0):
            return False
        if(i[::-1]==i):
            x=1
    if x==1:
        return True
def main():
    function_name=sys.argv[1]
    function_dict={
    "AllOrAny": AllOrAny,
    "Multiply": Multiply,
    "ginortS": ginortS,
    "Mapping":Mapping,
    "NestedLists":NestedLists,
    }
    function_dict[function_name]()

if __name__ == '__main__':
    main()
