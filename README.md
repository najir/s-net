# S-Net
  Isaac Perks
  06-14-2023
  
## Description
A basic programming language built for educational purposes. I do not intend to make this language particularly the most usable. I envision this language as having a very symbol based structure that helps alleviate my ADHD when viewing large codebases.

Something like:
```
  ###### class blank
  | Class info |

  ######
  ### [i] FunctionName([i] input1, [i] input2)
    [s] var1
    [i][st][c] var2
    [f] var3
    [i] var4[10] = []
    ## for([i] var5; var5 <10; var5++):
      var1 = "new string"
      var4[3] = var2 + var3
    ##
  ###
  | This would be a comment |
```

Brackets for type decleration
Python line breaking for functions and loops
Types are written with letters instead of full names
six hashtag to represent classes
triple hashtag to represent a functions space
double hashtage for loop/if/other statement space
Comments delcared with opening and closing ||'s


**Project details and goals will grow as I figure out what is feasible and interesting to implement**  
The current goal is to create some sort of mix of C++ and Python that includes:  
- Compiled focused
- Based on C++
- Garbage collection
- Uknown type requirements(as of now, leaning towards a strongly typed language)
- Fast operations(compared to python)
- python inspired readability
- A focus on data science, visualizations, and AI( Hopefully 🤷‍♂️ )

## Process so far
- Creating Lexer for parsing information and storing the data for use later.