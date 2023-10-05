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

**Outputting Multiple Items**
You can print multiple items in a single print statement by separating them with commas.
```diff
a = 5
b = 10
c = 15
print("Values:", a, b, c)

```

