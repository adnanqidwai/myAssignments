
n= int(input())
for i in range(n):
    s= input()
    b=len(s)

    if b>10:
        print(f"{s[0]}{b-2}{s[b-1]}")
    else:
        print(s)
