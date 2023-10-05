# print statement in Python

**'print()' function (Python 3)**<br>
In Python 3, the print statement has been replaced by the print() function. It requires parentheses

```diff

print("Hello, World!")

```

## Printing Variables
You can print the values of variables using the print function.

```diff
name = "Rajeev TR"
age = 30
print("Name:", name, "Age:", age)

```
## Formatting Output:
You can format the output using f-strings (Python 3.6+), the format() method, or the % formatting.

**Using f-strings:**

```diff
name = "Bob"
age = 25
print(f"Name: {name}, Age: {age}")


```

**Using format():**

```diff
name = "Charlie"
age = 35
print("Name: {}, Age: {}".format(name, age))

```

**Using % formatting (older method):**

```diff
name = "David"
age = 40
print("Name: %s, Age: %d" % (name, age))


```

## Outputting Multiple Items
You can print multiple items in a single print statement by separating them with commas.
```diff
a = 5
b = 10
c = 15
print("Values:", a, b, c)

```

## End Parameter
You can specify the character that separates items in the printed output using the end parameter.

```diff
print("One", end="-")
print("Two", end="-")
print("Three")

# Output: One-Two-Three


```

## Redirecting Output
You can redirect the print output to a file by specifying the file parameter.

```diff
with open("output.txt", "w") as f:
    print("Hello, File!", file=f)

```

**Special Characters:**<br>
You can include special characters in the output string.
```diff

print("This is a new line.\nThis is a tab:\tand this is a backslash: \\")

```

The print function is a versatile tool for displaying information while developing and debugging code in Python. It's crucial for communication between the programmer and the program during the development process.
