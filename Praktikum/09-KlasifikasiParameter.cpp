// Parameter Classification
#include <cstdio>
/*
Value Parameter
- Pas-by-value
- a copy of the parameters created
*/
void foo(int n){
    n++;
}

int main(){
    int x = 2;
    foo(x);
    printf("%d\n", x);
}

/*
Reference Parameter
- pas-by-reference
- actually the parameter itself is passed
- use the reference operator “&”
*/
void foo(int &n){
    n++;
}

int main(){
    int x = 2;
    foo(x);
    printf("%d\n", x);
}

/*
Constant Parameter
- pass-by-value
- a copy of the parameters was made and he was very strict as a constant (cannot be changed).
*/
void foo(int const n){
    n++; // => Fail, can't modified const value
}

int main(){
    int x = 2;
    foo(x);
    printf("%d\n", x);
}

/*
Const Reference Parameter
- pass-by-ref
- actually the parameter itself is passed but avoid modification
*/
void foo(int const &n){
    // todo
}

/*
Pointer Parameter
- pass-by-value
- a copy of the parameters created
*/
void foo(int *n){
    // todo
}
