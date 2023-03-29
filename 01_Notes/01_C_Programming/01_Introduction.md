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
# Declare or Create a Variable  
To declare or create a variable specify the type and assign a value to the variable<br>
**syntax**<br>
`type variable name=value;`
<br>where type is one of the types in c such as **int** or **float** or **char** , variable name is the name given to our variable like **x** or **roll number** or **my name** and the equal sign used to assign a value to our variable .
<br>for example , if we need to create a variable to store on integer number<br>
`int n=10;`<br>
here we created a variable named **n**and its type is `int` assigned a value **10**.<br>We can also declare a variable without assigning value,we can assign value later<br>
<pre>
<font color="#00979c">int</font> <font color="#000000">n</font><font color="#000000">;</font><font color="#434f54">&#47;&#47;declare a variable named n</font>
<font color="#000000">n</font><font color="#434f54">=</font><font color="#000000">10</font><font color="#000000">;</font><font color="#434f54">&#47;&#47;assigning a value</font>

</pre>
## Output Variables
we already know that we can output or print text using `printf("");`function.However it is not possible to print a value in a variable using the `printf()` only ie,<br>
<pre>
<font color="#00979c">int</font> <font color="#000000">myNum</font> <font color="#434f54">=</font> <font color="#000000">15</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#000000">myNum</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; Nothing happens</font>

</pre>

 To output variables in C, you must get familiar with something called "format specifiers".<br>
 ## Format Specifiers
 Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.A format specifier starts with a percentage sign %, followed by a character.<br>
For example, to output the value of an int variable, you must use the format specifier %d or %i surrounded by double quotes, inside the printf() function:
 
<pre>
<font color="#00979c">int</font> <font color="#000000">myNum</font> <font color="#434f54">=</font> <font color="#000000">15</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d&#34;</font><font color="#434f54">,</font> <font color="#000000">myNum</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; Outputs 15</font>

</pre>
To print other types, use %c for char and %f for float:

<pre>
<font color="#434f54">&#47;&#47; Create variables</font>
<font color="#00979c">int</font> <font color="#000000">myNum</font> <font color="#434f54">=</font> <font color="#000000">15</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Integer (whole number)</font>
<font color="#00979c">float</font> <font color="#000000">myFloatNum</font> <font color="#434f54">=</font> <font color="#000000">5.99</font><font color="#000000">;</font> &nbsp;&nbsp;<font color="#434f54">&#47;&#47; Floating point number</font>
<font color="#00979c">char</font> <font color="#000000">myLetter</font> <font color="#434f54">=</font> <font color="#00979c">&#39;D&#39;</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Character</font>

<font color="#434f54">&#47;&#47; Print variables</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d\n&#34;</font><font color="#434f54">,</font> <font color="#000000">myNum</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%f\n&#34;</font><font color="#434f54">,</font> <font color="#000000">myFloatNum</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%c\n&#34;</font><font color="#434f54">,</font> <font color="#000000">myLetter</font><font color="#000000">)</font><font color="#000000">;</font>

</pre>

To combine both text and a variable, separate them with a comma inside the printf() function:

<pre>
<font color="#00979c">int</font> <font color="#000000">myNum</font> <font color="#434f54">=</font> <font color="#000000">15</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;My favorite number is: %d&#34;</font><font color="#434f54">,</font> <font color="#000000">myNum</font><font color="#000000">)</font><font color="#000000">;</font>

</pre>

To print different types in a single printf() function, you can use the following:

<pre>
<font color="#00979c">int</font> <font color="#000000">myNum</font> <font color="#434f54">=</font> <font color="#000000">15</font><font color="#000000">;</font>
<font color="#00979c">char</font> <font color="#000000">myLetter</font> <font color="#434f54">=</font> <font color="#00979c">&#39;D&#39;</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;My number is %d and my letter is %c&#34;</font><font color="#434f54">,</font> <font color="#000000">myNum</font><font color="#434f54">,</font> <font color="#000000">myLetter</font><font color="#000000">)</font><font color="#000000">;</font>

</pre>

## Change Variable Values
 If we assign a new value to an existing variable, it will overwrite the previous value:
 
  <pre>
