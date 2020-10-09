### `The Problem:`
Julius Caesar used a cryptography system, now known as Caesar's Cipher, which swapped each letter for the equivalent in two positions on the Left in the alphabet (for example, 'C' becomes 'A', 'T' becomes 'R', etc. ). At the beginning of the alphabet we go back to the end, that is 'A' becomes 'Y'. We can, of course, try to exchange the letters with any number of positions.

### `Inputs:`
Each test case consists of two lines. The first line contains a string with up to 50 uppercase characters ('A' - 'Z'), which is the sentence after it has been encoded using this modified Caesar Cipher. The second line contains a number ranging from 0 to 25 and representing how many positions each letter has been shifted to the right.

### `Outputs:`
For each input test case, print an output line with the decoded text (transformed back to the original text) according to the rules above and the example below.

### `Test cases:`
`Input 1: ` 
2
VQREQFGT
`Output 1: `
TOPCODER

`Input 2: ` 
10
ABCDEFGHIJKLMNOPQRSTUVWXYZ
`Output 2: `
QRSTUVWXYZABCDEFGHIJKLMNOP

### Font: URI Judge