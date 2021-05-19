from random import randint
from os import system

alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ "
key_string = "METHINKS IT IS LIKE A WEASEL"
random_str = ""

for i in range(0, 28):
    random_str = random_str + alphabet[randint(0, 26)]

cont = 1
while random_str != key_string:
    copies = [random_str] * 100
    bigger_value = 0
    bigger_value_string = random_str

    for i in range(0, 100):
        value = 0
        string_list = []
        for j in range(0, 28):
            string_list.append(copies[i][j])
        for j in range(0, 28):
            if(randint(1, 100) <= 5):
                string_list[j] = alphabet[randint(0, 26)]
            if(string_list[j] == key_string[j]):
                value += 1
        copies[i] = "".join(string_list)
        if(value > bigger_value):
            bigger_value = value
            bigger_value_string = copies[i]

    random_str = bigger_value_string
    
    system("clear")
    print("Target string:", key_string)
    print("Actual String: {} \nGeneration: {}".format(random_str, cont))
    cont += 1