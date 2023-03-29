# INTRODUCTION TO C PROGRAM
C is a powerful general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972. It can be used to develop software like operating systems, databases, compilers, and so on. It is a very popular language. At first it was developed to write the UNIX operating system so C is  associated with UNIX. When compared to other programming languages like Java and Python, C is very fast. C++ and C have almost the same syntax because C++ was developed as an extension of C. But C++ support classes and objects, while C does not.
# INSTALLATION OF IDE
An IDE (Integrated Development Environment) is used to edit and compile the code.
Here we are using DEV C++. You can find the IDE from the link given below or you can browse directely from any search engine.
<br>download :- https://sourceforge.net/projects/orwelldevcpp/<br>

![dwnldpic](https://user-images.githubusercontent.com/109785046/215250933-834dc99e-89c7-4bc8-b32c-5a0457f7fa4d.png)


To creat our file **File > New >Source File.**
<br>Try the below code as your first program.<br>
<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;hello,HoNtErBoT&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>


</pre>
don't worry about the code,we will discuss it later.

![programpic](https://user-images.githubusercontent.com/109785046/215250809-848b56c4-22af-44cc-aac4-844f1e1d0c0d.png)

let's run our code,for that go to **Excecute > Compile & Rund** or we can press **F11** key .

![runningpic](https://user-images.githubusercontent.com/109785046/215251754-36152e48-a22e-4749-b99b-e4a0f6238bb5.png)

As there is no errors in our program,we will get our result like :- 

![resultpic](https://user-images.githubusercontent.com/109785046/215251930-56fca793-beb0-4f2f-b574-6a577d23c1d1.png)
<br>Now we successfully completed our first program...<br>

# C SYNTAX
All programs having a basic structure, which is called as syntsx of that program . Let's discuss about the syntax of c program .Let's use our first program to make it clear.
<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;hello,HoNtErBoT&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>


</pre>

**1)#include<stdio.h>**  It is call as **header file**which consist of all the input and output functions used in c program. Header files add functionality to C programs.<br>if you don't understand how  **#include <stdio.h>** works. Just think of it as something that always appears in our program.<br><br>
**2)main()**    Another thing that always appear in a C program, is main(). This is called a function.Any code inside its curly brackets {} will be executed.<br><br>**3)printf()** It is a function used to output/print text to the screen. In our example it will output "hello,HoNtErBoT".<br><br>**4)return 0** It ends the main() function.<br><br>Do not forget to add the closing curly bracket  }  to actually end the main function.<br>

**NP:>** Every C statement ends with a semicolon ';'.<br>
   **>** The body of int main() could also been written as:
<br>int main(){printf("Hello World!");return 0;}<br>
The compiler ignores white spaces. However, multiple lines makes the code more readable.<br><br>
# C OUTPUT
To output values or print text in C, you can use the printf() function:<br>
<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;hello,HoNtErBoT&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>


</pre>
<br>
Here we need to get the text **\"hello,HoNtErBoT\"** to our output screen ,so we used it in a **printf**.<br>We can use  many printf() functions in our program. However, note that it does not insert a new line at the end of the output. Look at the given code and its result.<br>
<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;Hello World!&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;I am learning C.&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>
</pre>
![outputpic2](https://user-images.githubusercontent.com/109785046/215393814-05c9185b-ee32-49b4-b7e5-a0bb81ebf8c4.png)
<br>Then how can be get a new line ?<br>
 # C NEW LINES
 To insert a new line, we are using the `\n` character, It is called an **escape sequence** , and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.
 <pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;Hello World!\n&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;I am learning C.&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

![resultpic1](https://user-images.githubusercontent.com/109785046/215395720-2de03135-b6b7-48cc-844f-87e486805dda.png)
<br>
We can also output multiple lines with a single printf() function. However, this could make the code harder to read.And also note that `\n` can only be used with in `" "` only.
<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font> 
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;Hello World!\nI am learning C.&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

![resultpic2](https://user-images.githubusercontent.com/109785046/215396755-d5a8f011-54b4-43af-ba9a-313c024d24f4.png)

Examples of other valid escape sequences are,
|**Escape Sequence**    |       **Description**                  |
|-----------------------|----------------------------------------|
|         `\t`	        |       Creates a horizontal tab         |
|         `\\`	        |       Inserts a backslash character (\)|
|         `\"`	        |       Inserts a double quote character |

# C COMMENTS
Comments can be used to explain code, and to make it more readable. It can also be used to prevent execution when testing alternative code.<br>Comments are two type:<br>
            -1 **singled-lined** <br>
            -2 **multi-lined**
## Single-line Comments 
Single-line comments start with two forward slashes `//`.Any text start with `//`will not be executed.

<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font> 
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47;printf(&#34;Hello ,HoNtErBoT!\n&#34;);</font>
 &nbsp;
 &nbsp;<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;I am learning C.&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

![comment1](https://user-images.githubusercontent.com/109785046/215410334-c075e670-dfaa-4090-bb66-e462d613503c.png)

Here the line **"//printf("Hello ,HoNtErBoT!\n");"** is the commented code line ,and it will not executed.

![comreslt1](https://user-images.githubusercontent.com/109785046/215411035-a85c7c6e-1859-4658-b085-e5c6eab8de36.png)

## C Multi-line Comments
 Multi-line comments start with  `/*` and ends with `*/` . Any text between `/*` and `*/`   will be ignored by the compiler.
## C Variables
Variables are containers to store values like numbers and characters.
There are different types of variables with different keywords ,<br>
            -1 **int** <br>
            -2 **float** <br>
            -3 **char**<br>
            

            
    



