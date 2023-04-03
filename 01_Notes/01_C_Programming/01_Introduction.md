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
![output2](https://user-images.githubusercontent.com/109785046/228718751-c02319c0-a07d-4c31-a68b-1afbb985a78b.png)
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

![resultpic1](https://user-images.githubusercontent.com/109785046/228717963-a9c89fe4-86b1-4ed3-ba42-6df4e1fb26a6.png)
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

![resultpic2](https://user-images.githubusercontent.com/109785046/228717839-fdcb940c-e6dc-43f0-9d43-ec1d57468bf0.png)

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

![comment1](https://user-images.githubusercontent.com/109785046/228717730-98021338-95dc-40ac-973d-4e68bebd4119.png)

Here the line **"//printf("Hello ,HoNtErBoT!\n");"** is the commented code line ,and it will not executed.

![comreslt1](https://user-images.githubusercontent.com/109785046/228717558-8bbc5309-e656-4f0b-ac66-d475e8dbe4bf.png)

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
2)Names must begin with a letter or an underscore`_`.<br>
3)Names are case sensitive (myVar and myvar are different variables).<br>
4)Names cannot contain whitespaces or special characters like !, #, %, etc.<br>
5)Reserved words (such as int) cannot be used as names.<br>
## C Data Types
The data type specifies the size and type of information the variable will store.

| Data type |    Size     |  Description  |
|-----------|-------------|---------------|
|   int     |2 or 4 bytes	|Stores whole numbers, without decimals|
|float	|4 bytes	|Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits|
|double|	8 bytes|	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits|
|char |	1 byte |	Stores a single character/letter/number, or ASCII values|

## Basic Format Specifiers
There are different format specifiers for each data type. Here are some of them:<br>
|Format Specifier|	Data Type|
|----------------|-----------|
|%d or %i	|int|	
|%f |	float	|
|%lf|	double|	
|%c	|char	|
|%s	| Used for strings (text), which you will learn more about in a later chapter|

## Set Decimal Precision
Wehave probably already noticed that ifwe print a floating point number, the output will show many digits after the decimal point:

![precision1](https://user-images.githubusercontent.com/109785046/228717143-154c10c3-36a1-440a-89c7-bd76abaa146a.png)

If we want to remove the extra zeros (set decimal precision), we can use a dot `.` followed by a number that specifies how many digits that should be shown after the decimal point:

<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">float</font> <font color="#000000">myFloatNum</font> <font color="#434f54">=</font> <font color="#000000">3.5</font><font color="#000000">;</font>

<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%f\n&#34;</font><font color="#434f54">,</font> <font color="#000000">myFloatNum</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Default will show 6 digits after the decimal point</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%.1f\n&#34;</font><font color="#434f54">,</font> <font color="#000000">myFloatNum</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Only show 1 digit</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%.2f\n&#34;</font><font color="#434f54">,</font> <font color="#000000">myFloatNum</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Only show 2 digits</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%.4f&#34;</font><font color="#434f54">,</font> <font color="#000000">myFloatNum</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;<font color="#434f54">&#47;&#47; Only show 4 digits</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

![precision2](https://user-images.githubusercontent.com/109785046/228719684-82c3ad2a-af5c-4423-b9fc-f7f433a7e06c.png)

## C Type Conversion
Sometimes, we have to convert the value of one data type to another type. This is known as **type conversion**.

For example, if we try to divide two integers, `7` by `2`, you would expect the result to be `3.5`. But since we are working with integers (and not floating-point values), the following example will just output `3`:

<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">int</font> <font color="#000000">x</font> <font color="#434f54">=</font> <font color="#000000">7</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">y</font> <font color="#434f54">=</font> <font color="#000000">2</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">sum</font> <font color="#434f54">=</font> <font color="#000000">7</font> <font color="#434f54">&#47;</font> <font color="#000000">2</font><font color="#000000">;</font>

<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d&#34;</font><font color="#434f54">,</font> <font color="#000000">sum</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Outputs 3</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>


![change1](https://user-images.githubusercontent.com/109785046/228720839-bddce7b9-9a4c-40cb-a925-b18ed580471a.png)

To get the right result, we need to know how **type conversion** works.<br>
There are two types of conversion in C:<br>

1)**Implicit Conversion (automatically)**<br>
2)**Explicit Conversion (manually)**<br>
## Implicit Conversion
Implicit conversion is done automatically by the compiler when we assign a value of one type to another.

For example, if we assign an `int` value to a `float` type:
<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#434f54">&#47;&#47; Automatic conversion: int to float</font>
<font color="#00979c">float</font> <font color="#000000">myFloat</font> <font color="#434f54">=</font> <font color="#000000">9</font><font color="#000000">;</font>

<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%f&#34;</font><font color="#434f54">,</font> <font color="#000000">myFloat</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; 9.000000</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>
We can see, the compiler automatically converts the int value `9` to a float value of `9.000000`.This can be risky, as we might lose control over specific values in certain situations.
Especially if it was the other way around - the following example automatically converts the float value `9.99` to an int value of `9`:

<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#434f54">&#47;&#47; Automatic conversion: float to int</font>
<font color="#00979c">int</font> <font color="#000000">myInt</font> <font color="#434f54">=</font> <font color="#000000">9.99</font><font color="#000000">;</font>

<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d&#34;</font><font color="#434f54">,</font> <font color="#000000">myInt</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; 9</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

 Another example,
 
 <pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">float</font> <font color="#000000">sum</font> <font color="#434f54">=</font> <font color="#000000">5</font> <font color="#434f54">&#47;</font> <font color="#000000">2</font><font color="#000000">;</font>

<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%f&#34;</font><font color="#434f54">,</font> <font color="#000000">sum</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; 2.000000</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>
Here the result is `2`,why?  it is because 5 and 2 are still integers in the division.In this case, we need to manually convert the integer values to floating-point values.

## Explicit Conversion
Explicit conversion is done manually by placing the type in parentheses () in front of the value.

<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#434f54">&#47;&#47; Manual conversion: int to float</font>
<font color="#00979c">float</font> <font color="#000000">sum</font> <font color="#434f54">=</font> <font color="#000000">(</font><font color="#00979c">float</font><font color="#000000">)</font> <font color="#000000">5</font> <font color="#434f54">&#47;</font> <font color="#000000">2</font><font color="#000000">;</font>

<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%f&#34;</font><font color="#434f54">,</font> <font color="#000000">sum</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; 2.500000</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>
We can also place the type in front of a variable:

<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">int</font> <font color="#000000">num1</font> <font color="#434f54">=</font> <font color="#000000">5</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">num2</font> <font color="#434f54">=</font> <font color="#000000">2</font><font color="#000000">;</font>
<font color="#00979c">float</font> <font color="#000000">sum</font> <font color="#434f54">=</font> <font color="#000000">(</font><font color="#00979c">float</font><font color="#000000">)</font> <font color="#000000">num1</font> <font color="#434f54">&#47;</font> <font color="#000000">num2</font><font color="#000000">;</font>

<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%f&#34;</font><font color="#434f54">,</font> <font color="#000000">sum</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; 2.500000</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>
we can also work decimal precision:
<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">int</font> <font color="#000000">num1</font> <font color="#434f54">=</font> <font color="#000000">5</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">num2</font> <font color="#434f54">=</font> <font color="#000000">2</font><font color="#000000">;</font>
<font color="#00979c">float</font> <font color="#000000">sum</font> <font color="#434f54">=</font> <font color="#000000">(</font><font color="#00979c">float</font><font color="#000000">)</font> <font color="#000000">num1</font> <font color="#434f54">&#47;</font> <font color="#000000">num2</font><font color="#000000">;</font>

<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%.1f&#34;</font><font color="#434f54">,</font> <font color="#000000">sum</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; 2.5</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

## C Constants
If we don't want others (or ourself) to change existing variable values, we can use the `const` keyword.
This will declare the variable as "constant", which means unchangeable and read-only:

<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">myNum</font> <font color="#434f54">=</font> <font color="#000000">15</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; myNum will always be 15</font>
<font color="#000000">myNum</font> <font color="#434f54">=</font> <font color="#000000">10</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; error: assignment of read-only variable &#39;myNum&#39;</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

We should always declare the variable as constant when weu have values that are unlikely to change:

<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">minutesPerHour</font> <font color="#434f54">=</font> <font color="#000000">60</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">float</font> <font color="#00979c">PI</font> <font color="#434f54">=</font> <font color="#000000">3.14</font><font color="#000000">;</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

When you declare a constant variable, it must be assigned with a value:
<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">minutesPerHour</font> <font color="#434f54">=</font> <font color="#000000">60</font><font color="#000000">;</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>
The method shown in below programm will not work
<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">minutesPerHour</font><font color="#000000">;</font>
<font color="#000000">minutesPerHour</font> <font color="#434f54">=</font> <font color="#000000">60</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; error</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>
## Operators
Operators are used to perform operations on variables and values.
C divides the operators into the following groups:

1)Arithmetic operators<br>
2)Assignment operators<br>
3)Comparison operators<br>
4)Logical operators<br>
5)Bitwise operators<br>

