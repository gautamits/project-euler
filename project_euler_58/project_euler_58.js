
var isprime=function(n){
	if(n<=1) return 0;
	if(n<=3) return 1;
	if(n%2==0 || n%3==0) return 0;
	var i=5;
	while(i*i <= n){
		if(n%i==0 || n%(i+2)==0) return 0;
		i+=6;
	}
	return 1;
}

var denominator = 5;
var numerator = 3;
var gap = 4;
var corner = 5;
while(numerator/denominator > 0.1){
	var corner2=corner*corner-gap;
	var corner3=corner*corner-2*gap;
	var corner4=corner*corner-3*gap;
	if(isprime(corner2)) numerator+=1;
	if(isprime(corner3)) numerator+=1;
	if(isprime(corner4)) numerator+=1;
	console.log(corner*corner,corner2,corner3,corner4);
	gap+=2;
	corner+=2;
	denominator+=4;
	console.log(numerator/denominator);
}
console.log(corner-2);

