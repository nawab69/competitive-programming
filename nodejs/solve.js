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
  let t = readLine(Number);
  while (t--) {
    const n = readLine(Number);
    let str = readLine();

    if (n == 3 && str == "TMT") {
      console.log("YES");
    } else if (n > 3) {
      let count = 0;
      const arr = str.split("");
      if (arr[0] === "T" && arr[arr.length - 1] === "T") {
        arr.forEach((x) => {
          if (x == "T") count++;
        });
        if (count === (n / 3) * 2) {
          let tCount = 0;
          let mCount = 0;
          let f = 1;
          for (let p = 0; p < n / 2; p++) {
            if (arr[p] == "T") {
              tCount++;
            } else {
              mCount++;
            }
            if (mCount > tCount) {
              console.log("NO");
              f = 0;
              break;
            }
            if (tCount == n / 3) {
              f = 1;
              break;
            }
          }

          if (f > 0) {
            tCount = 0;
            mCount = 0;
            for (let p = arr.length - 1; p > n / 2 - 1; p--) {
              if (arr[p] == "T") {
                tCount++;
              } else {
                mCount++;
              }
              if (mCount > tCount) {
                console.log("NO");
                f = 0;
                break;
              }
              if (tCount == n / 3) {
                console.log("YES");
                break;
              }
            }
          }
        } else {
          console.log("NO");
        }
      } else {
        console.log("NO");
      }
    } else {
      console.log("NO");
    }
  }
}
