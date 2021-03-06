//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUState, CUStateMachine, NSDictionary, NSPointerArray;

@interface SUICProgressStateMachine : NSObject
{
    CUStateMachine *_underlyingStateMachine;
    NSDictionary *_stateForStateName;
    unsigned int _currentState;
    CUState *_abstractState;
    NSPointerArray *_stateMachineObservers;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_stateMachineObservers, setter=_setStateMachineObservers:) NSPointerArray *stateMachineObservers; // @synthesize stateMachineObservers=_stateMachineObservers;
- (void)_ignoreEvent:(unsigned int)arg1;
- (void)_transitionToState:(unsigned int)arg1 forEvent:(unsigned int)arg2;
- (void)addObservers:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setObservers:(id)arg1;
@property(readonly) unsigned int state;
- (void)handleEvent:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

