process.stdin.resume();
process.stdin.setEncoding("utf-8");

let currentLine = 0;
let inputString = "";

process.stdin.on("data", (raw_data) => {
  inputString += raw_data;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((line) => {
      return line.trim();
    });
  main();
});

function readLine() {
  return inputString[currentLine++];
}

function insert(main_string, ins_string, pos) {
  if (typeof pos == "undefined") {
    pos = 0;
  }
  if (typeof ins_string == "undefined") {
    ins_string = "";
  }
  return main_string.slice(0, pos) + ins_string + main_string.slice(pos);
}

function reverseString(str) {
  // return a new array of strings
  const arrayStrings = str.split("");

  // reverse the new created array elements
  const reverseArray = arrayStrings.reverse();

  // join all elements of the array into a string
  const joinArray = reverseArray.join("");

  // return the reversed string
  return joinArray;
}

function main() {
  /**
   * INPUT TECHNIQUES
   */

  // Simple String Input
  const strInput = readLine();

  // Array Input
  const arrInput = readLine().split(" ");

  // Array Destructuring and Three variable input from a single line, separated by a space
  const [x, y, z] = readLine.split(" ");

  // If you need number separated by space just map each element of the array this way
  const [x, y, z] = readLine.split(" ").map(Number);

  /**
   * OUTPUT TECHNIQUES
   */

  //  End by a new line "\n"
  console.log("Hi");

  // Don't end by new line character "\n"
  process.stdout.write("Hi");
}
