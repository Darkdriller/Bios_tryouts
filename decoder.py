flag="" #use python2 .decode not avalable in python3
for i in range(5):
	flag=flag.decode('hex')
	flag= flag.decode('base64')
	
print(flag)
