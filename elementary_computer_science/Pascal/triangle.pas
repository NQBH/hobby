program triangle;
var a, b, c: real;
begin
	readln(a, b, c);
	if (a + b > c) and (b + c > a) and (c + a > b) and (a > 0) and (b > 0) and (c > 0) then
		writeln(a, b, c, 'are 3 sides of a triangle')
	else
		writeln(a, b, c, ' are not 3 sides of a triangle');
end.