mod = 1000000007
supercutegirl = int(input())

iwtcff = pow(3,supercutegirl * 3, mod)
iwtlff = pow(7,supercutegirl,mod)
tflc = iwtcff - iwtlff
if tflc < 0:
   tflc += mod

tflc %= mod

print(tflc) 