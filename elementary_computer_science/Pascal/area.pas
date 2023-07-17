program area;
var r, a, area_circle, area_square: real;
begin
	write('Radius R = ');
	readln(R);
	area_circle := pi*r*r;
	writeln('Area of circle = ', area_circle);

	write('Side a = ');
	readln(a);
	area_square := a*a;
	writeln('Area of square = ', area_square);
end.