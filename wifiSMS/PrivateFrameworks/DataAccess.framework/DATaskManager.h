/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableArray, <DATask>, NSMutableSet;



@interface DATaskManager : NSObject 
{
    NSMutableArray *_queuedExclusiveTasks;
    <DATask> *_activeExclusiveTask;
    NSMutableSet *_independentTasks;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_modalHeldIndependentTasks;
    NSMutableArray *_queuedTasks;
    <DATask> *_activeQueuedTask;
    <DATask> *_modalHeldActiveQueuedTask;
    NSMutableArray *_queuedModalTasks;
    <DATask> *_activeModalTask;
    NSInteger _state;
}

@property(readonly) NSArray *allTasks;
@property(readonly) NSArray *queuedTasks; /* unknown property attribute: V_queuedTasks */
@property(readonly) <DATask> *activeQueuedTask; /* unknown property attribute: V_activeQueuedTask */
@property(readonly) <DATask> *activeModalTask; /* unknown property attribute: V_activeModalTask */


- (id)allTasks;
- (id)activeModalTask;
- (id)init;
- (void)dealloc;
- (void)submitExclusiveTask:(id)arg1;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(BOOL)arg2;
- (void)submitIndependentTask:(id)arg1;
- (void)submitQueuedTask:(id)arg1;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (void)cancelTask:(id)arg1;
- (void)cancelAllTasks;
- (void)shutdown;
- (id)stateString;
- (void)taskDidFinish:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (void)_performTask:(id)arg1;
- (void)_requestCancelTasksWithReason:(NSInteger)arg1;
- (void)_startModal:(id)arg1;
- (void)_reactivateHeldTasks;
- (void)_makeStateTransition;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (void)_schedulePerformTask:(id)arg1;
- (void)_scheduleStartModal:(id)arg1;
- (void)_cancelTasksWithReason:(NSInteger)arg1;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (id)_getQueuedExclusiveTasks;
- (id)_getIndependentTasks;
- (id)_getHeldIndependentTasks;
- (id)_getModalHeldIndependentTasks;
- (id)_getQueuedTasks;
- (id)_getQueuedModalTasks;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (id)queuedTasks;
- (id)activeQueuedTask;

@end
