# References and Pointers

### Skill Level Goal
Advanced level is implemented, purpose on practicing!

## Table of Contents
- Pointers
- References
- an already-defined variable : right hand side of equation
- an un-defined variable      : left hand side of equation
- `&` operator and overloaded `&` operator : `return a memory address` operator 
- `*` operator and overloaded `*` operator : `dereferencing` operator
- `Dereference` of `pointer` of a `vector<int>` ,and every element of `vector<int>` : find in `Pointers Continued Jupyter notebook`
- Passing Pointers to a Function : find in `Pointers Continued Jupyter notebook`
- Returning a Pointer from a Function : find in `Pointers Continued Jupyter notebook`
- Out of scope pointer : find in `Pointers Continued Jupyter notebook`

## Overview

## Instructions
- Use the jupyter notebooks to create solid understanding about every variations 
of `*` and `&` operators

**References** : A proper reference & operator usage on left side of equation
```
    int a {5};
    int &b = a;
```
**Pointers** : A proper pointer * operator usage on left side of equation
```
int i = 5;
int* pointer_to_i;
```

### Markdown HELPs 

**Readme.md help**

As a suggestion, the `README.md` file for each repository can include the following information:

- a list of files contained in the repository with a brief description of each file
- any instructions someone might need for running your code
- an overview of the project

Readme.md and Markdown helper links: 

[GitHub Readme.md/Markdowns](https://docs.github.com/en/free-pro-team@latest/github/writing-on-github).

[udacity lessons about Markdown](https://classroom.udacity.com/courses/ud777/lessons/5338568539/concepts/53931993710923)

[Basic writing and formatting syntax](https://docs.github.com/en/free-pro-team@latest/github/writing-on-github/basic-writing-and-formatting-syntax).


**Lists**

You can make an unordered list by preceding one or more lines of text with - or *.

- George Washington
- John Adams
- Thomas Jefferson

**File full name or Directory path**
`bugra.txt`
`/multiple_files_example/main.cpp`

**Links**

You can create an inline link by wrapping link text in brackets [ ], and then wrapping the URL in parentheses ( ). You can also use the keyboard shortcut command + k to create a link.

This site was built using [GitHub Pages](https://pages.github.com/).

**URLs**

GitHub automatically creates links from standard URLs.

Visit https://github.com

**Quoting code**

```
function test() {
  console.log("notice the blank line before this function?");
}
```
```ruby
require 'redcarpet'
markdown = Redcarpet.new("Hello World!")
puts markdown.to_html
```


**Quoting text**
In the words of Abraham Lincoln:

> Pardon my French


**Creating a table**
You can create tables with pipes | and hyphens -. Hyphens are used to create each column's header, while pipes separate each column. You must include a blank line before your table in order for it to correctly render.

| First Header  | Second Header |
| ------------- | ------------- |
| Content Cell  | Content Cell  |
| Content Cell  | Content Cell  |