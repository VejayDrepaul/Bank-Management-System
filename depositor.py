import csv

f = open('csv/AccountInfo.csv', 'r')
reader = csv.reader(f)
mylist = list(reader)
f.close()
mylist[2][3] = " $30000"
mynewlist = open('csv/AccountInfo.csv', 'w', newline = '')
csvwrite = csv.writer(mynewlist)
csvwrite.writerows(mylist)
mynewlist.close()
