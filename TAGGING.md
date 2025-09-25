# Tagging conventions for this repository
Using tags to mark status, difficulty, and topics for each problem. Tags should be in kebab-case.

### Core status tags
- [solved] Problem solved and verified to pass all testcases.  
    - [difficulty]: Easy, medium, hard

- [first-attempt] First working attempt at the code. May or may not pass all the testcases  
    - [assisted]: External solution was used (beyond code editor, may be documentation lookup or function definition)
    - [x-attempt]: Attempt number is updated dynamically, each attempt is a different solution

- [main-topic]: Can range beyond array, two-pointers, binary-search, dp, graph, recursion, sliding-window, linked-list, tree  

- [in-progress]: May range from in-progress code to needing refactorization
    - [review]: Code is complete, just needs to be reviewed for logical consistencies and optimizations

- [documentation]: Purely for documentation purposes. Need to visit commit history to look at older tags.

- [implementation-type]: Replace with one of the sub-attributes based on the implementation type.
    - [custom-logic]: In-built functions have been subbed out for logical problem solving practice
    - [in-built]: Using the in-built functions to perform tasks

#### Normalization rules
- Separate multiple tags between square brackets.
- Additional tags must be added to the file and can then be used.
- Use 'kebab-case'. Convert spaces/underscores to hyphens and lowercase everything.  
