console.log("HELLO")
console.log(4>>1)

let n=12;
let count=0;
while(n!=0){
    if(n&1){
        count++;
    }
    n=n>>1;
}
console.log(count)