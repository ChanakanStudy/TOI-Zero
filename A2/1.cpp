#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <algorithm>
using namespace std;

struct Point {
    long long x, y;
};

struct Fraction {
    long long num, den;

    Fraction(long long n = 0, long long d = 1) {
        if (d < 0) {
            n = -n;
            d = -d;
        }
        long long g = gcd(llabs(n), llabs(d));
        num = n / g;
        den = d / g;
    }

    bool operator<(const Fraction& other) const {
        return (__int128)num * other.den < (__int128)other.num * den;
    }
};

struct RPoint {
    Fraction x, y;

    bool operator<(const RPoint& other) const {
        if (x < other.x) return true;
        if (other.x < x) return false;
        return y < other.y;
    }
};

long long cross(Point a, Point b, Point c) {
    long long x1 = b.x - a.x;
    long long y1 = b.y - a.y;
    long long x2 = c.x - a.x;
    long long y2 = c.y - a.y;
    return x1 * y2 - y1 * x2;
}

bool onSegment(Point a, Point b, Point p) {
    return cross(a, b, p) == 0 &&
           min(a.x, b.x) <= p.x && p.x <= max(a.x, b.x) &&
           min(a.y, b.y) <= p.y && p.y <= max(a.y, b.y);
}

int sign(long long x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
    return 0;
}

bool intersect(Point a, Point b, Point c, Point d) {
    long long c1 = cross(a, b, c);
    long long c2 = cross(a, b, d);
    long long c3 = cross(c, d, a);
    long long c4 = cross(c, d, b);

    if (sign(c1) * sign(c2) < 0 && sign(c3) * sign(c4) < 0)
        return true;

    if (onSegment(a, b, c)) return true;
    if (onSegment(a, b, d)) return true;
    if (onSegment(c, d, a)) return true;
    if (onSegment(c, d, b)) return true;

    return false;
}

RPoint getIntersection(Point p, Point p2, Point q, Point q2) {
    Point r = {p2.x - p.x, p2.y - p.y};
    Point s = {q2.x - q.x, q2.y - q.y};

    long long den = r.x * s.y - r.y * s.x;

    if (den == 0) {
        if (p.x == q.x && p.y == q.y) return {{p.x, 1}, {p.y, 1}};
        if (p.x == q2.x && p.y == q2.y) return {{p.x, 1}, {p.y, 1}};
        if (p2.x == q.x && p2.y == q.y) return {{p2.x, 1}, {p2.y, 1}};
        return {{p2.x, 1}, {p2.y, 1}};
    }

    long long tnum = (q.x - p.x) * s.y - (q.y - p.y) * s.x;

    long long xnum = p.x * den + r.x * tnum;
    long long ynum = p.y * den + r.y * tnum;

    return {Fraction(xnum, den), Fraction(ynum, den)};
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<Point> red, blue;
    red.push_back({0, 0});
    blue.push_back({0, 0});

    for (int i = 1; i <= N; i++) {
        long long x;
        cin >> x;
        red.push_back({x, i % 2});
    }

    for (int i = 1; i <= M; i++) {
        long long x;
        cin >> x;
        blue.push_back({x, i % 2});
    }

    set<RPoint> ans;

    for (int i = 0; i < N; i++) {
        Point a = red[i];
        Point b = red[i + 1];

        for (int j = 0; j < M; j++) {
            Point c = blue[j];
            Point d = blue[j + 1];

            if (intersect(a, b, c, d)) {
                ans.insert(getIntersection(a, b, c, d));
            }
        }
    }

    cout << ans.size();

    return 0;
}