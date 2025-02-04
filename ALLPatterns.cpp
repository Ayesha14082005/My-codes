#include <iostream>
using namespace std;

// Function to print a right-angled triangle with stars
void pattern1(int n) {
    cout << "Pattern 1: Right-Angled Triangle\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted right-angled triangle with stars
void pattern2(int n) {
    cout << "Pattern 2: Inverted Right-Angled Triangle\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a pyramid with stars
void pattern3(int n) {
    cout << "Pattern 3: Pyramid\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted pyramid with stars
void pattern4(int n) {
    cout << "Pattern 4: Inverted Pyramid\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a diamond with stars
void pattern5(int n) {
    cout << "Pattern 5: Diamond\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow right-angled triangle with stars
void pattern6(int n) {
    cout << "Pattern 6: Hollow Right-Angled Triangle\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow pyramid with stars
void pattern7(int n) {
    cout << "Pattern 7: Hollow Pyramid\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow diamond with stars
void pattern8(int n) {
    cout << "Pattern 8: Hollow Diamond\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with numbers
void pattern9(int n) {
    cout << "Pattern 9: Right-Angled Triangle with Numbers\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted right-angled triangle with numbers
void pattern10(int n) {
    cout << "Pattern 10: Inverted Right-Angled Triangle with Numbers\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a pyramid with numbers
void pattern11(int n) {
    cout << "Pattern 11: Pyramid with Numbers\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted pyramid with numbers
void pattern12(int n) {
    cout << "Pattern 12: Inverted Pyramid with Numbers\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a diamond with numbers
void pattern13(int n) {
    cout << "Pattern 13: Diamond with Numbers\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with alphabets
void pattern14(int n) {
    cout << "Pattern 14: Right-Angled Triangle with Alphabets\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted right-angled triangle with alphabets
void pattern15(int n) {
    cout << "Pattern 15: Inverted Right-Angled Triangle with Alphabets\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a pyramid with alphabets
void pattern16(int n) {
    cout << "Pattern 16: Pyramid with Alphabets\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted pyramid with alphabets
void pattern17(int n) {
    cout << "Pattern 17: Inverted Pyramid with Alphabets\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a diamond with alphabets
void pattern18(int n) {
    cout << "Pattern 18: Diamond with Alphabets\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with continuous numbers
void pattern19(int n) {
    cout << "Pattern 19: Right-Angled Triangle with Continuous Numbers\n";
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with continuous alphabets
void pattern20(int n) {
    cout << "Pattern 20: Right-Angled Triangle with Continuous Alphabets\n";
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow right-angled triangle with numbers
void pattern21(int n) {
    cout << "Pattern 21: Hollow Right-Angled Triangle with Numbers\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << j << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow pyramid with numbers
void pattern22(int n) {
    cout << "Pattern 22: Hollow Pyramid with Numbers\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow diamond with numbers
void pattern23(int n) {
    cout << "Pattern 23: Hollow Diamond with Numbers\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with continuous numbers in reverse order
void pattern24(int n) {
    cout << "Pattern 24: Right-Angled Triangle with Continuous Numbers in Reverse Order\n";
    int num = n * (n + 1) / 2;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << num-- << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with continuous alphabets in reverse order
void pattern25(int n) {
    cout << "Pattern 25: Right-Angled Triangle with Continuous Alphabets in Reverse Order\n";
    char ch = 'A' + n * (n + 1) / 2 - 1;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << ch-- << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow right-angled triangle with continuous numbers
void pattern26(int n) {
    cout << "Pattern 26: Hollow Right-Angled Triangle with Continuous Numbers\n";
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << num++ << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow pyramid with continuous numbers
void pattern27(int n) {
    cout << "Pattern 27: Hollow Pyramid with Continuous Numbers\n";
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << num++ << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow diamond with continuous numbers
void pattern28(int n) {
    cout << "Pattern 28: Hollow Diamond with Continuous Numbers\n";
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << num++ << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << num++ << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with numbers in reverse order
void pattern29(int n) {
    cout << "Pattern 29: Right-Angled Triangle with Numbers in Reverse Order\n";
    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted right-angled triangle with numbers in reverse order
void pattern30(int n) {
    cout << "Pattern 30: Inverted Right-Angled Triangle with Numbers in Reverse Order\n";
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a pyramid with numbers in reverse order
void pattern31(int n) {
    cout << "Pattern 31: Pyramid with Numbers in Reverse Order\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted pyramid with numbers in reverse order
void pattern32(int n) {
    cout << "Pattern 32: Inverted Pyramid with Numbers in Reverse Order\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a diamond with numbers in reverse order
void pattern33(int n) {
    cout << "Pattern 33: Diamond with Numbers in Reverse Order\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with alphabets in reverse order
void pattern34(int n) {
    cout << "Pattern 34: Right-Angled Triangle with Alphabets in Reverse Order\n";
    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted right-angled triangle with alphabets in reverse order
void pattern35(int n) {
    cout << "Pattern 35: Inverted Right-Angled Triangle with Alphabets in Reverse Order\n";
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a pyramid with alphabets in reverse order
void pattern36(int n) {
    cout << "Pattern 36: Pyramid with Alphabets in Reverse Order\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted pyramid with alphabets in reverse order
void pattern37(int n) {
    cout << "Pattern 37: Inverted Pyramid with Alphabets in Reverse Order\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a diamond with alphabets in reverse order
void pattern38(int n) {
    cout << "Pattern 38: Diamond with Alphabets in Reverse Order\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with continuous numbers in reverse order
void pattern39(int n) {
    cout << "Pattern 39: Right-Angled Triangle with Continuous Numbers in Reverse Order\n";
    int num = n * (n + 1) / 2;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << num-- << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with continuous alphabets in reverse order
void pattern40(int n) {
    cout << "Pattern 40: Right-Angled Triangle with Continuous Alphabets in Reverse Order\n";
    char ch = 'A' + n * (n + 1) / 2 - 1;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << ch-- << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow right-angled triangle with continuous numbers in reverse order
void pattern41(int n) {
    cout << "Pattern 41: Hollow Right-Angled Triangle with Continuous Numbers in Reverse Order\n";
    int num = n * (n + 1) / 2;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << num-- << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow pyramid with continuous numbers in reverse order
void pattern42(int n) {
    cout << "Pattern 42: Hollow Pyramid with Continuous Numbers in Reverse Order\n";
    int num = n * (n + 1) / 2;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << num-- << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a hollow diamond with continuous numbers in reverse order
void pattern43(int n) {
    cout << "Pattern 43: Hollow Diamond with Continuous Numbers in Reverse Order\n";
    int num = n * (n + 1) / 2;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << num-- << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << num-- << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with numbers in reverse order
void pattern44(int n) {
    cout << "Pattern 44: Right-Angled Triangle with Numbers in Reverse Order\n";
    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted right-angled triangle with numbers in reverse order
void pattern45(int n) {
    cout << "Pattern 45: Inverted Right-Angled Triangle with Numbers in Reverse Order\n";
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a pyramid with numbers in reverse order
void pattern46(int n) {
    cout << "Pattern 46: Pyramid with Numbers in Reverse Order\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted pyramid with numbers in reverse order
void pattern47(int n) {
    cout << "Pattern 47: Inverted Pyramid with Numbers in Reverse Order\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a diamond with numbers in reverse order
void pattern48(int n) {
    cout << "Pattern 48: Diamond with Numbers in Reverse Order\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a right-angled triangle with alphabets in reverse order
void pattern49(int n) {
    cout << "Pattern 49: Right-Angled Triangle with Alphabets in Reverse Order\n";
    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print an inverted right-angled triangle with alphabets in reverse order
void pattern50(int n) {
    cout << "Pattern 50: Inverted Right-Angled Triangle with Alphabets in Reverse Order\n";
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int n = 5; // Number of rows for the patterns
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);
    pattern23(n);
    pattern24(n);
    pattern25(n);
    pattern26(n);
    pattern27(n);
    pattern28(n);
    pattern29(n);
    pattern30(n);
    pattern31(n);
    pattern32(n);
    pattern33(n);
    pattern34(n);
    pattern35(n);
    pattern36(n);
    pattern37(n);
    pattern38(n);
    pattern39(n);
    pattern40(n);
    pattern41(n);
    pattern42(n);
    pattern43(n);
    pattern44(n);
    pattern45(n);
    pattern46(n);
    pattern47(n);
    pattern48(n);
    pattern49(n);
    pattern50(n);
    return 0;
}