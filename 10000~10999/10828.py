a = int(input())
card=list(range(1,a+1))
while len(card)!=1:
    del card[0]
    card = list(card[1:])+[card[0]]
print(card[0])