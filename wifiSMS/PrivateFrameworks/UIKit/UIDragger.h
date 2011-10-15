/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>
#import "UIKit-Structs.h"

@class NSArray, UIImageView, UIView;

@interface UIDragger : NSObject {
	/*function-pointer*/ void* _interpolator;
	UIView* _target;
	id _delegate;
	SEL _action;
	CGPoint _startLocation;
	CGPoint _stopLocation;
	double _duration;
	BOOL _showFinger;
	unsigned _port;
	NSArray* _modes;
	unsigned long long _startTimestamp;
	unsigned long long _stopTimestamp;
	unsigned long long _lastTimestamp;
	BOOL _waitingForSmoothScrolling;
	UIImageView* _fingerView;
}
-(id)init;
-(void)dealloc;
-(void)setInterpolation:(/*function-pointer*/ void*)interpolation;
-(void)setTarget:(id)target;
-(void)setDelegate:(id)delegate;
-(void)setAction:(SEL)action;
-(void)setStartLocation:(CGPoint)location;
-(void)setStopLocation:(CGPoint)location;
-(void)setDuration:(double)duration;
-(void)showFinger;
-(void)_postMouseEvent:(int)event timestamp:(unsigned long long)timestamp location:(CGPoint)location;
-(double)_delayUntilNextEvent;
-(void)dragDidEnd;
-(void)_smoothScrollingWillStart:(id)_smoothScrolling;
-(void)_smoothScrollingDidEnd:(id)_smoothScrolling;
-(void)_stopDrag:(id)drag;
-(void)_continueDrag:(id)drag;
-(void)run;
@end

