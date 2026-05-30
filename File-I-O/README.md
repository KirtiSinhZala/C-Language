# IMPORTANT NOTES

1.  FILE is container in a storage device to store data and it is use to persist the data

2.  RAM is volatile so Constants are lost when program terminates

3. FILE is (hidden)structure that needs to be created for openning a file 

4.  A FILE ptr that points to this structure & is used to access the file.


5. # fopen("filename",mode)   -> Function for Opening a File   
5.    MODE : "r","rb" ->  if file not exist they return NULL value 
5.    "w", "wb" -> if file not exist they create it , if exist they delete all data in file and write data we give
        "a" ->  write new data after old data in file


6. # fclose(ptr)  ->   function(file Pointer name) for closing file 


7. # fscanf(fptr, "%c", &ch)    
   fptr:file pointer(which file want to read),  %c:formet specifiers(which type of data want to read)  , &ch: variable name(where to store)

8. # fprintf(fptr, "%c", ch)
 fptr:file pointer(which file want to read),  %c:formet specifiers(which type of data want to read)  , ch: variable name(which variable value want to write or print)


9. # fgetc(fptr)  
 it bring single character from file  -> for read
 same like fscanf() func but in thhis func pass single parameter

10. # fputc('A', fptr)
it put sigle character in file  -> for Write

11. # EOF(End Of File)  -> NULL
fgetc return EOF to show that the file hasa ended


