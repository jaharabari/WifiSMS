/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSNumber, NSString;



@interface ASAttachment : ASItem <DAMailMessageAttachment>
{
    NSString *_attName;
    NSNumber *_attSize;
    NSNumber *_attMethod;
    NSString *_attDisplayName;
    NSString *_attContentId;
    NSString *_attContentLocation;
    NSNumber *_attIsInline;
}

@property(copy) NSNumber *isInline; /* unknown property attribute: V_attIsInline */
@property(copy) NSString *contentLocation; /* unknown property attribute: V_attContentLocation */
@property(copy) NSString *contentId; /* unknown property attribute: V_attContentId */
@property(copy) NSString *displayName; /* unknown property attribute: V_attDisplayName */
@property(copy) NSNumber *method; /* unknown property attribute: V_attMethod */
@property(copy) NSNumber *size; /* unknown property attribute: V_attSize */
@property(copy) NSString *name; /* unknown property attribute: V_attName */

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (void)setPercentEscapedName:(id)arg1;
- (void)dealloc;
- (id)asParseRules;
- (id)description;
- (id)isInline;
- (void)setIsInline:(id)arg1;
- (id)contentLocation;
- (void)setContentLocation:(id)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)method;
- (void)setMethod:(id)arg1;
- (id)size;
- (void)setSize:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end
