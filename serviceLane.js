function serviceLane(n, cases, width) {
    // Complete this function
    var i = 0, result = [];
    for(i = 0; i < cases.length; i++){
      result.push(findMinimum(width, cases[i]));
    }
    return result;
}
function findMinimum(width, cases){
  var i= cases[0]
  var min = width[cases[0]];
  for(; i<=cases[1];i++){
    if(min >= width[i]){
      min = width[i];
    }
  }
  return min;
}
cases = [ [ 0, 3 ], [ 4, 6 ], [ 6, 7 ], [ 3, 5 ], [ 0, 7 ] ];
width = [2, 3, 1, 2, 3, 2, 3, 3];
n = 8;
console.log(serviceLane(n, cases, width));

