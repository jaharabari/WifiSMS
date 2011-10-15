/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSDate, CPProgressStage;



@interface CPProgressContext : NSObject 
{
    CPProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
}

+ (void)createContextForCurrentThread;
+ (void)removeContextForCurrentThread;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)removeProgressObserver:(id)arg1;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)endStage;
+ (void)advanceProgress:(double)arg1;
+ (void)setProgress:(double)arg1;
+ (void)setMessage:(id)arg1;
+ (double)currentPosition;
+ (id)contextForCurrentThread;
+ (id)stageForCurrentThread;

- (id)init;
- (void)dealloc;
- (id)currentStage;
- (void)reportProgress:(double)arg1;

@end
