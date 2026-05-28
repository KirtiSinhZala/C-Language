# IMPORTANT NOTES

1.  FILE is container in a storage device to store data and it is use to persist the data

2.  RAM is volatile so Constants are lost when program terminates

3. FILE is (hidden)structure that needs to be created for openning a file 

4.  A FILE ptr that points to this structure & is used to access the file.

5. fopen("filename",mode)   -> Function for Opening a File   
5.    MODE : "r","rb" ->  if file not exist they return NULL value 
5.    "w", "wb" -> if file not exist they create it , if exist they delete all data in file and write data we give
        "a" ->  write new data after old data in file

6. fclose(ptr)  -> function(file Pointer name59483256+9-1245-058/) for closing file 