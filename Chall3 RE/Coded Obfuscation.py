import sys

def CheckPassword():
    usrInput = str(sys.argv[1])

    flaga = "4FuY1rH"
    bflag = 0
    j = 0

    if(len(usrInput) != 14):
        return "Wrong"

    for i in range(12, -1, -2):
        if(usrInput[i] != flaga[j]):
            return "Wrong, don't give up"
        else:
            j += 1
    
    if(usrInput[1] and usrInput[3] == '3'):
        if(usrInput[5] == '5'):
            if(usrInput[7] == '0'):
                if(usrInput[9] == 'r'):
                    if(usrInput[11] == 'l'):
                        if(usrInput[13] == 'g'):
                            bflag = 1
    if(bflag != 1):
        return "Wrong, almost there"
    elif(bflag == 1):
        return "Correct, flag is ICTF{" + usrInput + "}"


if __name__ == "__main__":

    argCheck = (len(sys.argv))
    if(argCheck != 2):
        print("Require only one argument")
        exit()
    print(CheckPassword())


