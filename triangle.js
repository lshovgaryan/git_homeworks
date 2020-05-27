function print_triangle(size) {
  let line = "";
  for (let i = 1; i <= size; i++) {
    for(let j=1; j<=i; j++){ 
      line += "*";
    }
	 line+="\n";
  }
  return line + "\n";
}
console.log(print_triangle(22));
