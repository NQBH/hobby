program square_root;
var a, sqrt_a: real;

begin
	write('Enter a number a = ');
	readln(a);
	sqrt_a := Sqrt(a);
	writeln('sqrt(a) = ', sqrt_a)
end.