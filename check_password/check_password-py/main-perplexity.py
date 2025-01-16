password = "hadlecat123!"

while True:
    user_password = input("Enter password : ")
    if password == user_password:
        print("OK")
        break
    else:
        print("NOT OK")