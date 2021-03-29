import collections
a = int(input())
card=collections.deque(range(1,a+1))
while len(card)!=1:
    card.popleft()
    card.rotate(-1)
print(card[0])