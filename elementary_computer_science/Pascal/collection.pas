program collection;
uses crt;
var n, k: integer;
// Function: Check prime
function is_prime(n: integer): boolean;
begin
	for k := 2 to trunc(sqrt(n - 1)) do
		if (n mod k = 0) then exit(false);
	exit(true);
end;

begin
	write('Enter the value of integer n = ');
	readln(n);
	writeln(is_prime(n))
end.