//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UILongPressGestureRecognizer.h>

@class UIKBPanGestureVelocitySample;

@interface _UITextSelectionForceGesture : UILongPressGestureRecognizer
{
    _Bool _shouldFailWithoutForce;
    _Bool _didLongPress;
    _Bool _touchEclipsesVelocity;
    UIKBPanGestureVelocitySample *_velocitySample;
    UIKBPanGestureVelocitySample *_previousVelocitySample;
    UIKBPanGestureVelocitySample *_liftOffSample;
    double _increasingForceTimestamp;
    double _lastTouchTime;
    long long _liftOffState;
    long long _increasingForceState;
    struct CGPoint _lastSceneReferenceLocation;
    struct CGPoint _lastUnadjustedSceneReferenceLocation;
    struct CGRect _velocityRange;
}

@property(nonatomic) struct CGRect velocityRange; // @synthesize velocityRange=_velocityRange;
@property(nonatomic) long long increasingForceState; // @synthesize increasingForceState=_increasingForceState;
@property(nonatomic) long long liftOffState; // @synthesize liftOffState=_liftOffState;
@property(nonatomic) struct CGPoint lastUnadjustedSceneReferenceLocation; // @synthesize lastUnadjustedSceneReferenceLocation=_lastUnadjustedSceneReferenceLocation;
@property(nonatomic) struct CGPoint lastSceneReferenceLocation; // @synthesize lastSceneReferenceLocation=_lastSceneReferenceLocation;
@property(nonatomic) double lastTouchTime; // @synthesize lastTouchTime=_lastTouchTime;
@property(nonatomic) double increasingForceTimestamp; // @synthesize increasingForceTimestamp=_increasingForceTimestamp;
@property(nonatomic) _Bool touchEclipsesVelocity; // @synthesize touchEclipsesVelocity=_touchEclipsesVelocity;
@property(nonatomic) _Bool didLongPress; // @synthesize didLongPress=_didLongPress;
@property(nonatomic) _Bool shouldFailWithoutForce; // @synthesize shouldFailWithoutForce=_shouldFailWithoutForce;
@property(readonly, getter=_liftOffSample) UIKBPanGestureVelocitySample *_liftOffSample; // @synthesize _liftOffSample;
@property(readonly, getter=_previousVelocitySample) UIKBPanGestureVelocitySample *_previousVelocitySample; // @synthesize _previousVelocitySample;
@property(readonly, getter=_velocitySample) UIKBPanGestureVelocitySample *_velocitySample; // @synthesize _velocitySample;
- (_Bool)forceHasIncreasedForTimeInterval:(double)arg1;
- (struct CGPoint)_centroidInView:(id)arg1;
- (void)_updateLiftOffState;
- (_Bool)shouldResetRangeForVelocity:(struct CGPoint)arg1 previousVelocity:(struct CGPoint)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2 physicalTouch:(id)arg3;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;
- (struct CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint)arg1;
- (struct UIOffset)_offsetInViewFromSceneReferenceLocation:(struct CGPoint)arg1 toSceneReferenceLocation:(struct CGPoint)arg2;
- (struct CGPoint)_locationOfTouches:(id)arg1;
- (struct CGPoint)velocityInView:(id)arg1;
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (void)reset;
- (void)_resetVelocitySamples;
- (_Bool)_shouldDelayUntilForceLevelRequirementIsMet;
- (void)enoughTimeElapsed:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

