

# Project Simple Shell

This project is an integral part of the **HolbertonSchool** training curriculum, which aims to create a minimalist shell in the **C language.**

# Table of Contents

1. Description
2. Compilation
3. Usage
4. Features
5. Authors


## 1. Description 

The Simple Shell project is an implementation of the Unix shell. It allows reading commands entered by the user and executing them by creating child processes.



## 2. Compilation
To compile the Simple Shell project, follow **these steps:**

a. Clone the repository from GitHub onto your local machine.

b. Navigate to the directory containing the project files.

c. Use the command for to compile the programm

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`


## 3. Usage

To run the Simple Shell, use the command `./hsh` in the directory where the program was compiled. The shell will then start running, and you can enter commands to be executed.

## 4. Features 
- exemple systeme call allowed 

![fork-exec-exit-wait-2](https://user-images.githubusercontent.com/122387449/234001269-64adb8d6-91cf-4fe7-91ae-bc8c1f0c776f.png)

  `Fork` 
    A parent process uses fork to **create a new child process.** 
    **The child process**  is a copy of the parent. 
    After fork, both parent and child executes the same program but in separate processes.
  
  `Exec`
      This system call is used to execute a program. 
      It replaces the current process image with a new process image specified by the path argument. 
      The new process image must be an executable file.
  
  `Wait`
      it's used to wait for a child process to terminate. If there are no child processes, the calling process returns immediately with an error. 
      If there are child processes, the calling process blocks until one of its child processes terminates.
  
  `Exit`
      he's terminates the calling process. 
      Any child processes of the calling process are orphaned and become children of the init process.
      
      
  - exemple functions allowed 

access(): This function checks whether the calling process can access a file or directory. It takes two arguments: a filename and a mode indicating the type of access to check for (read, write, or execute).
chdir(): This function changes the current working directory of the calling process to the directory specified in its argument.
close(): This function closes a file descriptor, which is a small integer that identifies an open file or I/O stream.
closedir(): This function closes a directory stream, which is a pointer to an object that represents a directory and its contents.
execve(): This function replaces the current process image with a new process image specified by the path argument. The new process image must be an executable file.
exit(): This function terminates the calling process with the specified exit status.
_exit(): This function terminates the calling process without cleaning up any resources or executing any registered functions.
fflush(): This function flushes the output buffer of a stream.
fork(): This function creates a new process by duplicating the calling process. The new process, known as the child process, is an exact copy of the calling process, known as the parent process.
