# Base-Base-Base
  1) We get a base64 string `R1k0U0FOVEZFQTNER0lCWEdRUURNTlJBR1pRU0FOM0NFQTNERUlCVEdRUURPTVpBR01aU0FOWlRFQTJXTUlCVEdRUURPTVJBR01aU0FOTEdFQTNER0lCVEdBUURHTUJBR01ZQ0FNWlFFQVpUQUlCVEdBUURHTUJBR01ZQ0FOVERFQTNXST09PQ==`
  2) On conversion we get`GY4SANTFEA3DGIBXGQQDMNRAGZQSAN3CEA3DEIBTGQQDOMZAGMZSANZTEA2WMIBTGQQDOMRAGMZSANLGEA3DGIBTGAQDGMBAGMYCAMZQEAZTAIBTGAQDGMBAGMYCANTDEA3WI===`
  3) This appears to be a base32 code so on decoding `69 6e 63 74 66 6a 7b 62 34 73 33 73 5f 34 72 33 5f 63 30 30 30 30 30 30 30 30 6c 7d` this is a hex.
  4) On decoding this further we get `inctfj{b4s3s_4r3_c00000000l}` which is the flag
# Single Byte XOR
  1) we get a cipher `1314190e1c1001024a0825194e145d0e251849251f4e091316032518084a11491407` which is in hex. XORing it against z we get `inctfj{x0r_c4n't_b3_e4sily_br0k3n}`
# Multi Encoder
  1) Using the encoder we can reverse engineer a [decoder](decoder.py).
  2) We get flag `inctfj{Y0u_@re_Qu1t3_th3_D3c0d3r}`
# Naive Cipher  
  1) the cipher `dixoae{oczz_ocz_hvnozm_ja_xvznzm_xdkczm}` we know that flag is inctfj{}. So we can calculate shift as 5 characters up or 21 characters down. Using this shift we       get flag `inctfj{thee_the_master_of_caeser_cipher}`.
# Angry Steve 
  1) on using strings on the given jpg and piping to grep for inctfj we get flag. `strings Angry_ea5bd1a5-23c4-401f-895e-c2ec367499dc.jpg |grep inctfj` and the flag `inctfj{string5_m4keth_fl4gs}`.


# Mischief Kid(Not Complete)
  1) On unziping zip file we get an image. on using string and piping it to grep inctfj we get nothing. On just using strings we get `Flag/PK Flag/busted.pngPK Flag/flag.txtPK`
  2) On doing lsb we get nothing


# Snow Man (Not Complete)
  1) Saw password as `thisiseasy`.


# Con-The-Cat (Not Complete)
  1) on using string and piping it to grep inctfj we get nothing. Using strings also doesnot give anything. On using stegsolve on all filters also doesnot give flag.