# Arithmetic Operators
Arithmetic operators are used to perform common mathematical operations.

|Operator|	Name	|Description |	Example	|
|--------|--------|------------|----------|
|+|	Addition|	Adds together two values|	x + y|	
|-|	Subtraction	|Subtracts one value from another|	x - y	|
|* |	Multiplication|	Multiplies two values	|x * y|	
|/|	Division	|Divides one value by another|	x / y	|
|%|	Modulus|	Returns the division remainder|	x % y	|
|++|	Increment|	Increases the value of a variable by 1|	++x	|
|--|	Decrement	|Decreases the value of a variable by 1|	--x|

# Assignment Operators
Assignment operators are used to assign values to variables.
In the example given below, we use the assignment operator `=` to assign the value 10 to a variable called x:
<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">int</font> <font color="#000000">x</font> <font color="#434f54">=</font> <font color="#000000">10</font><font color="#000000">;</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

The **addition assignment** operator `+=` adds a value to a variable:
<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">int</font> <font color="#000000">x</font> <font color="#434f54">=</font> <font color="#000000">10</font><font color="#000000">;</font>
<font color="#000000">x</font> <font color="#434f54">+=</font> <font color="#000000">5</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d&#34;</font><font color="#434f54">,</font><font color="#000000">x</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

![operatoradd](https://user-images.githubusercontent.com/109785046/228759911-ca441fae-b3b1-497f-b4bd-65736947964c.png)

A list of all assignment operators:

|Operator	|Example|	Same As|	
|---------|-------|--------|
|=|	x = 5|	x = 5	|
|+=	|x += 3|	x = x + 3|	
|-=|	x -= 3|	x = x - 3|	
|\*=| x \*= 3 |	x = x * 3|	
|/=|	x /= 3|	x = x / 3	|
|%=|	x %= 3|	x = x % 3	|
|&=|	x &= 3|	x = x & 3	|
| \|=	|x  \|= 3|	x = x \| 3	|
|^=|	x ^= 3	|x = x ^ 3|	
|>>=|	x >>= 3	|x = x >> 3	|
|<<=|	x <<= 3|	x = x << 3|

Comparison Operators
Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.

The return value of a comparison is either 1 or 0, which means true (1) or false (0). These values are known as Boolean values.
In the following example, we use the greater than operator (>) to find out if 5 is greater than 3:

<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">int</font> <font color="#000000">x</font> <font color="#434f54">=</font> <font color="#000000">5</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">y</font> <font color="#434f54">=</font> <font color="#000000">3</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d&#34;</font><font color="#434f54">,</font> <font color="#000000">x</font> <font color="#434f54">&gt;</font> <font color="#000000">y</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; returns 1 (true) because 5 is greater than 3</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>


A list of all comparison operators:

|Operator	|Name|	Example|
|---------|----|--------|
|==	|Equal to|	x == y|	
|!=|	Not equal	|x != y|	
|>	|Greater than	|x > y|	
|<	|Less than|	x < y	|
|>=|	Greater than or equal to|	x >= y|	
|<=	|Less than or equal to|	x <= y|

## Logical Operators
You can also test for true or false values with logical operators.
Logical operators are used to determine the logic between variables or values:

![table1](https://user-images.githubusercontent.com/109785046/229272277-abf25825-c229-4cf0-8b4c-4a5e9ca40ac3.png)
## Sizeof Operator
The memory size (in bytes) of a data type or a variable can be found with the sizeof operator:

<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">stdio</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#00979c">int</font> <font color="#000000">myInt</font><font color="#000000">;</font>
<font color="#00979c">float</font> <font color="#000000">myFloat</font><font color="#000000">;</font>
<font color="#00979c">double</font> <font color="#000000">myDouble</font><font color="#000000">;</font>
<font color="#00979c">char</font> <font color="#000000">myChar</font><font color="#000000">;</font>

<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%lu\n&#34;</font><font color="#434f54">,</font> <font color="#00979c">sizeof</font><font color="#000000">(</font><font color="#000000">myInt</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%lu\n&#34;</font><font color="#434f54">,</font> <font color="#00979c">sizeof</font><font color="#000000">(</font><font color="#000000">myFloat</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%lu\n&#34;</font><font color="#434f54">,</font> <font color="#00979c">sizeof</font><font color="#000000">(</font><font color="#000000">myDouble</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%lu\n&#34;</font><font color="#434f54">,</font> <font color="#00979c">sizeof</font><font color="#000000">(</font><font color="#000000">myChar</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#5e6d03">return</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

![size1](https://user-images.githubusercontent.com/109785046/229272339-84dd4635-314d-4b91-a773-00a75a38400d.png)

Note that we use the %lu format specifer to print the result, instead of %d. It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d). On some computers it might work with %d, but it is safer to use %lu.

## C Booleans
C has a bool data type, which is known as booleans.
Booleans represent values that are either `true` or `false`.
# Boolean Variables
In C, the bool type is not a built-in data type, like int or char.

It was introduced in C99, and you must import the following header file to use it:<br>
`#include <stdbool.h>`<br>
A boolean variable is declared with the `bool` keyword and can only take the values **true or false** :
bool isProgrammingFun = true;<br>
bool isFishTasty = false;<br>
Before trying to print the boolean variables, you should know that boolean values are returned as integers:

* 1 (or any other number that is not 0) represents true<br>
* 0 represents false<br>
Therefore, you must use the %d format specifier to print a boolean value:<br>
<pre>
<font color="#434f54">&#47;&#47; Create boolean variables</font>
<font color="#00979c">bool</font> <font color="#000000">isProgrammingFun</font> <font color="#434f54">=</font> <font color="#00979c">true</font><font color="#000000">;</font>
<font color="#00979c">bool</font> <font color="#000000">isFishTasty</font> <font color="#434f54">=</font> <font color="#00979c">false</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47; Return boolean values</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d&#34;</font><font color="#434f54">,</font> <font color="#000000">isProgrammingFun</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;<font color="#434f54">&#47;&#47; Returns 1 (true)</font>
<font color="#d35400">printf</font><font color="#000000">(</font><font color="#005c5f">&#34;%d&#34;</font><font color="#434f54">,</font> <font color="#000000">isFishTasty</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Returns 0 (false)</font>

</pre>


## C If ... Else
# Conditions and If Statements
You have already learned that C supports the usual logical conditions from mathematics:

* Less than: a < b
* Less than or equal to: a <= b
* Greater than: a > b
* Greater than or equal to: a >= b
* Equal to a == b
* Not Equal to: a != b































































