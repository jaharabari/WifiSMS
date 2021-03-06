/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDBorders, NSColorStub;



@interface EMBordersProperty : CMProperty <NSCopying>
{
    EDBorders *edValue;
    NSColorStub *mBorderColor;
    NSColorStub *mBorderTopColor;
    NSColorStub *mBorderLeftColor;
    NSColorStub *mBorderBottomColor;
    NSColorStub *mBorderRightColor;
    NSInteger mBorderStyle[5];
    NSInteger mBorderWidth[5];
}


- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithOADStroke:(id)arg1;
- (id)initWithEDBorders:(id)arg1;
- (id)borderColor;
- (NSInteger*)borderStyles;
- (NSInteger*)borderWidths;
- (BOOL)isNoneAtLocation:(NSInteger)arg1;
- (void)setNoneAtLocation:(NSInteger)arg1;
- (id)cssStringForName:(id)arg1;
- (id)cssString;
- (void)setBorderStyleAndWidth:(NSInteger)arg1 location:(NSUInteger)arg2;
- (id)stringFromStyleEnum:(NSInteger)arg1;
- (id)stringFromWidthEnum:(NSInteger)arg1;
- (id)stringFromColor:(id)arg1;
- (id)styleString;
- (id)widthString;
- (id)colorString;
- (BOOL)hasSameStylesAs:(id)arg1;
- (BOOL)hasSameWidthsAs:(id)arg1;
- (BOOL)hasSameColorsAs:(id)arg1;
- (id)styleHashNumber;
- (id)widthHashNumber;

@end
