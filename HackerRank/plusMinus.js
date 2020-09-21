'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the plusMinus function below.
function plusMinus(arr) {
    let plusValues = 0, minusValues = 0, zeroValues = 0;

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] > 0) plusValues++;
        else if (arr[i] < 0) minusValues++;
        else zeroValues++;
    }

    console.log(plusValues/arr.length);
    console.log(minusValues/arr.length);
    console.log(zeroValues/arr.length);

}

function main() {
    const n = parseInt(readLine(), 10);

    const arr = readLine().split(' ').map(arrTemp => parseInt(arrTemp, 10));

    plusMinus(arr);
}
