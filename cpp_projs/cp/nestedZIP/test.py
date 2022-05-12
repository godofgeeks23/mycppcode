import zipfile

num = 15323
while(num>=0):
    filename = "{score}"+str(num)
    with zipfile.ZipFile(filename,"r") as zip_ref:
        zip_ref.extractall()
    print("extracting file:",filename)
    num-=1

