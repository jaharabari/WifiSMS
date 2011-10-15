/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIEvent.h>
#import <UIKit/UIInternalEvent.h>
#import <Availability2.h>

@class NSTimer;

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1
@interface UIMotionEvent : UIInternalEvent {
#else
@interface UIMotionEvent : UIEvent {
#endif
	id _motionAccelerometer;
	int _subtype;
	int _shakeState;
	int _stateMachineState;
	double _shakeStartTime;
	double _lastMovementTime;
	double _highLevelTime;
	double _lowEndTimeout;
	NSTimer* _idleTimer;
	BOOL _sentMotionBegan;
	float _lowPassState[10];
	unsigned _lowPassStateIndex;
	unsigned _highPassStateIndex;
	float _highPassState[2];
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1
	int notifyToken;
#endif
}
@property(assign, nonatomic) int shakeState;
-(id)_init;
-(void)dealloc;
-(int)type;
-(int)subtype;
-(void)_setSubtype:(int)subtype;
-(id)description;
-(void)_willResume;
-(void)_willSuspend;
-(void)_accelerometerDidDetectMovementWithTimestamp:(double)_accelerometer;
-(void)_idleTimerFired;
-(void)accelerometer:(id)accelerometer didAccelerateWithTimeStamp:(double)timeStamp x:(float)x y:(float)y z:(float)z eventType:(int)type;
-(int)_feedStateMachine:(float)machine currentState:(int)state timestamp:(double)timestamp;
-(float)_highPass:(float)pass;
-(void)_resetLowPassState;
-(float)_lowPass:(float)pass;
-(float)_determineShakeLevelX:(float)x y:(float)y currentState:(int)state;
-(int)_shakeState;
+(void)_enablePeakDetectionIfNecessary __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
@end

