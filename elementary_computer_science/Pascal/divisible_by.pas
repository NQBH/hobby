program divisible_by;
uses crt;
var a, b : integer;
begin
	write('Enter the value of integer a = '); readln(a);
	write('Enter the value of integer b = '); readln(b);
	if a mod b = 0 then writeln(a,' is divisible by ', b) else writeln(a,' is not divisible by ', b);
	writeln;
end.