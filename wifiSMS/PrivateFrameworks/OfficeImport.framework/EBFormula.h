/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface EBFormula : NSObject 
{
}

+ (id)edFormulaFromXlCell:(struct XlCell { int (**x1)(); unsigned short x2; short x3; short x4; NSInteger x5; double x6; struct XlString {} *x7; NSInteger x8; struct XlFormulaInfo {} *x9; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x10; void*x11; void*x12; }*)arg1 state:(id)arg2;
     /* Encoded args for previous method: @16@0:4^{XlCell=^^?Sssid^{XlString}i^{XlFormulaInfo}BBB}8@12 */

+ (id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withFormulaLength:(NSInteger)arg2 state:(id)arg3;
+ (NSInteger)convertXlFormulaTypeEnumToED:(NSInteger)arg1 formulaInfo:(struct XlFormulaInfo { int (**x1)(); NSInteger x2; struct OcText {} *x3; char *x4; NSUInteger x5; short x6; struct XlShrFmla {} *x7; struct XlArray {} *x8; struct XlTable {} *x9; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x10; void*x11; void*x12; void*x13; }*)arg2;
     /* Encoded args for previous method: i16@0:4i8^{XlFormulaInfo=^^?i^{OcText}*Is^{XlShrFmla}^{XlArray}^{XlTable}BBBB}12 */

+ (NSInteger)convertEDFormulaTypeEnumToXl:(NSInteger)arg1;


@end
