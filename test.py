from pmath import areaOfTriangle, arifmsum, geomsum, circlelen, circlearea


if __name__ == '__main__':
	print(f"area of triangle (a = 3, b = 4, c = 5) = {areaOfTriangle(3, 4, 5)}")
	print(f"sum of arifm (a1 = 1, d = 1, n = 10) = {arifmsum(1, 1, 10)}")
	print(f"sum of geom (b1 = 1, q = 2, n = 5) = {geomsum(1, 2, 5)}")
	print(f"length of circle (r = 4) = {circlelen(4)}")
	print(f"area of circle (r = 4) = {circlearea(4)}")

