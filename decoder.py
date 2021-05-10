import base64
flag=open("cipher.txt","r").read()
while "inctfj" not in str(flag):
    try:
        flag=base64.b16decode(flag)
    except:
        try:
            flag=base64.b32decode(flag)
        except:
            flag=base64.b64decode(flag)
print(flag)
