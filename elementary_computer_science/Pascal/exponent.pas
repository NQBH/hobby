program exponent;
var x, y, z: real;
begin
	readln(x, y);
	if x >= 0 then
		begin
			z := exp(y*ln(x));
			writeln(z);
		end
	else
		writeln(#7, 'Cannot compute since x is negative!');
end.