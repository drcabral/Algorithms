function caesarsCipher(positions, msg) {

    const alphabet = [
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    ]

    const invertedAlphabet = alphabet.slice()
    invertedAlphabet.reverse()

    let cipher = ''

    for (const letter of msg.toUpperCase()) {

        for (let i = 0; i <= 25; i++) {

            if (letter == alphabet[i]) {

                if ((alphabet[i - positions]) == undefined) {
                    cipher += invertedAlphabet[(positions - (alphabet.indexOf(alphabet[i]) + 1))]
                }
                else
                    cipher += alphabet[i - positions]
            }
        }
    }

    return cipher
}

/***
    Test cases
***/
console.log(caesarsCipher(2, 'VQREQFGT'))
console.log(caesarsCipher(10, 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'))