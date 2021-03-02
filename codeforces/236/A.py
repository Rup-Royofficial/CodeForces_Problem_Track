a  = set(input(''))             #as in sets the characters/elements don't/can't repeat itself , so it is perfect in this case

#ur input will reduced to only distinct characters (as it a set) and will be stored in the variable 
# and then the if-else part says if the length of the variable(set) is even (in which case it will say CHAT WITH HER) otherwise.....


if len(a)%2 == 0:
    print("CHAT WITH HER!")
if len(a)%2 != 0 :
    print("IGNORE HIM!")    