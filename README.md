# Student-Management-System

![Capture](https://user-images.githubusercontent.com/67097151/129465537-f1a9f9f2-259f-4061-97d5-1599a45f79af.JPG)

Project Description:

The purpose of this project is to ease the data entry process for the student management and make it less intrusive by keeping, editing and maintaining the records of the students.
Filing is used in this project for record keeping.

![Capture2](https://user-images.githubusercontent.com/67097151/129465630-57e46c32-36e2-4f9e-bb9b-3d9b8a0fd524.JPG)


1. Add student record:

In this functionality, we can add following attributes of student in the file:

- First Name
- Last name
- Roll Number
- Section
- Semester
- Gender
- Date Of Birth
- Phone Number
- Email Address
- Percentage

This is done by first retrieving the file and opening the append mode, then taking
the following inputs from the user and then storing it in the 2D array, then at last
when we take the complete record as the input from the user, we append it to the
record designated in the file and allotted to the program and then close the record.

2. Delete Student Record:

In This functionality, we can delete the specific student record saved in the file by
the user, this is done by first searching the particular student record from the file
allotted to the student by their first name, using the strcmp function. Then when the
search is complete, we delete the whole student record in the record file by
removing the next attributes related with the first name saved in the record file.

3. Search student record:

In This functionality, we can search the student record by their first name in the
record file allotted to the student management system and then show the result to
the user, in this we also use the strcmp

4. Modify student record:

In This functionality, we search the student record by their first name, then modify
the attributes added to the file by The Add student record functionality. The
working is almost similar to the Add student record functionality, it just modifies
the entry in the record.

5. Generate Result:

In this functionality, we retrieve the result of the student by their first name, taken
from the user. This is done by retrieving the record saved by the system then in the
record we access the specific attribute of the result, then we save it to the variable
then show to the user.

6. Change password:

In this functionality, we change the default password (1234) saved in the file by
taking the new password from the user and then saving it back to the password file.

7. Display All Record:

In This Functionality, we display all record saved by the system in the file. This is
done by retrieving the records from the file allotted for the system.

![Capture1](https://user-images.githubusercontent.com/67097151/129465539-80e84a05-0622-4b56-aba6-3c85435fbeae.JPG)
