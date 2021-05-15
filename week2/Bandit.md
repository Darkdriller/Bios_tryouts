# Bandit OverTheWire writeup
### Level 0
   1) Connect to bandit.labs.overthewire.org using username bandit0 and port 2220. Usage `ssh bandit0@bandit.labs.overthewire.org -p 2220` using password bandit0.
   2) List files using `ls` and then find readme file  read the file using cat readme. And get Password for level 1 which is `boJ9jbbUNNfktd78OOpsqOltutMc3MY1`.
### Level 1
   1) Connect to bandit.labs.overthewire.org using username bandit1 and port 2220. Usage `ssh bandit1@bandit.labs.overthewire.org -p 2220` using password gotten in earlier level.
   2) List files using `ls`, password in file named `-` so use `cat ./-`. Get password for level 2 which is `CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9`
### Level 2
   1) Connect to bandit2. List files using `ls` password in file named `spaces in filename` so use `cat spaces\ in\ this\ filename`.Get password for level 3 which is `UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK`
### Level 3
   1) Connect to bandit3. Do `ls` then `cd inhere` and then `ls` and then `cat .hidden`. Get password for level 4 `pIwrPrtPN36QITSp3EQaw936yaFoFgAB`
### Level 4
   1) Connect to bandit4. Do file in each file in inhere directory by using `file inhere/*`. find `./-file07` is a human readable file then do `cd inhere` and  `cat ./-file07`.       get password for level 5 `koReBOKuIDDepwhWk7jZC0RTdopnAYKh`.
### Level 5
   1) Connect to bandit5.`cd inhere` use find to find a file of size 1033 bytes by `find . -type f -size 1033c`  then cat the location using `cat ./maybehere07/.file2`. Get       password for level 6 `DXjZPULLxYr17uwoI01bNLQbtFemEgo7`
### Level 6
   1) Connect to bandit6. Use find `find / -user bandit7 -size 33c` find location viz. `/var/lib/dpkg/info/bandit7.password` then cat it using `cat         /var/lib/dpkg/info/bandit7.password` to get password for level 7 `HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs`.
### Level 7
   1) Connect to bandit7. use grep `grep millionth data.txt` find password for level 8 `cvX2JJa4CFALtqS87jk27qwqGhBM9plV`.
### Level 8
   1) Connect to bandit8. use use cat data.txt pipe to sort and pipe to uniq -u `cat data.txt | sort | uniq -u` get password for level 9 `UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR`
### Level 9
   1) Connect to bandit9. use strings data.txt and pipe it to grep `strings data.txt |sort | grep =====` get password for level 10 `truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk`.
### Level 10
   1) Connect to bandit10. use base64 `base64 -d data.txt` to get password for level 11 `IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR`.
