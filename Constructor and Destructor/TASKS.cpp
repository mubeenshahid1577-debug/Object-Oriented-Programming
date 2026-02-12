#include <iostream>
using namespace std;
/*
//task# 1
#include <iostream>
using namespace std;

class item {
    int a, b, c;

public:
    // Default constructor
    item() {
        a = b = c = 0;
    }

    item(int x) {
        a = x;
        b = c = 0;
    }

    item(int x, int y) {
        a = x;
        b = y;
        c = 0;
    }

    item(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    // Destructor
    ~Demo() {
    }
};

int main() {
    item d1;
    item d2(5);
    item d3(5, 10);
    item d4(5, 10, 15);

    return 0;
}
*/
/*
//task# 2
#include <iostream>
using namespace std;

class counter {
    int count;

public:
    // Constructor
    counter() {
        count = 0;
    }

    void inc_count() {
        count++;
    }

    int get_count() {
        return count;
    }
};

int main() {
    counter c1, c2;

    c1.inc_count();
    c1.inc_count();

    c2.inc_count();

    cout << "Count of c1 = " << c1.get_count() << endl;
    cout << "Count of c2 = " << c2.get_count() << endl;

    return 0;
}


//task# 3


class Tour {
    int no_of_adults;
    int no_of_kids;
    int kilometres;
    int total_fare;

public:
    // Default constructor
    Tour() {
        no_of_adults = 0;
        no_of_kids = 0;
        kilometres = 0;
        total_fare = 0;
    }

    void input() {
        cout << "Enter number of adults: ";
        cin >> no_of_adults;

        cout << "Enter number of kids: ";
        cin >> no_of_kids;

        cout << "Enter kilometres: ";
        cin >> kilometres;
    }

    void AssignFare() {
        int fare_per_adult;

        if (kilometres >= 1000)
            fare_per_adult = 500;
        else if (kilometres >= 500)
            fare_per_adult = 300;
        else
            fare_per_adult = 200;

        total_fare = no_of_adults * fare_per_adult;
    }

    void display() {
        cout << "Total Fare = Rs " << total_fare << endl;
    }
};

int main() {
    Tour t;
    t.input();
    t.AssignFare();
    t.display();

    return 0;
}
*/
