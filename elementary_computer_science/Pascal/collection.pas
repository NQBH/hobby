program collection;
uses crt;
var n: integer;

function is_prime(n: longint): boolean;
var k: longint;
begin
	if n = 1 then exit(false);
	for k := 2 to trunc(sqrt(n)) do
		if (n mod k = 0) then exit(false);
	exit(true);
end;

function is_prime_modified(n: longint): boolean;
var k, sqrt_n: longint;
begin
	if (n = 2) or (n = 3) then exit(true);
	if (n = 1) or (n mod 2 = 0) or (n mod 3 = 0) then exit(false);
	sqrt_n := trunc(sqrt(n));
	k := -1;
	repeat
		inc(k, 6);
		if (n mod k = 0) or (n mod (k + 2) = 0) then break
	until k > sqrt_n;
	exit(k > sqrt_n);
end;

begin
	write('Enter the value of integer n = ');
	readln(n);
	write(is_prime(n),' ', is_prime_modified(n));
	writeln
end.