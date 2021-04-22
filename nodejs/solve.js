//////////////////////  Nodejs  Problem Solving /////////////////
/////////////////////* @author  Nawab Khairuzzaman Mohammad Kibria *////////

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

///////////////////////// END BASIC IO STREAM TEMPLATE //////////////////////

function main() {
  // code here
}
