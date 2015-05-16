#ifndef CHALLENGES_H_INCLUDED
#define CHALLENGES_H_INCLUDED

#define PI 3.1415926535

struct CoordinateXY {
    double x;
    double y;
};

struct CoordinateXYZ {
    double x;
    double y;
    double z;
};

class CoordinateSyncronization {
public:
    void syncronizeCoords();
};

class BasicFunctions {
private:
    int getFactorizationCount(int n);
    int *primeFactors(int n);
    int originalNumber;
public:
    BasicFunctions(int n);
    ~BasicFunctions();
    void printIntPointer(int *n, int length);
    int getOriginalNumber();
    int *factors;
    int length;
};


#endif
