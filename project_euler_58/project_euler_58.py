
def isprime(n):
	if n<=1:
		return 0;
	if n<=3:
		return 1;
	if n%2==0 or n%3==0:
		return 0;
	i=5;
	while i*i <= n:
		if n%i==0 or n%(i+2)==0:
			return 0;
		i+=6;
	return 1;


denominator = 5;
numerator = 3;
gap = 4;
corner = 5;
while numerator/denominator > 0.1:
	corner2=corner*corner-gap;
	corner3=corner*corner-2*gap;
	corner4=corner*corner-3*gap;
	if isprime(corner2):
		numerator+=1;
	if isprime(corner3):
		numerator+=1;
	if isprime(corner4):
		numerator+=1;
#	print(corner*corner,corner2,corner3,corner4);
	gap+=2;
	corner+=2;
	denominator+=4;
	print(numerator/denominator);
print(corner-2);

