H, M = input().split()
H= int(H)
M= int(M)
pH=0
pM=0
if M<45:
    pH=H-1
    if pH<0:
        pH=23
    pM=15+M
else :
    pH=H
    pM=M-45   
print("{0} {1}".format(pH,pM))