/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface EBContentFormat : NSObject 
{
}

+ (id)edContentFormatFromXlFormat:(struct XlFormat { int (**x1)(); struct XlHeader { NSUInteger x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; struct XlString {} *x3; short x4; }*)arg1 edResources:(id)arg2;
+ (struct XlFormat { int (**x1)(); struct XlHeader { NSUInteger x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; struct XlString {} *x3; short x4; }*)xlFormatFromEDContentFormat:(id)arg1;
+ (id)edContentFormatFromXlDXfUserFmt:(struct XlDXfUserFmt { int (**x1)(); /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x2; short x3; struct XlString {} *x4; }*)arg1 edResources:(id)arg2;
     /* Encoded args for previous method: @16@0:4^{XlDXfUserFmt=^^?Bs^{XlString}}8@12 */

+ (struct XlDXfUserFmt { int (**x1)(); /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x2; short x3; struct XlString {} *x4; }*)xlDXfUserFmtFromEDContentFormat:(id)arg1;
     /* Encoded args for previous method: ^{XlDXfUserFmt=^^?Bs^{XlString}}12@0:4@8 */



@end
