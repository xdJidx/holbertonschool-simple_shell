![Holberton School logo](https://user-images.githubusercontent.com/120781178/229278297-98c6e4b7-f15f-4788-a893-15cb97f10351.png)


# # :mortar_board: C Project Simple Shell

This project is an integral part of the **HolbertonSchool** training curriculum, which aims to create a minimalist shell in the **C language.**

# Table of Contents 📋

1. Description
2. Compilation
3. Usage
4. Features
5. Environnement
6. Authors


## 1. Description 📖
A simple shell is a computer program that provides a ***command-line interface for executing commands or applications on an operating system.*** The most common shells are those provided with operating systems such as Bash, Zsh, Fish, etc.

A shell can be used to interact with the operating system using plain text commands rather than clicking on icons or navigating through menus. Users can use the commands to perform various tasks such as navigating directories, creating files, deleting files, managing processes, etc. 

A simple shell can be developed using programming languages such as C or Python. The shell's features can be implemented using system calls, standard library functions, and third-party libraries.  

The features of a simple shell typically include user input of commands, parsing of the command, creating processes to execute the command, signal and error handling, regular expression interpretation, input and output redirection, management of environment variables, support for built-in commands, formatting and displaying the results of commands, etc.  

Simple shells are used for a variety of tasks such as task automation, server management, system administration, script development, software compilation, etc.  

finaly, the Simple Shell project is an implementation of the Unix shell. It allows **reading commands entered** by the user and ***executing them by creating child processes.**



## 2. Compilation 🔧

To compile the Simple Shell project, follow **these steps:**

a. Clone the repository from GitHub onto your local machine.

`git clone`

b. Navigate to the directory containing the project files.

c. Use the command for to compile the programm

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`


## 3. Usage 💻

To run the Simple Shell, use the command `./hsh` in the directory where the program was compiled. The shell will then start running, and you can enter commands to be executed.
- to use our simple shell use the command 
   `./hsh`

- you will get this command line 
 `$             `

- Type the command you want to use 
`$ ls   `

- you will then get the same output as the classic shell 
`AUTHORS  hsh_excecute.c  hsh_main.c  hsh_main.h  hsh_prompt.c  hsh_read_command.c  man_1_simple_shell  README.md  _strdup.c `

## 4. Features
- [center]exemple systeme call allowed[center]

![fork-exec-exit-wait-2](https://user-images.githubusercontent.com/122387449/234001269-64adb8d6-91cf-4fe7-91ae-bc8c1f0c776f.png)

  [`Fork`](https://github.com/xdJidx/holbertonschool-simple_shell/blob/main/hsh_main.c)
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



  - [center]exemple functions allowed[center]

   `access`
	This function checks whether the calling process can access a file or directory. It takes two arguments: a filename and a mode indicating the type of access to check for (read, write, or execute).

   `chdir`
	This function changes the current working directory of the calling process to the directory specified in its argument.

   `close`
	This function closes a file descriptor, which is a small integer that identifies an open file or I/O stream.

   `closed`
	This function closes a directory stream, which is a pointer to an object that represents a directory and its contents.

   [`execv`](https://github.com/xdJidx/holbertonschool-simple_shell/blob/main/hsh_excecute.c)
	This function replaces the current process image with a new process image specified by the path argument. The new process image must be an executable file.

   [`Prompt`](https://github.com/xdJidx/holbertonschool-simple_shell/blob/main/hsh_prompt.c)
	This function typically displays a command prompt to the user to prompt them to enter a command.

   [`Get line`](https://github.com/xdJidx/holbertonschool-simple_shell/blob/main/hsh_read_command.c) 
	This function reads a line of input from the user and returns it as a string.


# 5.Enviroment

<!-- ubuntu -->
<a href="https://ubuntu.com/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Ubuntu&color=E95420&logo=Ubuntu&logoColor=E95420&labelColor=2F333A" alt="Suite CRM"></a> OS: Ubuntu 20.04 LTS
<!-- bash -->
<a href="https://www.gnu.org/software/bash/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GNU%20Bash&color=4EAA25&logo=GNU%20Bash&logoColor=4EAA25&labelColor=2F333A" alt="terminal"></a>
<!-- c -->	
<a href="https://www.cprogramming.com/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=C%20Language&color=5C6BC0&logo=c&logoColor=A8B9CC&labelColor=2F333A" alt="C Low level programming language"></a> Language: C
Compiler: gcc 9.3.0
<!-- vim -->
<a href="https://www.vim.org/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Vim&color=019733&logo=Vim&logoColor=019733&labelColor=2F333A" alt="Suite CRM"></a> Editor: VIM 8.1.2269
<!-- git -->
<a href="https://git-scm.com/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Git&color=F05032&logo=Git&logoColor=F05032&labelColor=2F333A" alt="git distributed version control system"></a> Control version: Git
<!-- github -->
<a href="https://github.com" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GitHub&color=181717&logo=GitHub&logoColor=f2f2f2&labelColor=2F333A" alt="Github"></a>

Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)



## 6. AUTHORS :black_nib:

[`samira D and Jerome B`](https://github.com/xdJidx/holbertonschool-simple_shell/blob/main/AUTHORS)