<font color="#00979c">int</font> <font color="#000000">n</font> <font color="#434f54">=</font> <font color="#000000">15</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; myNum is 15</font>
<font color="#000000">n</font> <font color="#434f54">=</font> <font color="#000000">10</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; Now myNum is 10</font>

</pre>

You can also assign the value of one variable to another:

<pre>
<font color="#00979c">int</font> <font color="#000000">myNum</font> <font color="#434f54">=</font> <font color="#000000">15</font><font color="#000000">;</font>

<font color="#00979c">int</font> <font color="#000000">myOtherNum</font> <font color="#434f54">=</font> <font color="#000000">23</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47; Assign the value of myOtherNum (23) to myNum</font>
<font color="#000000">myNum</font> <font color="#434f54">=</font> <font color="#000000">myOtherNum</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47; myNum is now 23, instead of 15</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d&#34;</font><font color="#434f54">,</font> <font color="#000000">myNum</font><font color="#000000">)</font><font color="#000000">;</font>

</pre>
 
 Or copy values to empty variables:
 
 <pre>
<font color="#434f54">&#47;&#47; Create a variable and assign the value 15 to it</font>
<font color="#00979c">int</font> <font color="#000000">myNum</font> <font color="#434f54">=</font> <font color="#000000">15</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47; Declare a variable without assigning it a value</font>
<font color="#00979c">int</font> <font color="#000000">myOtherNum</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47; Assign the value of myNum to myOtherNum</font>
<font color="#000000">myOtherNum</font> <font color="#434f54">=</font> <font color="#000000">myNum</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47; myOtherNum now has 15 as a value</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d&#34;</font><font color="#434f54">,</font> <font color="#000000">myOtherNum</font><font color="#000000">)</font><font color="#000000">;</font>

</pre>

## Declaration of Multiple Variables
To declare more than one variable of the same type, use a comma-separated list:

<pre>
<font color="#00979c">int</font> <font color="#000000">x</font> <font color="#434f54">=</font> <font color="#000000">5</font><font color="#434f54">,</font> <font color="#000000">y</font> <font color="#434f54">=</font> <font color="#000000">6</font><font color="#434f54">,</font> <font color="#000000">z</font> <font color="#434f54">=</font> <font color="#000000">50</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d&#34;</font><font color="#434f54">,</font> <font color="#000000">x</font> <font color="#434f54">+</font> <font color="#000000">y</font> <font color="#434f54">+</font> <font color="#000000">z</font><font color="#000000">)</font><font color="#000000">;</font>

</pre>

We can also assign the same value to multiple variables of the same type:

<pre>
<font color="#00979c">int</font> <font color="#000000">x</font><font color="#434f54">,</font> <font color="#000000">y</font><font color="#434f54">,</font> <font color="#000000">z</font><font color="#000000">;</font>
<font color="#000000">x</font> <font color="#434f54">=</font> <font color="#000000">y</font> <font color="#434f54">=</font> <font color="#000000">z</font> <font color="#434f54">=</font> <font color="#000000">50</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d&#34;</font><font color="#434f54">,</font> <font color="#000000">x</font> <font color="#434f54">+</font> <font color="#000000">y</font> <font color="#434f54">+</font> <font color="#000000">z</font><font color="#000000">)</font><font color="#000000">;</font>

</pre>

## C Variable Names
All C variables must be identified with unique names.These unique names are called identifiers.Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
It is recommended to use descriptive names in order to create understandable and maintainable code:

<pre>
<font color="#434f54">&#47;&#47; Good</font>
<font color="#00979c">int</font> <font color="#000000">minutesPerHour</font> <font color="#434f54">=</font> <font color="#000000">60</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47; OK, but not so easy to understand what m actually is</font>
<font color="#00979c">int</font> <font color="#000000">m</font> <font color="#434f54">=</font> <font color="#000000">60</font><font color="#000000">;</font>

</pre>

The general rules for naming variables are:<br>

1)Names can contain letters, digits and underscores.<br>
2)Names must begin with a letter or an underscore (_).<br>
3)Names are case sensitive (myVar and myvar are different variables).<br>
4)Names cannot contain whitespaces or special characters like !, #, %, etc.<br>
5)Reserved words (such as int) cannot be used as names.<br>











