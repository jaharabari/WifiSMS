/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableString, NSMutableArray;



@interface PlainTextDocument : NSObject 
{
    NSMutableString *_text;
    NSMutableArray *_fragments;
}


- (void)dealloc;
- (void)appendString:(id)arg1 withQuoteLevel:(NSUInteger)arg2;
- (NSUInteger)fragmentCount;
- (void)getString:(id*)arg1 quoteLevel:(NSUInteger*)arg2 ofFragmentAtIndex:(NSInteger)arg3;
- (id)string;
- (id)archivedRepresentation;
- (void)appendArchivedRepresentation:(id)arg1;
- (void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(BOOL*)arg2 encoding:(unsigned long)arg3;

@end
