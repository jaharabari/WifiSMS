/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface EDTwoCellAnchor : EDAnchor 
{
    struct EDCellAnchorMarker { 
        NSInteger columnIndex; 
        float columnAdjustment; 
        NSInteger rowIndex; 
        float rowAdjustment; 
    } mFrom;
    struct EDCellAnchorMarker { 
        NSInteger columnIndex; 
        float columnAdjustment; 
        NSInteger rowIndex; 
        float rowAdjustment; 
    } mTo;
    BOOL mIsRelative;
}


- (struct EDCellAnchorMarker { NSInteger x1; float x2; NSInteger x3; float x4; })from;
- (void)setFrom:(struct EDCellAnchorMarker { NSInteger x1; float x2; NSInteger x3; float x4; })arg1;
- (struct EDCellAnchorMarker { NSInteger x1; float x2; NSInteger x3; float x4; })to;
- (void)setTo:(struct EDCellAnchorMarker { NSInteger x1; float x2; NSInteger x3; float x4; })arg1;
- (BOOL)isRelative;
- (void)setRelative:(BOOL)arg1;

@end
