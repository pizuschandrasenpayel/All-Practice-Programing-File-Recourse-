#Write

file = open("student_data.txt","w")
file.write("Name: Pizus Chandra Sen Payel\n")
file.write("Department: Computer Science & Technology\n")
file.write("Semester: Second\n")
file.write("Collage: Thakurgaon Goverment Polytechnic Institute\n")
file.close()

#Read

file = open("student_data.txt","r")
data = file.read()
print(data)
file.close()