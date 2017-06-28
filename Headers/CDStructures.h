//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BCEdgePaddings {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct BCPixel {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FBBezierCurveData {
    struct CGPoint endPoint1;
    struct CGPoint controlPoint1;
    struct CGPoint controlPoint2;
    struct CGPoint endPoint2;
    char isStraightLine;
    char looksLikeStraightLine;
    double length;
    struct CGRect bounds;
    char isPoint;
    struct CGRect boundingRect;
};

struct FBBezierCurveLocation {
    double _field1;
    double _field2;
};

struct FBBezierPathElement {
    int _field1;
    struct CGPoint _field2;
    struct CGPoint _field3[2];
};

struct FBContourWindingRuleResult {
    int _field1;
    int _field2;
};

struct FBRange {
    double minimum;
    double maximum;
};

struct MSModelObject {
    Class _field1;
    id _field2;
    id _field3;
    id _field4;
    char _field5;
};

struct MSPresetIteratorStruct {
    long long _field1;
    long long _field2;
    long long _field3;
};

struct MSTangent {
    double _field1;
    double _field2;
    double _field3;
};

struct NSBezierElement {
    unsigned long long _field1;
    struct CGPoint _field2;
    struct CGPoint _field3[2];
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct NSObject {
    Class _field1;
};

struct _CHTransformStruct {
    double _field1;
    char _field2;
    char _field3;
    char _field4;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct addrinfo {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    char *_field6;
    struct sockaddr *_field7;
    struct addrinfo *_field8;
};

struct sockaddr;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long numberOfRows;
    unsigned long long numberOfColumns;
    long long horizontalPadding;
    long long verticalPadding;
    char hasHorizontalPadding;
    char hasVerticalPadding;
    char skipFillingHoles;
} CDStruct_ec0e0888;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long byEvent[6];
} CDStruct_aac06691;

typedef struct {
    char *_field1;
    unsigned int _field2;
    char *_field3;
    char *_field4;
} CDStruct_5b5d1a5d;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
} CDStruct_8727d297;

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;

