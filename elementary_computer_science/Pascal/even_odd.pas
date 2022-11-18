program even_odd;
uses crt;
var num : integer;
begin
	write('Enter the value of integer num = '); readln(num);
	if num mod 2 = 0 then writeln(num,' is even') else writeln(num, ' is odd');
	writeln;
end.