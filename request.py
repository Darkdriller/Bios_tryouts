import requests
import json

url='https://api.zippopotam.us/{0}/{1}'.format(input("Enter country code: "),input("Enter pincode: "))
r=requests.get(url)
if r.status_code==200:
    out=json.loads(r.text)
    print("Country: {0} \nPlace name: {1} \nState: {2}".format(out['country'], out['places'][0]['place name'], out['places'][0]['state']))
elif r.status_code==404:
    print("Enter Valid Country or Pincode")
