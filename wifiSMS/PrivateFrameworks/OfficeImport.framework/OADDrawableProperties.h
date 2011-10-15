/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADHyperlink, OADOrientedBounds;



@interface OADDrawableProperties : OADProperties 
{
    OADOrientedBounds *mOrientedBounds;
    BOOL mHasAspectRatioLocked;
    BOOL mAspectRatioLocked;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
}


- (id)initWithDefaults;
- (void)dealloc;
- (id)orientedBounds;
- (void)setOrientedBounds:(id)arg1;
- (BOOL)hasOrientedBounds;
- (BOOL)areOrientedBoundsOverridden;
- (BOOL)isAspectRatioLocked;
- (void)setAspectRatioLocked:(BOOL)arg1;
- (BOOL)hasAspectRatioLocked;
- (id)clickHyperlink;
- (void)setClickHyperlink:(id)arg1;
- (id)hoverHyperlink;
- (void)setHoverHyperlink:(id)arg1;

@end
