/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDWPColumn : NSObject 
{
    long mIndex;
    float mWidth;
    float mSpacing;
    BOOL mHasSpacing;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (long)index;
- (float)width;
- (BOOL)hasSpacing;
- (float)spacing;

@end
