user_password = input("Enter password : ")

password = "hadlecat123!"

if password == user_password:
    print("OK")
else:
    print("NOT OK")
    while password != user_password:
        user_password = input("Enter password : ")
        if password == user_password:
            print("OK")
            break
        else:
            print("NOT OK")
            continue
